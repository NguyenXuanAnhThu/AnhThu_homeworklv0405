#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf("nhap gia tri cua n:= \n");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
       {
        printf("nhap phan tu thu i:=\n");
        scanf ("%d",&a[i]);
        }
    for (i=0;i<n;i++)
        if(a[i]%2==0)
         printf("cac so chan la := %d \n ",a[i]);
    for (i=0;i<n;i++)
        if(a[i]%2!=0)
      printf("cac so le la:= %d \n",a[i]);
}
