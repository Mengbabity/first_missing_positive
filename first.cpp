class Solution {
public:
	int firstMissingPositive(vector<int> nums) {
		int n = nums.size();
		int i = 0;
		if (n == 0)
			return 1;
		sort(nums.begin(), nums.end());

		if (nums[0] > 1)
			return 1;
		if (nums[n - 1] < 1)
			return 1;

		while (nums[i] <= 0)
		{
			i++;
		}
		if (nums[i] != 1)
			return 1;

		for (int j = i; j < n; j++)
		{
			if (nums[j + 1] != nums[j] + 1 && j + 1 < n &&nums[j+1]!=nums[j])
				return nums[j] + 1;
		}
		return nums[n - 1] + 1;
	}
};
