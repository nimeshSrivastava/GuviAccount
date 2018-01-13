#include <stdio.h>
int main()
{
    int n,temp,c=0,rem,result;
    scanf("%d", &n);
    if(n > 100000)
    printf("enter less than or equal to 1000");
    else{
    temp=n;
    while(temp!=0){
        temp=temp/10;
        c++;
    }
    temp=n;
    while(temp!=0){
        rem=temp%10;
        result= result+pow(rem, c);
        temp /= 10;
    }
  }
   if(result== n)
        printf("yes");
    else
        printf("no");

    return 0;
}
