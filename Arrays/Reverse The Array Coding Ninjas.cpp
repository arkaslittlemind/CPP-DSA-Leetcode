Question Link- https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTab=0

//Using Two Pointer Approach//

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int n = arr.size();
    int s = m + 1;
    int e = n - 1;

    while(s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
