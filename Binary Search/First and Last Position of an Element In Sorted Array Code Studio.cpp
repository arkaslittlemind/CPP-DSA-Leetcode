Question Link- https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTab=0

//Using Binary Search//

int firstOcurrence(vector<int>& arr, int n, int k)
{
    int start = 0; int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == k){
            ans = mid;
            end = mid - 1;  
        }

        else if(k > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcurrence(vector<int>& arr, int n, int k)
{
    int start = 0; int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == k){
            ans = mid;
            start = mid + 1;  
        }

        else if(k > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    
    p.first = firstOcurrence(arr, n, k);
    p.second = lastOcurrence(arr, n, k);
    
    return p;
}
