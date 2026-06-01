class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        iint n=nums.size()
        int i=0;
        for(j=1;j<=n;j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                j++;
            }
        }
    return n+1;
};
