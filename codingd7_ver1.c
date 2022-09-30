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
#include <string.h>
#include <stdlib.h>

int calculate(int p_one, int p_two, int *answer, int m, int n)
{
    *answer = p_one + p_two;
    return *answer;
}

int main()
{
    int m, n;
    printf("Enter m ,n for matrix : ");
    scanf("%d %d", &m, &n);

    // variable
    int mtone[2 * m][2 * n];
    int ans[m][n];
    char buf[100];
    int i = 0;
    char *p;
    char *array[2 * m];
    int arrnum[2 * m][2 * n];
    int x;
    char temp;

    // put number in matrix m × n
    for (int j = 0; j < 2 * m; j++)
    {
        printf("Enter number for matrix : ");
        scanf("%c", &temp);
        scanf("%[^\n]s", buf);
        p = strtok(buf, " ");

        while (p != NULL)
        {
            array[i++] = p;
            p = strtok(NULL, " ");
        }

        for (i = 0; i < n; ++i)
        {
            mtone[j][i] = atoi(array[i]);
        }
    }

    // calcutate บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n
    for (int h = 0; h < m; h++)
    {
        for (int g = 0; g < n; g++)
        {
            int x=h+m;
            calculate(mtone[h][g], mtone[x][g], &ans[h][g], m, n);
        }
    }

    //แสดงผลลัพท์เป็น matrix
    for (int l = 0; l < m; l++)
    {
        for (int r = 0; r < n; r++)
        {
            printf("%d ",ans[l][r]);
        }
        printf("\n");
    }
}
