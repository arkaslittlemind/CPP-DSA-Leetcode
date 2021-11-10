Question Link- https://leetcode.com/problems/flipping-an-image/

//Brute Force Approach//

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       
        for(int i=0; i<image.size(); i++){
            reverse(image[i].begin(), image[i].end());
            
            for(int j=0; j<image[0].size(); j++){
                if(image[i][j]==0)
                    image[i][j]=1;
                else
                    image[i][j]=0;
            }
        }
        return image;
    }
};
