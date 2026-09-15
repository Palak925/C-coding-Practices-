#include <stdio.h>
int main()
{   int number;
    printf("Enter the number 1 to 7\n");
    scanf("%d\n",&number);

 if(number >=1 && number <=7);
 {
    //code statisfied 
 }
    switch(number)
{
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tusday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursaday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("Invalide Number ");
    break;

  return 0;

}
}