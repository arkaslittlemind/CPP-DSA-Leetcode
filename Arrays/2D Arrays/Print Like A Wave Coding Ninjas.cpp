Question Link- https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col = 0; col < mCols; col++) {
        //for odd index -> bottom to top
        if(col & 1) {
          for(int row = nRows - 1; row >= 0; row--) {
              ans.push_back(arr[row][col]);
          }  
        }
        //for 0 & even index -> top to bottom
        else {
            for(int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
