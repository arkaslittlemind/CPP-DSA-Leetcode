Question Link- https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?leftPanelTab=0

//Brute Force using XOR property//

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int flag = 0;
    int n = arr.size();
    //XOR all elements
    for(int i = 0; i < n; i++){
        flag = flag ^ arr[i];
    }
    //XOR all elements from 1 to [n-1]
	for(int i = 0; i < n; i++){
        flag = flag ^ i;
    }
    return flag;
}
