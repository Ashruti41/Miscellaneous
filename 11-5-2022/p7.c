//find out the sum of digits of a number recursively


#include<stdio.h>
int sumd(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d\n",n,sumd(n));
}

int sumd(int n)
{
    static int sum=0;                    
    if(n>0)
    {
        sum=sum+(n%10);
        sumd(n/10);
    }
    return sum;
}


/*output:
Enter a number : 10
Sum of digits of 10 is 1
*/
