//static :a static variable is created during compile time and it remains alive till the end of a program.
//a static variable iis not destroyed like automatic variables so every time x and y value will be increse.


#include<stdio.h>
int main()
{
    func();
    func();
    func();
}

func()
{
    static int x=2,y=5;
    printf("x=%d,y=%d\n",x,y);
    x++;
    y++;
}

/*output:
x=2,y=5
x=3,y=6
x=4,y=7
*/
