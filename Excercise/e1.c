//Q1:
//here error occured because lvalue is required for increment operand

#include<stdio.h>
enum month{jan,feb,mar,apr,may};
int main()
{
    enum month m;
    m=++feb;
    printf("%d",m);
}

//but if we want to run this code we change only 

#include<stdio.h>
enum month{jan,feb,mar,apr,may};               //all values are(0,1,2,3,4,5)
int main()
{
    enum month m;
    m=feb;                                  //here we take m=feb so it will easily understand and increase according.
    ++m;
    printf("%d",m);
}
