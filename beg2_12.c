#include <stdio.h>
int main()
{
    int num,result,temp,rem;
    scanf("%d", &num);
    if(num > 1000)
    printf("enter less than or equal to 1000");
    else{
    temp =num;
    while(temp!=0){
        rem=temp%10;
        result=result*10+rem;
        temp=temp/10;
    }
    if(result==num)
    printf("yes");
    else
    printf("no");
    }
   return 0; 
}