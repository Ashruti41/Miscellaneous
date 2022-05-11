//Q5


#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0; i>5; i++)
    {
        int i=10;
        sum=sum+i++;
    }
    printf("sum = %d",sum);
}
/*output:
sum = 0
*/

//in this code output is 0 because here in for loop conditions i is equal to 0 but in other condition i is greater than 5 so it is not possible for that we can change it and output will 50

#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=0; i<5; i++)
    {
        int i=10;
        sum=sum+i++;
    }
    printf("sum = %d",sum);
}
/*output:
sum = 50
*/
