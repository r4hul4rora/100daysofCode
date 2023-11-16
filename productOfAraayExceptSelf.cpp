// 238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixprodStart(n,1);
        vector<int>prefixprodEnd(n);

        prefixprodStart[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixprodStart[i]=prefixprodStart[i-1]*nums[i];
        }
        prefixprodEnd[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
         prefixprodEnd[i]=prefixprodEnd[i+1]*nums[i];
        }
        vector<int>ans(n);
        ans[0]=prefixprodEnd[1];
        ans[n-1]=prefixprodStart[n-2];

        for(int i=1;i<n-1;i++){
            ans[i]=prefixprodEnd[i+1]*prefixprodStart[i-1];
        }
        return ans;
    }
};


//using prefix and postfix multiplication we've solved this