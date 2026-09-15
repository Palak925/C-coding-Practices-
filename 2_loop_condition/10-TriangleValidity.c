#include <stdio.h>
int main(){
    
    int a,b,c;
    printf("Enter the Number:");
    scanf("%d %d %d", &a,&b,&c);

    if(a+b>c && b+c>a && a+c>b)
    {
        printf("Valide Trangle:");
    }
   
    else
    {
       printf("InValide Trangle:"); 
    }
 return 0;

}