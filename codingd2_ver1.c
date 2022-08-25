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

     for(int i =0;i<3;i++){
        if(num[i]==max){
            mid= max;
        }
        else if(num[i]==min){
            mid = min;
        }
        else if(num[i]==max || num[i]==min){
            continue;
        }
        else{
            mid = num[i];
        }
    }
    printf("%d + %d is give the most value \n",max,mid);

}
