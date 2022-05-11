//Q6

#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0; i>5; i++)
    {
        static int i=10;
        sum=sum+i++;
    }
    printf("sum = %d",sum);
}
/*output:
sum = 0
*/

//we can also change the for loop condition so we will count the sum

#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=0; i>5; i++)
    {
        static int i=10;
        sum=sum+i++;
    }
    printf("sum = %d",sum);
}

/*output:
sum = 60
*/

//here one conclusion occured when we take simple i=10 in for loop that time our ans was 50 but when we take static int i=10 ans was 60 which is correct.
