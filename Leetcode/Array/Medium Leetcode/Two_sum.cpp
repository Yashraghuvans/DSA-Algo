#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //brute solution
    vector<int> twoSum1(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
    //better solution
     vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a =nums[i];
            int need=target-a;
            if(mpp.find(need)!=mpp.end()){
                ans.push_back(mpp[need]);
                ans.push_back(i);
            }
            mpp[a]=i;
        }
        return ans;
    }
    vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    map<int,int>mpp;
    sort(arr.begin(),arr.end());
    vector<pair<int,int>>ans;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        int need=target-a;
        if(mpp.find(need)!=mpp.end() && mpp[need] > 0){
            ans.push_back({a,need});
            mpp[need]--;
        }
    }
    return ans;
}
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	
      vector<pair<int,int>> ans;

    sort(arr.begin(),arr.end());

    int i = 0;

    int j = n -1;

    while( i < j)

    {

        if(arr[i] + arr[j] == target)

        {

            ans.push_back(make_pair(arr[i],arr[j]));

            i++;

            j--;

        }

        else if( arr[i] + arr[j] > target)

        {

          j--;

        }

        else{

            i++;

        }

    }

    if(ans.empty())

    {

        ans.push_back(make_pair(-1,-1));

    }

    return ans;

 
};



int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> indices1 = s.twoSum1(nums, target);
    vector<int> indices2 = s.twoSum2(nums, target);

    cout << "Indices: [" << indices1[0] << ", " << indices1[1] << "]" << endl;
    cout << "Indices: [" << indices2[0] << ", " << indices2[1] << "]" << endl;

    return 0;
}


