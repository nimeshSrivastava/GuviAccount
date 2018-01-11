
#include <stdio.h>
#include <ctype.h>
char* check(char num);

int main()
{
    char num;
    scanf("%c",&num);
    check(num);

    return 0;
}
char* check(char num){
    if(islower(num))
    num=num-32;
    if(isalpha(num)){
    if(num=='A'||num=='E'||num=='I'||num=='O'||num=='U')
    printf("Vowel");
    else
    printf("Consonants");
    }
    else
    printf("Not a Alphabet");
}



