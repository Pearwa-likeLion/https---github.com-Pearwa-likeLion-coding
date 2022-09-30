/*
บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n (Level 4)
ข้อมูลนำเข้า
บรรทัดแรก จำนวนเต็มบวก m, n (1 ≤ m, n ≤ 3) แสดงมิติของเมทริกซ์
บรรทัดที่ 2 ถึงบรรทัดที่ m + 1 จำนวนเต็ม n จำนวนในแต่ละบรรทัด แสดงสมาชิกของเมทริกซ์ที่หนึ่ง บรรทัดที่ m + 2 ถึงบรรทัดที่ 2 · m + 1 จำนวนเต็ม n จำนวนในแต่ละบรรทัด แสดงสมาชิกของเมทริกซ์ที่สอง

ข้อมูลส่งออก
จำนวนบรรทัดทั้งสิ้น m บรรทัด แต่ละบรรทัดแสดงสมาชิกของเมทริกซ์ผลลัพธ์ ในรูปแบบตามข้อมูลนำเข้า


        input			output
case1:
        3 3 			2 3 4
        1 2 3 			4 3 2
        3 2 1 			2 4 3
        1 3 2
        1 1 1
        1 1 1
        1 1 1

case2:
        3 2 			2 3 
        1 2  			4 3 
        3 2  			2 4
        1 3 
        1 1 
        1 1 
        1 1 

case3:
        3 1 			2
        1    			3
        2			    4
        3
        1
        1
        1
*/
#include <stdio.h>
#include <stdlib.h>

int calculate(int p_one,int p_two,int *answer,int m,int n){
            *answer = p_one + p_two;
            return *answer;
    }

int main()
{
    int mtone[100][100];
    int mttwo[100][100];
    int ans[100][100];
    int m, n ;


    printf("Enter m ,n for matrix : ");
    scanf("%d %d", &m, &n);

    //put number in matrix m × n
    for (int j = 0; j < m; j++)
    {
        int i=0;
        printf("Enter matrix 1 [%d,%d]: ", i, j);
        if(n==1){
            scanf("%d", &mtone[j][i]);   
        }
        else if(n==2){
            scanf("%d %d", &mtone[j][i], &mtone[j][i+1]);
        }
        else if(n==3){
            scanf("%d %d %d", &mtone[j][i], &mtone[j][i+1], &mtone[j][i+2]);
        }
    }
    
    for (int k = 0; k < m; k++)
    {
        int i=0;
        printf("Enter matrix 2 [%d,%d]: ", i, k);
        if(n==1){
            scanf("%d", &mttwo[k][i]);   
        }
        else if(n==2){
            scanf("%d %d", &mttwo[k][i], &mttwo[k][i+1]);
        }
        else if(n==3){
            scanf("%d %d %d", &mttwo[k][i], &mttwo[k][i+1], &mttwo[k][i+2]);
        }
    }


    //calcutate บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n
    for(int h=0;h<m;h++){
    for (int g=0;g<n;g++){
        calculate(mtone[h][g],mttwo[h][g],&ans[h][g],m,n);
    }
    }


    //แสดงผลลัพท์เป็น matrix
    for (int l = 0; l < m; l++)
    {
        for (int r = 0; r < n; r++){
            printf("%d ",ans[l][r]);

        }
        printf("\n");
            }
}
