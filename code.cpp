class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int>A;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            j=j%nums.size();
            while(i!=j)
            {
                if(nums[i]<nums[j])
                {
                    A.push_back(nums[j]);
                    break;
                    
                }
                j++;
                    j=j%nums.size();
            }
            if(i==j)
            {
                A.push_back(-1);
            }
        }
        return A;
    }
};
