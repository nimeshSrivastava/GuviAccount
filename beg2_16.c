#include <stdio.h>
int main()
{
    int N,Q,flag=0;
    scanf("%d %d", &N,&Q);
    while(N < Q){
        flag=0;
    for(int i=2;i<=N/2;++i){
        if(N%i==0){
            flag=1;
            break;
            
        }
    }
       if (flag==0)
       printf("%d",N);
      
      ++N;
        
    }


    return 0;
}
