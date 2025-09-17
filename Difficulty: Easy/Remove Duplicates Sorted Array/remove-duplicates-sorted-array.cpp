class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        int index = 0;

        for (int i = 0; i < n; i++) {
            if (i == n - 1 || arr[i] != arr[i + 1]) {
                arr[index++] = arr[i];
            }
        }
        arr.resize(index);
        return arr;
    }
};
