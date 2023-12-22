#include<stdio.h>
int main()
{
    char alp;
    printf("Enter the alphabet :");
    scanf("%c",&alp);

    if (alp>=65 && alp<=90)
        {
            alp+=32;
            printf("%c",alp);
         }
    else if (alp >=97 &&  alp<=122) 
        {   
            alp-=32;
        printf("%c",alp);
        }
          return 0;

}
 