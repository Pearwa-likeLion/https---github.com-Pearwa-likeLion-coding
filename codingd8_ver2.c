/*

รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม (Level 5)
    
            ใช้อัลกอริทึมการสลับ XOR swap

*/

#include <stdio.h>

static void XORSwap(int *a,int *b){
    if (*a!=*b)
    {
        *a ^= *b; // x กล่ายเป็น x + y
        *b ^= *a; // y กลายเป็น (x+y) - y 
        *a ^= *b; // x กลายเป็น (x+y) - ((x+y)-y)
    }
    if (*a==*b){
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}

int main(){
    int x, y;
    printf("Enter X , Y : ");
    scanf("%d %d", &x, &y);
    XORSwap(&x,&y);
    printf("X , Y swap the values : %d %d \n",x,y);

}