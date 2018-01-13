#include <stdio.h>
int main()
{
    int N,Q;
    scanf("%d %d", &N,&Q);
    if(N > 100000 || Q > 100000)
    printf("enter less than or equal to 1000");
    else{
    for(int i=N+1;i<Q;i++){
        if(i%2!=0)
        printf("%d\t",i);
       
    }
  }

    return 0;
}
