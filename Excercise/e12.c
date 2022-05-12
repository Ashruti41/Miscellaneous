//Q12

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};
    int c[]={9,10,11,12};
    func(a,b,c);
}
func(int a[],const int b[],int c[])
{
    a=c;
    a[0]++;
    b=c;
    b[0]++;
}
//program gives error because here b is a const int
