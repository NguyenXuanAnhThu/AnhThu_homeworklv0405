#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,s;
    printf("nhap gia tri cua n:= \n");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
       {
        printf("nhap phan tu thu i:=\n");
        scanf ("%d",&a[i]);
        }
    s=0;
    for (i=0;i<n;i++)
    {
        s +=a[i];
    }
    printf("tong la s:= %d",s);
}
