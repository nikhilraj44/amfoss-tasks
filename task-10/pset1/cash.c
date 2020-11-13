#include<stdio.h>
#include<math.h>
void main()
{
    float d;
    int c,count=0;
    do{
        printf("changed owed");
        scanf("%f",&d);
    }
    while(d<=0);
    
    c=round(d*100);
    
    while(c>0)
    {
    if(c>=25)
    {
        c-=25;
        count++;
    }
    else if(c>=10)
    {
        c-=10;
        count++;
    }
    else if(c>=5)
    {
        c-=5;
        count++;
    }
    else if(c>=1)
    {
        c-=1;
        count++;
    }
    }
    printf("%d\n",count);
}
