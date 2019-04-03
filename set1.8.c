#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           for(k=j+1;k<n;k++)
           {
            if(a[i]+a[j]==a[k]
            {
                printf("\n%d %d %d",a[i],a[j],a[k]);
            }
            
            }
        }
    }
    getch();
}
