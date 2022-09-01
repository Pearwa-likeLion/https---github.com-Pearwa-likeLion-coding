//จงเขียนโปรแกรมเพื่อรับข้อมูลชนิดตัวเลข แล้วตรวจสอบว่าตัวเลขที่ผู้ใช้ใส่เข้ามานั้นเป็นจำนวนเฉพาะหรือไม่ 
//เมื่อแสดงผลลัพธ์แล้วให้กลับไปรอรับข้อมูลใหม่วนอย่างนี้ไปเรื่อยๆ จนกระทั่งผู้ใช้ใส่ค่า -99 จึงจบการทำงาน (Level 2)
//test script : 13 ,

#include <stdio.h>
#include <math.h>
int testprime(int n ){

    int x=2;
        while (x < sqrt(n))
        {
            if(n %x==0){
                return 0;
            }
            x++;
        }    
        return 1;
    
}
int main(){
    int num,count=0;
    while (num != -99)
    {
        
        printf("Enter Number: ");
        scanf("%d",&num);
        if(num== -99)break;
        //printf("Num : %d",num);
        if(testprime(num)==1){
            printf("%d is a prime number \n",num);
        }
        else{
            printf("%d is not prime number \n",num);
        }
    }
}