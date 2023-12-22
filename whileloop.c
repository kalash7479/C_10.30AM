#include<stdio.h>
int main()
{
    int num,sum = 0,rem;
    printf("Enter any number :");
    scanf("%d",&num); //123


 while(num != 0)   //num = 1
    {
        rem = num % 10;   //1 % 10 = 1
        sum = sum + rem;  //sum = 6
        num = num / 10;   //1 / 10 = 0
    }

    printf("sum is %d ",sum);

    return 0;

}
