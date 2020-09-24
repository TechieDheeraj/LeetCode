#include<bits/stdc++.h>

using namespace std;

/* 
 *  Problem Statement:
 *      An array contains 32-bit integers with each integer with freq of 3, there exitst one integer with freq of 4, find that integer in Linear time and constant extra space (Constant means fixed extra space not dependent on variable input)
*/

void findFourOccElem(vector<int> &arr, int size) {
    
    int num = 0;
    int n = 0;
    int results[31] = {0};
    int resultSize = sizeof(results)/sizeof(results[0]);

    for (int i = 0; i < size; ++i) {
        n = arr[i];
        if (n == 0)
            continue;
        for (int j = 0; j < resultSize; ++j) {
            if (n & 1) {
                results[j]+=1;
            }
            n >>= 1;
            if (!n)
                break;
        }
    }

    for(int k = 0; k < resultSize; ++k) {
        if (results[k] == 0)
            continue;
        if (results[k] % 3 == 1)
            num |= (1 << k);
    }

    cout << "num is "  << num << endl;
}

int main() {

    int n;

    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    findFourOccElem(arr, arr.size());

    return 0;
}
