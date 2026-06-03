#include <stdio.h>
int main()
{
    int n1,n2,i,j;
    
    printf("enter range");
    scanf("%d%d",&n1 ,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i<2)
        continue;
    
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d ",i);
    }
    return 0;
    
}