//Leetcode day 1
//simple number
/*
array has every number twice except for one particular number. find unique number
solve in linear time
*/
class Solution
{
public:

int singlenumber(vector<int>& nums)
{
	int size = nums.size();
	int result = 0;
	for(int i=0;i<size;i++){
		result = result ^ nums[i];
	}
	return result;
}

};
