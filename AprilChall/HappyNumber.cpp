class Solution {
    int findSum(int n){
        int sum = 0;
        while(n) {
            int digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> hashSet;
        int sum = 0;
        
        while(true) {
           
            if (n == 1)
                return true;
            n = findSum(n);
            
            if (hashSet.count(n) == 1)
                return false;
            hashSet.insert(n);
        }
        
        
    }
};
