Question Link- https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=0

//Using Binary Search//

bool  isPossible(vector<int> arr, int n, int mid , int m){
    int student=1;
    int sum =0;
    for(int i =0;i<n;i++){
        if(sum +arr[i]<= mid){
            sum+=arr[i];
              }
        else{
           student++;
            if(student > m || arr[i] > mid){
                return false;
            }
            sum = arr[i];
        }    
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s =0;
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e= sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
    
        if(isPossible(arr ,n, mid , m )){
            ans = mid; 
            e = mid-1;
        }
       else{
       		 s = mid+1;
       }
        mid = s+(e-s)/2;
        
    }
    return ans;
}
