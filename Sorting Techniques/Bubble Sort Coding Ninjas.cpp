Question Link- https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

// Implementing Bubble Sort //

void bubbleSort(vector<int>& arr, int n)
{   
 
    for(int i = 1; i < n; i++){
        //for round 1 to n-1
        
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
