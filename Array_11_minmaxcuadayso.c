
#include <stdio.h>
#include <conio.h>
void main()
{
    float i,n, max, min;
    printf("nhap gia tri cua n:= \n");
    scanf("%f",&n);
    float a[n];
    for (i=0;i<n;i++)
       {
        printf("nhap phan tu thu i:=\n");
        scanf ("%f",&a[i]);
        }
    max=a[0];
     for (i=0;i<n;i++)
     {
        if (max<a[i])
         max = a[i];
     }
    printf("max := %f", max);
    min=a[0];
     for (i=0;i<n;i++)
     {
         if (min>a[i])
           min = a[i];
     }
     printf("min :=%f", min);
}
