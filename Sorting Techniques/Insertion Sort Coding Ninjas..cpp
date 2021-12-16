Question Link- https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

//Implementing Insertion Sort//

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
       	int j = i - 1;
        for( ; j >= 0; j--){
            if(arr[j] > temp) arr[j + 1] = arr[j];
            else 
                break;
        }
        arr[j + 1] = temp;
    }
   
}
