#include <stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],k=0,c=0,t,b[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  
        if(a[i]!='&')
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[k]=a[i];
                a[j]='&';
                k++;
                c++;
            }
        }
    }
    }
    if(c>0)
    {
    for(i=0;i<k;i++)
    {
        for(j=i+i;j<k;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
    }
    else
    {
        printf("unique");
    }
    getch();
}
