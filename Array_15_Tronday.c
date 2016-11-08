#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf ("Hello Boss\n");
    printf ("Nhap gia tri cua n:=");
    scanf  ("%d",&n);
    int a[n]; // khai bao mang a
    for (i=0;i<=n;i++)
    {
        printf("nhap cac phan tu cua mang a i:=");
        scanf ("%d",&a[i]);
    }
    int b[n]; //khai bao mang b
    for (i=0;i<=n;i++)
    {
        printf ("nhap cac phan tu cua mang b i:=");
        scanf ("%d",&b[i]);
    }
    //tron hai day
    for (i=0,a[i]=0;i<=n;i++)
    {
     s=a[i]+b[i];
    }
    printf ("tron hai day la %d",s);
}
