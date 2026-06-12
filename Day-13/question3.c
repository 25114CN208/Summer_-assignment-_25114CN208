#include<stdio.h>
int main()
{
    int n,i,max,mini,a[100];
    printf("enter size of an array");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     max=a[0];
     for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        
    }
     mini=a[0];
     for(i=0;i<n;i++)
    {
        if(a[i]<mini)
        mini=a[i];
    
    }
     printf("max=%d\n",max);
      printf("mini=%d\n",mini);
      return 0;
}
    

     