//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)
//string result = (time < 18) ? "Good day." : "Good evening.";

#include <stdio.h>

  
int case1(int a1,int a2,int a3){
    int n1,n2,n3;
    n1=a1+a2;
    n2=a1+a3;
    n3=a2+a3;
    if(n1 > n2 && n1 > n3) return 1;
    if(n2 > n3 && n2 > n1) return 2;
    if(n3 > n1 && n3 > n2) return 3;
}
int main(){
    int a,b,c,n;
    printf("Enter number : ");
    scanf("%d %d %d",&a,&b,&c);
    switch (case1(a,b,c))
    {
    case 1:
        printf("%d + %d is give the most value",a,b);
        break;

    case 2:
        printf("%d + %d is give the most value",a,c);
        break;

    case 3:
        printf("%d + %d is give the most value",b,c);
        break;    
    default:
        break;
    }
}
