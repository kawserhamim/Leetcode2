class Solution {
public:
    bool check(vector<int>& nums) {
        int x = INT_MAX;
        int n = nums.size(), m = 0 ;
        for(int i = 0 ; i <  nums.size(); i++)
        {
            if(nums[i] <= x)
            {
                x = nums[i];
                m = i ;
            }
        }    
        for(int i =  1 ; i < n ; i++)
        {
            if(nums[(i + m)%n]>=x)
            {
                x = nums[(i + m)%n];
            }else return false ;
        }
        return true ;
    }
};
