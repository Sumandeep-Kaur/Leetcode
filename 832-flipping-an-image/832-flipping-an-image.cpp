class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++) {
            int start = 0, end = image[0].size() - 1;
            while(start <= end) {
                int temp = image[i][start];
                image[i][start] = image[i][end] ^ 1;
                image[i][end] = temp ^ 1;
                start++;
                end--;
            }
        }
        return image;
    }
};