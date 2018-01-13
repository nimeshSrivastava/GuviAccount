#include <stdio.h>
int main()
{
    int N,i,result=1;
    scanf("%d", &N);
    for(i=N;i>=1;i--){
        result=result*i;
    }
    printf("%d",result);
   
    return 0;
}
