#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    freopen("test.txt","r",stdin);
    int n,sum,t,currSum,givenSum;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&givenSum);
    currSum = arr[0];
    int start=0;
    int e=0;
    while (e <n)
    {
        if (currSum == givenSum)
        {
            printf("YES\n");
        }

        if (currSum <= givenSum)
        {
            e++;
            if (e <n)
                currSum = currSum + arr[e];
        }
        else
        {
            currSum = currSum - arr[start];
            start++;
        }
    }
    cout<<"NO"<<endl;
    }
    return 0;
}
