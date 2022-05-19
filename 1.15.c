#include<stdio.h>
int main()
{
     int a,b;
     printf("Enter two numbers: ");
     scanf("%d %d",&a,&b);
     printf("x = %d\t\ty =  %d\n",a,b);
     int Sum=a+b;
     int Difference=a-b;
     int Product=a*b;
     float Division=(float)a/b;
     printf("Sum = %d\tDifference = %d\n",Sum,Difference);
     printf("Product = %d\tDivision = %.2f\n",Product,Division);
}
