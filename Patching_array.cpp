#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long miss = 1;
        int result = 0;
        size_t i = 0;

        while (miss <= n) {
            if (i < nums.size() && nums[i] <= miss) {
                miss += nums[i];
                i++;
            } else {
                miss += miss;
                result++;
            }
        }

        return result;
    }
};
int main(){
  int n;
  cout<<"The final limit form 1 to ";
  cin>>n;

  vector<int>nums;

  for(int i=0;i<n;i++){
    cin>>nums[i];
    }

  Solution s;
  s.minPatches(nums,n);

  return 0;
}
