#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums) {
        int jump = 0;
        int pos = 0;
        int des = 0;
        for(int i = 0; i < nums.size()-1; i++){
            des = max(des,nums[i]+i);
            if(pos==i){
                pos = des;
                jump++;
            }
        }
        return jump;
}
int main(){
    vector<int> nums= {2,3,1,1,4};
    cout << jump(nums);
    return 0;
}