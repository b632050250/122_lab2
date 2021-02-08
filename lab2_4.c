#include<stdio.h>
int main()
{
    int a,d,c=92;
    char b;
    scanf("%c",&b);
    scanf("%d",&a);
    d=a-(b-64);
    if(d%2!=0)
    {
        if(b>='A'&&b<='I')
        {
            if(a%5==0)
                printf("%c(^_^)/",c);
            else
                printf("(^_^)");
        }
        else if(b>='J'&&b<='R')
        {
            if(a%5==0)
                printf("%c(*o*)/",c);
            else
                printf("(*o*)");
        }
        else if(b>='S'&&b<='Z')
        {
            if(a%5==0)
                printf("%c(T_T)/",c);
            else
                printf("(T_T)");
        }
    }
    else
    {
        if(b>='A'&&b<='I')
        {
            if(a%5==0)
                printf("%c{@_@}/",c);
            else
                printf("{@_@}");
        }
        else if(b>='J'&&b<='R')
        {
            if(a%5==0)
                printf("%c{*v*}/",c);
            else
                printf("{*v*}");
        }
        else if(b>='S'&&b<='Z')
        {
            if(a%5==0)
                printf("%c{x_x}/",c);
            else
                printf("{x_x}");
        }
    }
    return 0;
}
