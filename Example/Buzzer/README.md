# How to use Buzzer (THE HARD WAY)

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

# How to use Buzzer (THE EASY WAY)

__DON'T FORGOT TO DOWNLOAD `Buzzer.hpp` AND PUT IT IN THE SAME FLODERS__

สร้างตัวแปร `Buzzer ชื่อตัวแปร(pin)`

เล่นโน๊ต `ชื่อตัวแปร.play(NOTE, duration)` 
`NOTE`เช่น `NOTE_C4` เป็นต้น
`duration` เช่น 2 โน๊ตตัวขาว, 4 โน๊ตตัวดำ

หยุดเล่นโน๊ต `ชื่อตัวแปร.stop()` 
