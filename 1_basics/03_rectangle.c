#include<stdio.h>
int main()
{  float area,lenght,breadth,Perimeter;
    printf("Enter the lenght:\n");
    scanf("%f", &lenght);
    printf("Enter the breath:\n");
    scanf("%f", &breadth);
    area=lenght*breadth;
    printf("area=%fcm\n",area);
    Perimeter=2*(lenght+breadth);
    printf("Perimeter=%fcm\n");
    return 0;
}