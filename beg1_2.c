#include <stdio.h>
char* check(int num);

int main()
{
    int num;
    scanf("%d",&num);
    printf(check(num));

    return 0;
}
char* check(int num){
    return((num%2==0)?"Even":"Odd");
}