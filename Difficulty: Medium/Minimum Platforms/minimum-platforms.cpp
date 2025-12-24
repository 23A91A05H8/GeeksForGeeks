class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        vector<int>res(3000,0);
        for(int i=0;i<arr.size();i++){
            res[arr[i]]++;
            res[dep[i]+1]--;
        }
        int maxi = res[1];
        for(int i=1;i<3000;i++){
            res[i] = res[i]+res[i-1];
            maxi = max(res[i],maxi);
        }
        return maxi;
    }
};
