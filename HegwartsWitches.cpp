#include <bits/stdc++.h>
using namespace std;
map <int,int> dp,st;
int rec(int n)
{
    int x;
    queue <int> q;
    q.push(n);
    dp[n]=0;
    st[n]++;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        if(x==1)
        {
            return dp[1];
        }
        if(st.find(x-1)==st.end())
        {
            st[x-1]++;
            q.push(x-1);
            dp[x-1]=dp[x]+1;
        }
        if(x%2==0&&st.find(x/2)==st.end())
        {
            st[x/2]++;
            q.push(x/2);
            dp[x/2]=dp[x]+1;
        }
        if(x%3==0&&st.find(x/3)==st.end())
        {
            st[x/3]++;
            q.push(x/3);
            dp[x/3]=dp[x]+1;
        }
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        dp.clear();
        st.clear();
        cout<<rec(n)<<endl;
    }
    return 0;
}
