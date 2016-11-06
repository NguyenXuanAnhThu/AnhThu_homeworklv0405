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
        printf("mang so nguyen = %d\n",a[i]);
}
