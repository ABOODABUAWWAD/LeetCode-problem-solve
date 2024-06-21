class Solution {
public:
    void sortColors(vector<int>& nums) {
       int min=0,index=0,temp=0;
        for(int i=0;i<nums.size();i++)    
        {    min=nums[i];
                index=i;
            for(int j=i;j<nums.size();j++)
            {
             if(nums[j]<min)
                {
                min=nums[j];
                index=j;
                }
            }
            temp=nums[i];
            nums[i]=min;
            nums[index]=temp;           
        }
    }
};