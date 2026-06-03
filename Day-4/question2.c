#include <stdio.h>
int main()
{
    int i,n,x,y,z;
    printf("enter a number");
    scanf("%d",&n);
    x=0,y=1;
    if(n==1)
    {
        printf("Nth fibonacci term=%d\n",x);
    }
    else if(n==2)
    {
        printf("Nth fibonacci term=%d\n",y);
    }
    else
    {
        for(i=3;i<=n;i++)
         {
            z=x+y;
            x=y;
            y=z;
        }
        printf("Nth fibonacci term=%d\n",y);
    }
    return 0;
}
        
    



        
    
        
    

