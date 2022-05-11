//Q3
//storage specifiers can't be used inside definition of structure templates , so program gives an error

#include<stdio.h>
struct tag{
    auto int x;
    static int y;
};

int main()
{
    struct tag s;
    s.x=4;
    s.y=5;
}
