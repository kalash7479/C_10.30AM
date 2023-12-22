#include<stdio.h>
int main(int argc, char const *argv[])
{   int num,pos=0,neg=0,zero=0;
    do
    {   printf("entr the number:");
         scanf("%d",&num);
         if(num >0)
         {  
            printf("number is positive\n");
                pos++;
         }
         else if (num <0)
         {  printf("number is negative\n");
           
            neg++;
         }
         else
         {
            printf("number is zero\n");
          
            zero++;
         }
          printf(" zero number entered is:%d\n",zero);
          printf("negative number entered is :%d\n",neg);
          printf("positive number is :%d\n",pos);

    } while (num!=-1);
     
    printf("out of the loop");
    return 0;
}
