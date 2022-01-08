// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long l, long long mid, long long r)
{
    long long int inv = 0;
    long long i = l;
    long long j = mid+1;
    long long a[r-l+1];
    long long k = 0;
    
    while(i<=mid and j<=r)
    {
        if(arr[i] <= arr[j])
            a[k++] = arr[i++];
        
        else
        {
            a[k++] = arr[j++];
            inv += mid - i + 1;
        }
    }
    
    while(i<=mid)
        a[k++] = arr[i++];
    
    while(j<=r)
        a[k++] = arr[j++];
    
    k=0;
    
    for(i=l;i<=r;i++)
        arr[i] = a[k++];
    
    return inv;
}
long long int mergeSort(long long arr[], long long l, long long r)
{
    long long int inv=0;
    
    if(l<r)
    {
        long long mid = l+(r-l)/2;
        inv+=mergeSort(arr,l,mid);
        inv+=mergeSort(arr,mid+1,r);
        inv+=merge(arr,l,mid,r);
    }
    
    return inv;
}
long long int inversionCount(long long arr[], long long n)
{
    return mergeSort(arr,0,n-1);
}
};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends