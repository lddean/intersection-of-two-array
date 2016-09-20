#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        
        int len1 = nums1.size();
        int len2 = nums2.size();
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0;
        int j = 0;
        
        //cout << len1 << "   "<< len2<< endl;
        while( i<len1 && j < len2 ){
            
            if (nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i] > nums2[j] ){
                j++;
            }else{
                i++;
            }
        }
        
        return result;
        
    }
};


int main() {
    
    Solution a;
    
    vector<int> t{1,2,2,1};
    vector<int> s{2,2};
    vector<int> ans = a.intersect(t,s);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}
