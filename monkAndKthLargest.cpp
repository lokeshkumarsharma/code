#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
using namespace std;
vector <int> adj[1000];
int value[10000];
int partition(int arr[], int l, int r);
int kthSmallest(int arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int pos = partition(arr, l, r);
        if (pos-l == k-1)
            return arr[pos];
        if (pos-l > k-1)
            return kthSmallest(arr, l, pos-1, k);
        return kthSmallest(arr, pos+1, r, k-pos+l-1);
    }
    return INT_MAX;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
int main()
{
	freopen("test.txt","r",stdin);
    int x, y, nodes, edges,k,p;
    cin >> nodes>>edges>>k;
    for(int l=1;l<=nodes;l++){
        cin>>value[l];
    }
    for(int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1;i <= nodes;++i)
    {   int ad[nodes+1],flag=0;
        for(int j=0;j<=adj[i].size();++j){
            ad[j+1]=value[adj[i][j]];
        }
        p=kthSmallest(ad, 1, adj[i].size(),nodes-k);
        for(int j=0;j<=adj[i].size();++j){
            if(value[adj[i][j]]==p){
                cout<<adj[i][j]<<endl;
                flag=1;
                }
            if(flag==0)
            	cout<<"-1";
        }
    }
    return 0;
}
