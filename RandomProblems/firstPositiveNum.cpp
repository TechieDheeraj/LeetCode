// solved by Techie Dheeraj
// https://leetcode.com/problems/first-missing-positive/

// Link to refer:
// https://leetcode.com/problems/first-missing-positive/discuss/17071/My-short-c%2B%2B-solution-O(1)-space-and-O(n)-time

class Solution {
public:
    void swapMe(int &a, int &b) {
            a ^= b;
            b ^= a;
            a ^= b;
    }
    
    int firstMissingPositive(vector<int>& nums) {
        /*
        int min = 1;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]) {
                cout << nums[nums[i] -1] << " and " << nums[i] << endl;
                swap(nums[nums[i]-1], nums[i]);
                //swapMe(nums[nums[i]-1], nums[i]);
            }
        }
        
        for (int i = 0 ; i < n; ++i) {
            cout <<  i << " , " << " val " << nums[i] << endl;
            if (nums[i] != i+1)
                return i+1;
        }
        return n+1;
       
        */
           int i = 0;
        int n = nums.size();
        while (i < n)
        {
            if (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i]-1]);
            else
                i++;
        }
        for (i = 0; i < n; ++i)
            if (nums[i] != (i+1))
                return i+1;
        return n+1;


       /* 
        int min = 1; 
        sort(nums.begin(), nums.end());
        
        for (auto i : nums) {
            if ( min == i )
                min++;
            else if (i > min)
                return min;
        }
        return min;
        */
    }
};
