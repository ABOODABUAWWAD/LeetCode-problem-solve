class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    unsigned short temp;
    for(unsigned short i=0;i<nums.size();i++){
        if(nums[i]==val){
            temp=nums[nums.size()-1];
            nums[nums.size()-1]=nums[i];
            nums[i]=temp;
            nums.pop_back();
            i--;
        }
    }
     return nums.size();
    }
};