//the use of local static variable


#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    func(n);
    printf("\n");
}

func(int n)
{
    static int step;                    //automatically initialized to 0
    step=step+n;
    printf("%d\t",step);
}

/*output:
Enter a number : 19
19      38      57      76      95      114     133     152     171     190
*/
