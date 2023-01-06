class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	
	int startPos(int arr[], int n, int x){
	    int ans = -1;
	    int left = 0;
	    int right = n -1;
	    
	    while(left <= right){
	        int mid = left + (right - left)/2;
	        
	        if(arr[mid] == x){
	            ans = mid;
	            right = mid - 1;
	        }
	        else if(x > arr[mid]){
	            left = mid + 1;
	        }
	        else{
	            right = mid - 1;
	        }
	    }
	    
	    return ans;
	    
	}
	
	int endPos(int arr[], int n, int x){
	    int ans = -1;
	    int left = 0;
	    int right = n -1;
	    
	    while(left <= right){
	        int mid = left + (right - left)/2;
	        
	        if(arr[mid] == x){
	            ans = mid;
	            left = mid + 1;
	        }
	        else if(x > arr[mid]){
	            left = mid + 1;
	        }
	        else{
	            right = mid - 1;
	        }
	    }
	    
	    return ans;
	    
	}
	
	int count(int arr[], int n, int x) {
	    // code here
	    int first = startPos(arr, n, x);
	    int last = endPos(arr, n, x);
	    
	    if(first == -1 || last == -1){
	        return 0;
	    }
	    else{
	        return last - first + 1;
	    }
	    
	}
};
