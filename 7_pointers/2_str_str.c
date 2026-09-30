#include <stdio.h>
#include <string.h>
int main()
{
    char haystack[]="hai hello , how are you all doing? are you fine ?";
    char needle[]="are";
    char *cptr ;
    cptr =strstr (haystack, needle);
    printf("%s\n", cptr);
    return 0;
}