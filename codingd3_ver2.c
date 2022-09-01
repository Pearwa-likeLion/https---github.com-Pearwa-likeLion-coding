//จงเขียนโปรแกรมเพื่อรับข้อมูลชนิดตัวเลข แล้วตรวจสอบว่าตัวเลขที่ผู้ใช้ใส่เข้ามานั้นเป็นจำนวนเฉพาะหรือไม่ 
//เมื่อแสดงผลลัพธ์แล้วให้กลับไปรอรับข้อมูลใหม่วนอย่างนี้ไปเรื่อยๆ จนกระทั่งผู้ใช้ใส่ค่า -99 จึงจบการทำงาน (Level 2)

#include <stdio.h>
#include <math.h>

int main(){
    int n, x;
    while (n != -99)
    {
        printf("Enter number to check : "); 
        scanf("%d", &n);
        if (n == -99)break;
        if(n % 2 == 0 && n != 2)
        {
            printf("This number isn't prime number \n");
        }
        else{
            for(x = 3; x < sqrt(n); x += 2){
                if(n % x == 0){
                    printf("This number isn't prime number \n");
                    return 0;
                }
            }
        printf("This number is prime number. \n");

    }
    }
}