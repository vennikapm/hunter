#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0)
            {
                printf("%d ",a[i]);
            }
        }
        else
        {
            if(i%2==0)
            {
                printf("%d ",a[i]);
            }
        }
    }
    getch();
}
