#include<vector>
#include<iostream>

//Problem 136 of leetcode: SingleNumber
class Solution {
public:
	int singleNumber(std::vector<int>& nums) {
		int ans = 0; 
		for (int val : nums) {
			ans ^= val;		//^ is XOR
		}
		return ans;
	}
};


int main() {
	std::vector<int> vec = { 4, 1, 2, 1, 2 };
	Solution temp = Solution();
	std::cout << "Unique Number is: " << temp.singleNumber(vec) << std::endl;
}


/*
* Working: using XOR to remove duplicate and return the single unique number in Linear time.

100
000   = ans
----
100   = 4
001(1)
----
101   = 5
010(2)
----
111   = 7
001(1)
----
110   = 6
010(2)
----
100   = 4


*/