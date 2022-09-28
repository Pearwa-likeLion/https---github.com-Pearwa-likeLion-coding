/*
จงเขียนโปรแกรมหาค่า x + y โดยรับมาจาก “a.txt” และแสดงใน “b.txt” (Level 4)
a.txt	b.txt
5 5	    10
6 2	    8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num[2],ans;
    char text[100000];
    printf("Char from int : %s",text);
    
   FILE *fp;
   FILE *fa;

    fa = fopen( "a.txt" , "r" );
    fscanf(fa, "%d %d", &num[0], &num[1]);

    for (int i=0;i<2;i++){
            ans += num[i];
        }
    sprintf(text, "%d", ans);



   // write number form calculate to file b.txt
   fp = fopen( "b.txt" , "w" );
   fwrite(text , 1 , strlen(text), fp );

   fclose(fp);
   fclose(fa);

  
   return(0);

}