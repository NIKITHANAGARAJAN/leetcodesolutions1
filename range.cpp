class Solution {
public:
    int firstpos(vector<int>& nums,int target)
    {
        int left=0,right=nums.size()-1,ans=-1;
        while(left<=right)
        {
            int mid=right+(left-right)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                right=mid-1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;

            }
        }
        return ans;
    }
    int lastpos(vector<int>&nums,int target)
    {
        int left=0,right=nums.size()-1,ans=-1;
        while(left<=right)
        {
            int mid=right+(left-right)/2;

            if(nums[mid]==target)
            {
                ans=mid;
                left=mid+1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstpos(nums,target),lastpos(nums,target)};     
    }
    int main()
    {
        int target,x;
        vector<int> nums;
        while(cin>>x)
        {
            nums.push_back(x);
        }
        cin>>target;
        Solution sol;
        vector<int> res=sol.searchRange(nums,target);
        cout<<res[0]<<res[1];
        return 0;
    }
};
