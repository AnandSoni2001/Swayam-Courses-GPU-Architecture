//  Created by Anand Soni on 24/01/21.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=1,n,k;
    while(t--)
    {
        scanf("%d%d",&n,&k);
        float*A = (float*)malloc(n*sizeof(float));
        for(int i=0;i<n;i++)
            scanf("%f",&A[i]);
        int n1;
        if(n%k==0)
        {
            n1=n/k;
        }
        else
        {
            n1=n/k + 1;
        }
        float B[n1];
        int a=0, counter=0;
        float sum=0;
        for(int j=0; j<n; j++)
        {
            if(a!=k)
            {
                sum=sum+A[j];
                a++;
                if(a==k)
                {
                    B[counter]=sum/k;
                    counter++;
                    sum=0;
                    a=0;
                }
                if(n%k!=0 && j==n-1)
                {
                    B[counter]=sum;
                    counter++;
                }
            }
        }
        for(int j=0;j<counter;j++)
        {
                    printf("%.2f ",B[j]);
        }
                printf("\n");

    }
}