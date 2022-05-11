//understand automatic variables
//when the function func() is called first time, the variables x and y are created and initialized and when the control returns to main(), these variables are destroyed. so every time it's value will not changed.


#include<stdio.h>
int main()
{
    func();
    func();
    func();
}

func()
{
    int x=2,y=5;
    printf("x=%d,y=%d\n",x,y);
    x++;
    y++;
}

/*output:
x=2,y=5
x=2,y=5
x=2,y=5
*/
