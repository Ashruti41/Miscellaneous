//program that uses a function similar to printf()

#include<stdio.h>
#include<stdarg.h>
void i_to_str(int num,char str[],int b);
void f_to_str(float num,char str[]);
void print(char *format, ...);
int main()
{
    int a=125;
    float b=563.66;
    char c='Q';
    char *name="Ranju";
    print("Value of a in binary = %b\n",a);
    print("Value of a in octal =  %o\n",a);
    print("Value of a in decimal = %d\n",a);
    print("Value of a in hexadecimal = %x\n",a);
    print("Value of b = %f\n",b);
    print("Value of c = %c\n",c);
    print("Value of name = %s\n",name);
}
void print(char *format, ...)
{
    char *p,*str;
    int k;
    float l;
    va_list ap;
    va_start(ap,format);
    
    for(p=format; *p!='\0'; p++)
    {
        if((*p)=='%')
        {
            p++;
            switch(*p)
            {
                case 'b':
                k=va_arg(ap,int);
                i_to_str(k,str,2);
                fputs(str,stdout);
                break;
                
                case 'd':
                k=va_arg(ap,int);
                i_to_str(k,str,10);
                fputs(str,stdout);
                break;
                
                case 'o':
                k=va_arg(ap,int);
                i_to_str(k,str,8);
                fputs(str,stdout);
                break;
                
                case 'x':
                k=va_arg(ap,int);
                i_to_str(k,str,2);
                fputs(str,stdout);
                break;
                
                case 'c':
                k=va_arg(ap,int);
                putchar(k);
                break;
                
                case 's':
                str=va_arg(ap, char *);
                fputs(str,stdout);
                break;
                
                case 'f':
                l=va_arg(ap,double);
                f_to_str(1,str);
                fputs(str,stdout);
                break;
                
                case '%':
                putchar('%');
                break;
                
            }
        }
        else
        putchar(*p);
    }
}
