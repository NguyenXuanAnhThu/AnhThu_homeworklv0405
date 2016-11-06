#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,j;
    printf("nhap gia tri cua n:= \n");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
       {
        printf("nhap phan tu thu i:=\n");
        scanf ("%d",&a[i]);
        }
    for (i=0;i<n;i++)
        for(j=i;j<n;j++)
        {
         if(a[i]>a[j])
         {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
         }
        }
    printf("Day so vua sap xep la:\n");
    for (i=0;i<n;i++)
        printf("%d \n", a[i]);

}
