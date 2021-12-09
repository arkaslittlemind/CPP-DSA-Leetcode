Question Link- https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

//Implementing Selection Sort//

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 0; i < n; i++){
        int minIndex = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
               minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
