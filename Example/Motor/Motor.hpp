#include <Arduino.h>

class Motor
{
public:
    Motor() {}
    Motor(int IN1, int IN2)
    {
        this->IN1 = IN1;
        this->IN2 = IN2;
        this->EN = NULL;
        this->DCA_MAX = 255;
        pinMode(this->IN1, OUTPUT);
        pinMode(this->IN2, OUTPUT);
    }
    Motor(int IN1, int IN2, int EN)
    {
        this->IN1 = IN1;
        this->IN2 = IN2;
        this->EN = EN;
        this->DCA_MAX = 255;
        pinMode(this->IN1, OUTPUT);
        pinMode(this->IN2, OUTPUT);
        if (this->EN != NULL)
            pinMode(this->EN, OUTPUT);
    }
    /* Constructor
     * @param: IN1 (int) - pin number for IN1
     * @param: IN2 (int) - pin number for IN2
     * @param: EN (int) - [OPTIONAL] pin number for EN (must be pwm pin)
     * @param: DCA_MAX (int) - [OPTIONAL] max duty cycle (MAX digital to analog converter value) (default: 255)
     */
    Motor(int IN1, int IN2, int EN, int DCA_MAX)
    {
        this->IN1 = IN1;
        this->IN2 = IN2;
        this->EN = EN;
        this->DCA_MAX = DCA_MAX;
        pinMode(this->IN1, OUTPUT);
        pinMode(this->IN2, OUTPUT);
        if (this->EN != NULL)
            pinMode(this->EN, OUTPUT);
    }

    /* Set the speed of the motor
     * @param: speed (int) - speed of the motor (-DCA_MAX - DCA_MAX)
     */
    void setspeed(int speed)
    {
        if (speed < 0)
            this->forward(speed);
        else if (speed > 0)
            this->backward(-speed);
        else
            this->stop();
    }

    /* set motor forward with speed
     * @param speed (unsigned int): 0 - DCA_MAX (default is 255)
     */
    void forward(unsigned int speed)
    {
        speed = speed * DCA_MAX;
        speed = (speed < 0) ? 0 : speed;
        speed = (speed > DCA_MAX) ? DCA_MAX : speed;
        digitalWrite(this->IN1, HIGH);
        digitalWrite(this->IN2, LOW);
        if (this->EN != NULL)
            analogWrite(this->EN, speed);
    }

    /* set motor backward with speed
     * @param speed (int): 0 - DCA_MAX (default is 255)
     */
    void backward(unsigned int speed)
    {
        speed = speed * DCA_MAX;
        speed = (speed < 0) ? 0 : speed;
        speed = (speed > DCA_MAX) ? DCA_MAX : speed;
        digitalWrite(this->IN1, LOW);
        digitalWrite(this->IN2, HIGH);
        if (this->EN != NULL)
            analogWrite(this->EN, speed);
    }

    /* stop motor
     */
    void stop()
    {
        digitalWrite(this->IN1, LOW);
        digitalWrite(this->IN2, LOW);
        if (this->EN != NULL)
            analogWrite(this->EN, 0);
    }

private:
    int IN1;
    int IN2;
    int EN;
    int DCA_MAX;
};

Motor motor1(2, 3, 5);
Motor motor2(2, 3);