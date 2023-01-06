pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int Floor = -1;
    int Ceil = INT_MAX;
    
    for(int i = 0; i < n; i++){
        if(arr[i] <= x){
            Floor = max(arr[i], Floor);
        }
        if(arr[i] >= x){
            Ceil = min(arr[i], Ceil);
        }
    }
    
    if(Ceil == INT_MAX){
        Ceil = -1;
    }
    
    return {Floor, Ceil};
}
