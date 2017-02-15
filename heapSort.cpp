#include<bits/stdc++.h>
using namespace std;
int a[10000],k;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int n)
{
    for (int i=n-1; i>n-4; i--)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    freopen("test.txt","r",stdin);
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
        scanf("%d",&a[i]);
    heapSort(a, i+1);
    if(i>=2)
    printArray(a,i+1);
    else
    cout<<"-1"<<endl;
	}
}





#include<bits/stdc++.h>
using namespace std;
int a[10000],k;
int main()
{
    freopen("test.txt","r",stdin);
	long n;
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
        scanf("%d",&a[i]);
    sort(a,a+i);
    if(i>=2){
        for(long j=i;j>i-3;j--)
            printf("%d ",a[j]);
        printf("\n");
    }
    else
    cout<<"-1"<<endl;
	}
}
