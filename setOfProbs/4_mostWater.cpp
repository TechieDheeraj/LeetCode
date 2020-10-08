class Solution {
public:
  
  int maxArea(vector<int>& height) {
    
    int j = height.size()-1;
    int i = 0;
    int maxA = 0;
  
    while (i < j) {
      
      maxA = max(maxA, (j-i) * min(height[i], height[j]));
      
      if (height[i] < height[j])
        i++;
      else
        j--;
    }
    
    return maxA;
  }

/*
int maxArea(vector<int>& height) {
      
      int size = height.size();
      int firstEdge = 0;
      int maxA = 0;
      int res = 0;
      
      for (int i  = 0; i < size; ++i) {
        if (height[i] == 0)
          continue;
        for (int j = i+1; j < size; ++j) {
         if (height[j] == 0)
           continue;
 //        firstEdge = height[i] < height[j] ? height[i]: height[j];
  //       res = firstEdge * (j-i);
          
         //cout << " maxA : " << maxA << " ,height[i] " << height[i] << " ,j-i " << j-i << endl;
          
//          maxA = maxA < res ? res : maxA;
          maxA = max(maxA, (j-i) * (min(height[i], height[j])));
        }
      }
      return maxA;
    }
   */
};
