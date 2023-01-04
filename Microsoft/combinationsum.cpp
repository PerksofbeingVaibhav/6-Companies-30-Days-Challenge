class Solution {
public:
    void solve(int sum,int idx,int n,vector<int>& ans1, vector<vector<int>>& ans2,int k){
        if(sum==n && k==0){
            ans2.push_back(ans1);
            return;
        }
        if(sum>n){
            return;
        }
        for(int i=idx;i<=9;i++){
            if(i>n){
                break;
            }
            ans1.push_back(i);
            solve(sum+i,i+1,n,ans1,ans2,k-1);
            ans1.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ans1;
        vector<vector<int>> ans2;
        solve(0,1,n,ans1,ans2,k);
        return ans2;
    }
};


// problem link : https://leetcode.com/problems/combination-sum-iii/submissions/871009578/
