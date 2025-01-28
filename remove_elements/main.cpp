#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
            
        }
        return j;


    }
};


int main() {

    Solution a;
    int val=3;
    vector<int> nums = {1,1, 2,5,3,3,6,9,0};
    
    int out = a.removeElement(nums,val);
    cout<<out;

  
  


    return 0;
}