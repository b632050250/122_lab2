#include<stdio.h>
int main()
{
    char p;
    float t,f,b,c,d,a;
    scanf("%c",&p);
    scanf("%f",&t);
    if(p=='A')
    {
        if((t-200)>0)
        {
            a=t-200;
            printf("%f\n",a);
            b=a-t;
            printf("%f\n",b);
            c=b/60;
            printf("%f\n",c);
            d=(a+c)*3;
            printf("%.2f\n",d);
        }
        else
            printf("199");
    }
    else if(p=='B')
    {
        if((t-400)>0)
        {
            a=t-400;
            b=a-t;
            c=b/60;
            d=(a+c)*2;
            printf("%.2f",d);
        }
        else
            printf("299");
    }
    return 0;
}
