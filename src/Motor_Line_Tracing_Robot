// Motor pin
#define MOTOR_R_1 2
#define MOTOR_R_2 4
#define MOTOR_L_1 16
#define MOTOR_L_2 17

// Motor channel
#define MOTOR_R_1_CH 6
#define MOTOR_R_2_CH 7
#define MOTOR_L_1_CH 4
#define MOTOR_L_2_CH 5

#define SW 15 // SWITCH

void setup()
{
    pinMode(SW, INPUT);
    pinMode(MOTOR_R_1, OUTPUT);
    pinMode(MOTOR_R_2, OUTPUT);
    pinMode(MOTOR_L_1, OUTPUT);
    pinMode(MOTOR_L_2, OUTPUT);
    ledcSetup(MOTOR_R_1_CH, 5000, 8);
    ledcSetup(MOTOR_R_2_CH, 5000, 8);
    ledcSetup(MOTOR_L_1_CH, 5000, 8);
    ledcSetup(MOTOR_L_2_CH, 5000, 8);
    ledcAttachPin(MOTOR_R_1, 6);
    ledcAttachPin(MOTOR_R_2, 7);
    ledcAttachPin(MOTOR_L_1, 4);
    ledcAttachPin(MOTOR_L_2, 5);

    while (digitalRead(SW) == 1)
        ;
}

void loop()
{
    forward(100);
    delay(1000);
    backward(100);
    delay(1000);
    right_around();
    delay(1000);
    left_around();
    delay(1000);
    right();
    delay(1000);
    left();
    delay(1000);
}

/*
meaning MOTOR_FORWARD  = 1
        MOTOR_BACKWARD = 2
*/
enum motor_state
{
    MOTOR_FORWARD,
    MOTOR_BACKWARD,
};

// control motor right 
void motor_right(motor_state state, int speed)
{
    if (state == MOTOR_FORWARD)
    {
        ledcWrite(MOTOR_R_1_CH, 0);
        ledcWrite(MOTOR_R_2_CH, speed);
    }
    else if (state == MOTOR_BACKWARD)
    {
        ledcWrite(MOTOR_R_1_CH, speed);
        ledcWrite(MOTOR_R_2_CH, 0);
    }
}

// control motor left
void motor_left(motor_state state, int speed)
{
    if (state == MOTOR_FORWARD)
    {
        ledcWrite(MOTOR_L_1_CH, 0);
        ledcWrite(MOTOR_L_2_CH, speed);
    }
    else if (state == MOTOR_BACKWARD)
    {
        ledcWrite(MOTOR_L_1_CH, speed);
        ledcWrite(MOTOR_L_2_CH, 0);
    }
}

void forward(int speed)
{
    motor_right(MOTOR_FORWARD, speed);
    motor_left(MOTOR_FORWARD, speed);
}

void backward(int speed)
{
    motor_right(MOTOR_BACKWARD, speed);
    motor_left(MOTOR_BACKWARD, speed);
}

void left_around()
{
    motor_right(MOTOR_FORWARD, 100);
    motor_left(MOTOR_BACKWARD, 100);
}

void right_around()
{
    motor_right(MOTOR_BACKWARD, 100);
    motor_left(MOTOR_FORWARD, 100);
}

void left()
{
    motor_right(MOTOR_FORWARD, 100);
    motor_left(MOTOR_FORWARD, 50);
}

void right()
{
    motor_right(MOTOR_FORWARD, 50);
    motor_left(MOTOR_FORWARD, 100);
}

void stop()
{
    motor_right(MOTOR_FORWARD, 0);
    motor_left(MOTOR_FORWARD, 0);
}
