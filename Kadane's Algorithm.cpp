#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int maximum=0;
        int sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maximum=maximum+arr[i];
            if(maximum>sum)
            {
                sum=maximum;
            }
            if(maximum<0)
            {
                maximum=0;
            }
        }
        return sum;
        
        
        
    }
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
