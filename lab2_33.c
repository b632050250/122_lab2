
#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,f[3];
    char p[4];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        d=a;
        a=b;
        b=d;
    }
    if(a>c)
    {
        d=a;
        a=c;
        c=d;
    }
    if(b>c)
    {
       d=b;
       b=c;
       c=d;
    }
    scanf("%s",p);
    while(e<3)
    {
        if(p[e]=='A')
        {
            f[e]=a;
        }
        else if(p[e]=='B')
        {
            f[e]=b;
        }
        else if(p[e]=='C')
        {
            f[e]=c;
        }
        e++;
    }
    printf("%d %d %d",f[0],f[1],f[2]);
    return 0;
}
