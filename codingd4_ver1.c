//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน 
//แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include <stdio.h>
float avrheight(float h1,float h2,float h3,float h4,float h5,float h6,float h7,float h8,float h9,float h10){
    float sumh[10] = {h1,h2,h3,h4,h5,h6,h7,h8,h9,h10};
    float sum;
    for (int i=0;i<10;i++){
        sum = sum+sumh[i];
    }
    return sum/10;
}

int main(){
    float height[10];
    printf("Enter Height of 10 Student : ");
    scanf("%f %f %f %f %f %f %f %f %f %f",&height[0],&height[1],&height[2],&height[3],&height[4],&height[5],&height[6],&height[7],&height[8],&height[9]);
    printf("Average Height of Student  : %.2f",avrheight(height[0],height[1],height[2],height[3],height[4],height[5],height[6],height[7],height[8],height[9]));
}