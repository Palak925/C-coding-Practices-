#include<stdio.h>
int main()
{
    char alpha ;
    printf("Enter the alphabate:\n");
    scanf("%c",&alpha);

    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
{
    printf("Alphabate you enter is:%c\n",alpha);
    printf("its a vowel\n");
}
else
{
    printf("The Alphabte you enter is :%c\n",alpha);
    printf("its a consonate\n");
}
return 0;
}