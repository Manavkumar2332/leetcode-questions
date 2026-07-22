class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n1=nums[0];
        int n2=nums[0];
        int gcd=1;

        for(int i=0;i<nums.size();i++)
        {
            if(n1<nums[i])
            {
                n1=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(n2>nums[i])
            {
                n2=nums[i];
            }
        }

        for(int i=2;i<=min(n1,n2);i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd =i;
            }
        }

        return gcd;

    }
};