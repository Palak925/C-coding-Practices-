#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int sum=0;
printf("Enter the 5 element: ");
 for(i=0;i<5;i++)
{
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
}
 printf("Sum =%d",sum);
 return 0;

}