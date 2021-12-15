Question Link- https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

//Implementing Bubble Sort with a Boolean flag//

void bubbleSort(vector<int>& arr, int n)
{   
 
    for(int i = 1; i < n; i++){
        //for round 1 to n-1
        bool swapped = false;
        for(int j = 0; j < n-i; j++){
            //process elements till n-ith index 
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}
