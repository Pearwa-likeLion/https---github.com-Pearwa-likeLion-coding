//ให้นักศึกษารับข้อมูลเก็บใน array ขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงผลต่างของผลรวมค่าที่ตำแหน่งเป็นเลขคี่ 
//กับผลรวมของค่าที่ตำแหน่งเป็นเลขคู่(โดยคิดว่าตำแหน่งที่ 1 คือตัวเลขตัวแรก) ดังตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)

/*
    Data in array: 1 3 6 2 8 9 4 5 7 6
        Result: -3  
        Hint : (1+2+6+8+9)-(3+4+5+7+10)

    Data in array: 2 6 4 9 5 8 7 3 1 0
        Result: 11
        Hint : (4+5+7+8+9)-(1+2+3+6+10)
    Data in array: 1 2 4 6 7 8 9 3 5 9
        Result: 25
        Hint : (1+5+7+8+9+10)-(2+3+4+6)
*/

#include <stdio.h>
int main(){
    int num[11];
    int sumodd=0 , sumeven=0;
    printf("Data in array: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],&num[10]);    
    for(int i=1;i<11;i++){
        if(num[i]%2==0){
            sumeven += i; 
        }
        else{
            sumodd += i;

        }

    }
     printf("Result: %d \n",sumodd-sumeven);
}

