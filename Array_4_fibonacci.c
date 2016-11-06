#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,f[100];
    printf("nhap gia tri cua n:= \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        if (i==0 || i==1)
          {
              f[i]=1;
         printf("f(%d):= %d",i,f[i]);
         }
        else
          {
              f[i]=f[i-1] + f[i-2];
          printf("f(%d):= %d \n",i,f[i]);
          }
}
