Question Link- https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

//Using Binary Search, finding the Pivot element//

int  getPivot(vector<int>& arr, int n) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2 ;

    while(s<e) {
        if(arr[mid] >= arr[0])
            s = mid+1;
        else
            e = mid;

        mid = s + (e-s)/2 ;        
    }
    return s;
}

int binarySearch(vector<int>& arr, int s,int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1; 
}


int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    
    if( arr[pivot] <= k && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot-1, k);
    }
}

