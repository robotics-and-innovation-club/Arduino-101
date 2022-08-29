# Arduino-101 Crouse

## [ทบทวนความรู้จากรอบที่แล้ว](https://docs.google.com/presentation/d/1WXrz0XFyfMbEx5MtLI-Ycn3ani8FXOyNB7xEZNeLy-M/edit?usp=sharing) By @th-tonhom

### **ชนิดตัวแปร**
| Data Type | Size (in bytes) | Range |
|:---:|:---:|:---:|
|short int|2|-32,768 to 32,767|
|unsigned short int |2|0 to 65,535|
|unsigned int|4|0 to 4,294,967,295|
|int|4|-2,147,483,648 to 2,147,483,647|
|long int|4|-2,147,483,648 to 2,147,483,647|
|unsigned long int|4|0 to 4,294,967,295|
|long long int|8|-(2^63) to (2^63)-1|
|unsigned long long int|8|0 to 18,446,744,073,709,551,615|
|signed char|1|-128 to 127|
|unsigned char|1|0 to 255|
|float|4|+/- 3.4e +/- 38 (~7 digits)|
|double|8|+/- 1.7e +/- 308 (~15 digits)|
|long double|12|+/- 1.7e +/- 308 (~15 digits)|
|wchar_t|2 or 4|1 wide character|
|bool|1|True or False|

### ตัวดำเนินการเปรียบเทียบ
|สัญลักษณ์|ความหมาย|
|:---:|:---:|
|>|มากกว่า|
|>=|มากกว่าหรือเท่ากับ|
|<|น้อยกว่า|
|<=|น้อยกว่าหรือเท่ากับ|
|==|เท่ากับ|
|!=|ไม่เท่ากับ|

### ตัวดำเนินการลอจิก
|สัญลักษณ์|อ่านว่า|ความหมาย|
|:---:|:---:|:---:|
|&&|AND|และ : เงื่อนไขต้องเป็นจริงทั้งหมด  ผลคือจริง|
|\|\||OR|หรือ : เงื่อนไขบางอันเป็นจริง ผลคือจริง|

### คำสั่งต่าง ๆ ที่ควรรู้ [(Arduino Reference)](https://www.arduino.cc/reference/en/)
|Syntax|Description|Examples|
|:---:|:---:|:---:|
||**Digital I/O**||
|`pinMode(pin, mode)`|กำหนดให้ `pin` (ตัวเลข pin) ให้อยู่ใน `mode` (INPUT, OUTPUT, INPUT_PULLUP) | `pinMode(1,OUTPUT)`|
|`digitalRead(pin)`|อ่านค่า digital จาก `pin` result range `HIGH` or `LOW`|`digitalRead(13)`
|`digitalWrite(pin, value)`|OUTPUT `value` (HIGH or LOW) ที่ `pin`|`digitalWrite(13,HIGH)` `digitalWrite(13, 1)`|
||**Analog I/O**||
|`analogRead(pin)`|อ่านค่า analog จาก `pin`|`analogRead(A0)`|
|`analogWrite(pin, value)`|OUTPUT `value` (analog value) ที่ `pin`|`analogWrite(3, 255)` `analogWrite(3, 0)`|

