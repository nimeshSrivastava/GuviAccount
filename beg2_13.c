#include <stdio.h>
int main()
{
    int num,temp,flag=0;
    scanf("%d", &num);
    if(num > 1000)
    printf("enter less than or equal to 1000");
    else{
    for(int i=2;i<=num/2;i++){
        if(num%i==0)
        flag=1;
        break;
    }
    if(flag==1)
    printf("no");
    else
    printf("yes");
}

    return 0;
}