//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน 
//แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include <stdio.h>

int main(){
     float height[10];
    printf("Enter Height of 10 Student : ");
    scanf("%f %f %f %f %f %f %f %f %f %f",&height[0],&height[1],&height[2],&height[3],&height[4],&height[5],&height[6],&height[7],&height[8],&height[9]);
    float avrh = (height[0]+height[1]+height[2]+height[3]+height[4]+height[5]+height[6]+height[7]+height[8]+height[9])/10; 
    printf("Average Height of Student  : %-.2f",avrh);
}