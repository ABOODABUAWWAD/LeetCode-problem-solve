class Solution {
public:
   int searchInsert(vector<int>& nums, int item) {
    int h = 0, l = nums.size() - 1, m;
    if (item == nums[h]) return h;
    if (item == nums[l]) return l;
    if (item > nums[l])return nums.size();
    for (int i = 1; i < nums.size();i*=2 )
    {
        m = floor((h + l)*1.0 / 2);
        if (nums[m] == item)return m;
        else if (nums[m] > item)l = m; 
        else if (nums[m] < item)h = m;
    }
    return l;
}
};