/**
 *      file    :  240_Search2DMatrixII.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 11 03:01:46
 *      lastMod :  Fri Dec 11 03:01:46 2020
 **/

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		
		int i = 0;
		int j = matrix[0].size()-1;

		while (i < matrix.size() && j >= 0) {
			if (matrix[i][j] == target)
				return true;
			else if (matrix[i][j] > target)
				--j;
			else
				++i;
		}
		return false;
	}
};
