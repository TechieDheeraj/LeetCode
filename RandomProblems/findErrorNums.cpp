// solved by Techie Dheeraj
// https://leetcode.com/problems/set-mismatch

vector<int> findErrorNums(vector<int>& nums) {
   /*     int dup;
        int repl;
        unordered_map< int, int> hashMap;
        
        
        for (auto i : nums)
                hashMap[i]++;
            
        for (int i = 1; i <= nums.size(); ++i) {
            if (hashMap[i] > 0) {
                if (hashMap[i] == 2)    
                    dup=i;
            }
            else // One element was replaced
                repl = i;
        }
        
        return vector<int>{dup, repl};
        */
       
        int n = 0;
        int dup= -1;
        int missing=1;
        
        for (auto i : nums) {
            if (nums[abs(i)-1] < 0)
                dup = abs(i);
            else
                nums[abs(i)-1] *= -1;
        }
        
        for (int i=1; i < nums.size(); ++i) {
            if (nums[i] > 0)
                missing = i + 1;
        }
        
        return vector<int> {dup, missing};
        
        
        
    }
};
