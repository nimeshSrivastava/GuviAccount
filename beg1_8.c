#include <stdio.h>

int main()
{
    int i,N,K,sum=0;
    scanf("%d %d",&N , &K);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<K;i++)
    sum=sum+a[i];
    printf("%d",sum);

    return 0;
}
