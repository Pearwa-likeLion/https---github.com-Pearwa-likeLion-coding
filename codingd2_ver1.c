//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)

#include <stdio.h>

int main(){
    int num[3],max=0,min,mid=0;
    scanf("%d %d %d",&num[0],&num[1],&num[2]);

    for(int i =0;i<3;i++){
        if(i==0){
            max=num[0];
            min=num[0];
            continue;
        }
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]<min){
            min = num[i];
            }
    }

    if(num[1]== max || num[2] == max || num[3] == max) mid = max;
    if(num[1]== min || num[2] == min || num[3] == min) mid = min;

     for(int i =0;i<3;i++){
        if(num[i]==max || num[i]==min){
            continue;
        }
        else{
            mid = num[i];
        }
    }
    printf("%d + %d is give the most value \n",max,mid);

}
