# How to use Motor (THE HARD WAY)

## มารู้จัก H-brigde Circuit กัน
![H-brigde Circuit Pictures](https://www.build-electronic-circuits.com/wp-content/uploads/2018/11/H-bridge-switches.png)

ถ้าเราเปิดสวิตช์ S1 กับ S4 Motor จะหมุนไปทางนึง

![H-brigde S1 and S4](https://www.build-electronic-circuits.com/wp-content/uploads/2018/11/H-bridge-switches-1-drawn-217x300.png)

ถ้าเราเปิดสวิตช์ S2 กับ S3 Motor จะหมุนไปอีกทางนึง

![H-brigde S2 and S3](https://www.build-electronic-circuits.com/wp-content/uploads/2018/11/H-bridge-switches-2-drawn-218x300.png)

# How to use Motor (THE EASY WAY)

__DON'T FORGOT TO DOWNLOAD `Motor.hpp` AND PUT IT IN THE SAME FLODERS__

สร้างตัวแปร motor `motor ชื่อตัวแปร(IN1, IN2, EN)`
* หาก motor หมุนหลับดาน้จากที่ต้องการให้ สลับ IN1 กับ IN2

ปรับความเร็ว (+ ไปข้างหน้า, - ไปข้างหลัง) `ชื่อตัวแปร.setspeed(speed)`

* `speed` เป็น int (-255-255)

หมุนไปข้างหน้า `ชื่อตัวแปร.forwards(speed)`

หมุนไปข้างหลัง `ชื่อตัวแปร.backwards(speed)`

* `speed` เป็น int (0-255)

