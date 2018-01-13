#include <stdio.h>
#include<math.h>
int main()
{
    int N,Q,i,temp,rem,n=0,result=0;
    scanf("%d %d", &N,&Q);
    for(i=N+1;i<Q;i++)
    {   temp = i;
        while (temp!= 0){
            temp=temp/10;
            n++;
        }
        temp=i;
        while(temp!=0){
            rem= temp%10;
            result=result+pow(rem,n);
            temp=temp/10;
        }
        if(result==i) {
        printf("%d", i);
        }
        n = 0;
        result = 0;

    }
    return 0;
}