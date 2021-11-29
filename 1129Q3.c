#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[99999];
    scanf("%[^\n]", input);
    // for(int i =0;i<strlen(input)-1;i++){
    //     printf("%c",input[i]);
    // }
    char *str;
    // while(n<strlen(input)){
    //     *str[n]=input[n];
    //     n++;
    // }
    str = input;
    for (int i = strlen(input) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    puts("");
}
