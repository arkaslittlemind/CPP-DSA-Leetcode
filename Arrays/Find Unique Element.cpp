Question Link- https://www.codingninjas.com/codestudio/problems/find-unique_625159?leftPanelTab=0

//Brute Force Approach using XOR property//

int findUnique(int *arr, int size)
{
    //Write your code here
    int flag = 0;
    
    for(int i = 0; i<size; i++){
       flag = arr[i] ^ flag;
    }
    return flag;
}
