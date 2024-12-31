// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

//method-1 :- two pass algorithm (counting no. of zeros, ones and twos and then filling the array)


//my solution
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int noo=0, noz=0, notw=0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0) noz++;
//             if(nums[i]==1) noo++;
//             if(nums[i]==2) notw++;
//         }
//         for(int i=0;i<noz;i++){
//             nums[i]=0;
//         }
//         for(int i=noz; i<noo+noz; i++){
//             nums[i]=1;
//         }
//         for(int i=noz+noo; i<noo+noz+notw; i++){
//             nums[i]=2;
//         }
//     }
// };
 


