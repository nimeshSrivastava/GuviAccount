#include <stdio.h>
char* check(char num);

int main()
{
    char num;
    scanf("%c",&num);
    check(num);

    return 0;
}
char* check(char num){
    if(num>='a'&&num<='z'||num>='A'&&num<='Z')
    printf("Alphabet");
    else
    printf("No");
}