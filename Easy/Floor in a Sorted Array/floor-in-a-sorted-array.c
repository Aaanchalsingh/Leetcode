//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


// } Driver Code Ends

int findFloor(long long int v[], int n, long long int key) {
    long long int low = 0, high = n - 1, start = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == key) {
            start = mid;
            break;
        }
        else if (v[mid] < key){
            start=mid;
            low = mid + 1;
        } 
        else high = mid - 1;
    }
    return start;
}

//{ Driver Code Starts.

int main() {
	
	long long int t;
	scanf("%lld", &t);
	
	while(t--){
	    int n;
	    scanf("%d", &n);
	    long long int x;
	    scanf("%lld", &x);
	    
	    long long int *arr;
		arr = (long long int *)malloc(n * sizeof(long long int));
	    
	    for(int i = 0;i<n;i++){
	        scanf("%lld", &arr[i]);
	    }
	    printf("%d\n", findFloor(arr, n, x) );
	   
	}
	
	return 0;
}


// } Driver Code Ends