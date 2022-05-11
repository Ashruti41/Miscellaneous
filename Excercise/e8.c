//Q8

#include<stdio.h>
int x=2;
static int y=5;
int main()
{
    int x=3;
    func();
    func();
    printf("Inside main() : x=%d,y=%d\n",x,y);
}
func()
{
    static int x;
    x=x+2;
    printf("Inside func() : x=%d,y=%d\n",x,y);
}

/*output:
Inside func() : x=2,y=5
Inside func() : x=4,y=5
Inside main() : x=3,y=5
*/
