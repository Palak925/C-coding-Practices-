#include <stdio.h>
int main()
{
    int Choice,quantity,total,discount,final_bill;
   printf("Menu\n");
printf("1. Pizza    - Rs.200\n");
printf("2. Burger   - Rs.120\n");
printf("3. Sandwich - Rs.100\n");
printf("4. Pasta    - Rs.150\n");
printf("5. Exit\n");
   printf("Enter your choise:\n");
  scanf("%d",&Choice);
   printf("Enter quantity:\n");
    scanf("%d",&quantity);
 if(quantity<=0)
{
    printf("Error");
}
else
{
    switch (Choice)
    {
    case 1:
        printf("Item:Pizza\n");
        printf("Quantity:%d\n",quantity);
        
        if(total>500)
        {total=200*quantity;
            discount = total * 10 / 100;
            final_bill = total - discount;
            printf("Discount = Rs%d\n", discount);
           printf("Final Bill = Rs%d\n", final_bill);
        }
        else
        {total=200*quantity;
             printf("Total Bill=Rs%d\n",total);
        }
        break;
    

     case 2:
        printf("Item:Burger\n");
        printf("Quantity:%d\n",quantity);
       
        if(total>500)
        { total=120*quantity;
            discount = total * 10 / 100;
            final_bill = total - discount;
            printf("Discount = Rs%d\n", discount);
           printf("Final Bill = Rs%d\n", final_bill);
        }
        else
        {  total=120*quantity;
             printf("Total Bill=Rs%d\n",total);
        }
       
        break;

    case 3:
        printf("Item:Sandwich\n");
        printf("Quantity:%d\n",quantity);
       
         if(total>500)
        { total=100*quantity;
            discount = total * 10 / 100;
            final_bill = total - discount;
            printf("Discount = Rs%d\n", discount);
           printf("Final Bill = Rs%d\n", final_bill);
        }
        else
        { total=100*quantity;
             printf("Total Bill=Rs%d\n",total);
        }
        
        break;

     case 4:
        printf("Item:pasta\n");
        printf("Quantity:%d\n",quantity);
       
         if(total>500)
        {total=150*quantity;
            discount = total * 10 / 100;
            final_bill = total - discount;
            printf("Discount = Rs%d\n", discount);
           printf("Final Bill = Rs%d\n", final_bill);
        }
        else
        {total=150*quantity;
             printf("Total Bill=Rs%d\n",total);
        }
        
        break;
    default:
    printf("Thank you\n");
        break;
    }
}
return 0;
}