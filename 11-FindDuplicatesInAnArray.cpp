#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        
        return {};
        
    }
};
int main(){
    vector<int> nums= {1,3,4,2,2};
    Solution ob;
    cout <<"Duplicate number in this array is "<<ob.findDuplicate(nums);
}