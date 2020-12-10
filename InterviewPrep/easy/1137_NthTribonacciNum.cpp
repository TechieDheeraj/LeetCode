/**
 *      file    :  1137_NthTribonacciNum.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Dec 11 03:00:12
 *      lastMod :  Fri Dec 11 03:00:12 2020
 **/

class Solution {
public:
	int tribonacci(int n) {
		int first = 1;
		int second = 1;
		int third = 2;
		if (n <= 1) return n;
		if (n <= 3) return n-1;
		
		int res = 0;
		
		for (int i =4; i <=n; ++i) {
			res = first+second+third;
			first = second;
			second = third;
			third = res;
		}
		return res;
	}
};
