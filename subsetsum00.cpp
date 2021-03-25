#include<stdio.h>

int main()
{
    int n,array[10000],j;
    long long m;
    scanf(" %d %lld",&n,&m);
    long long last=(1<<n)-1;
    long long i,temp,currentsum;
    i=0;
    while(i<n)
    {
        scanf(" %d",&array[i]);
        i++;
    }
    for(i=0;i<=last;i++)
    {
        temp=i;
        currentsum=0;
        j=0;
        printf("Checking subset : { ");
        while(j<n)
        {
            if(temp%2==1)
            {
                printf("%d ",array[j]);
                currentsum+=(array[j]);
            }
            temp>>=1;
            j++;
        }

        printf("} Sum= %lld",currentsum);

        if(currentsum==m)
        {
            printf("Found solution subset");
            break;
        }

        printf("\n");
    }
    return 0;
}
