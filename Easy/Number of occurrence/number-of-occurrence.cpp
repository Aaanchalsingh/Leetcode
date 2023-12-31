//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    
	    int low=0,high=n-1,start=-1,end=-1;
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        if(arr[mid]==x){
	            start=mid;
	            high=mid-1;
	        }
	        else if(arr[mid]<x) low=mid+1;
	        else high=mid-1;
	    }
	     if(start==-1) return 0;
	     low=0;high=n-1;
	     while(low<=high){
	        int mid=low+(high-low)/2;
	        if(arr[mid]==x){
	            end=mid;
	            low=mid+1;
	        }
	        else if(arr[mid]<x) low=mid+1;
	        else high=mid-1;
	    }
	   
	    return end-start+1;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends