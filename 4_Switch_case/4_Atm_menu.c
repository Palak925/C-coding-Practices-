#include <stdio.h>
int main()
{ int choice;
int balance = 5000;
int amount;


printf("Enter your choise");
scanf(" %d",&choice);

switch (choice)
{
case 1:
    balance = 5000;
printf("Current Balance=%d",balance);
    break;
case 2:
     printf("Enter amount=");
     scanf("%d",&amount);
     balance=5000+amount;
     printf("Balance=%d",balance);
break;

case 3:
      printf("Enter amount=");
      scanf("%d",&amount);
      if (balance<= balance)
      {
        printf("lower balanced");
      }
      balance=balance-amount;
      
     printf("Balance=%d",balance);
break;

case 4:
printf("Thank you");

default:
printf("Invalide Number");
    break;
}
}