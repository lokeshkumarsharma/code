#include<bits/stdc++.h>
using namespace std;
int a[100005];
void subArraySum(int arr[], int n, int sum)
{
    unordered_map<int, int> map;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];
        if (curr_sum == sum)
        {
            cout << "YES"<<endl;
            return;
        }
        if (map.find(curr_sum - sum) != map.end())
        {
            cout << "YES"<<endl;
            return;
        }
        map[curr_sum] = i;
    }
    cout << "NO"<<endl;
}
int main()
{
    freopen("test.txt","r",stdin);
    int n,sum,t;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&sum);
        subArraySum(a, n, sum);
    }
    return 0;
}
