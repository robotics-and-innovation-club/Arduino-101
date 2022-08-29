# How to use Buzzer

## Description

- ถ้าไม่ใส่ `duration` จะส่งเสียงจนกว่าจะมี `notone(pin)`
- สามารถใช้ `tone` พร้อมกันได้แค่ 1 ครั้ง
```Arduino
tone(pinNumber, frequency, duration); delay(duration);
// pin: the Arduino pin on which to generate the tone.
// frequency: the frequency of the tone in hertz. Allowed data types: unsigned int.
// duration: the duration of the tone in milliseconds (optional). Allowed data types: unsigned long.
```
```Arduino 
noTone(pinNumber); 
// Stops the generation of a square wave triggered by tone(). 
// Has no effect if no tone is being generated.
```
# DON'T FORGOT TO DOWNLOAD `Buzzer.hpp` AND PUT IT IN THE SAME FLODERS