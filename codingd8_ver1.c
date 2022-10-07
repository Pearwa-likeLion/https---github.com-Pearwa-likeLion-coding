/*
รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม (Level 5)
    ใช้ตรรกศาสตร์ในการคิดหาค่าออกมาโดยการ จัดการในแนวคิดของเมริกซ์ หาค่า 1 หรือ 0 เป็นเมตริกซ์ออกมาในแต่ละเงื่อนไข
*/

#include <stdio.h>

static void XORSwap(int *a,int *b){
    if (*a!=*b)
    {
        *a = (*a & *b) + (*a | *b); // x กล่ายเป็น x + y
        *b = *a + (~*b) + 1; // y กลายเป็น x - y 
        *a = *a + (~*b) + 1; // x กลายเป็น x - y ซึ่งจะได้ค่า x
    }
    if (*a==*b){
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}

int main()
{
    int x, y;
    printf("Enter X , Y : ");
    scanf("%d %d", &x, &y);
    XORSwap(&x,&y);
    printf("Result from switch the value of x,y : %d %d",x,y);
}
