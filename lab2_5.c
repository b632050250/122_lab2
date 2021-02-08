#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    switch(b){
        case 1: c=31; break;
        case 2: c=28; break;
        case 3: c=31; break;
        case 4: c=30; break;
        case 5: c=31; break;
        case 6: c=30; break;
        case 7: c=31; break;
        case 8: c=31; break;
        case 9: c=30; break;
        case 10: c=31; break;
        case 11: c=30; break;
        case 12: c=31; break;
    }
    d=(c+a)%7;
    if(d==0)
        printf("7");
    else
        printf("%d",d);
}
