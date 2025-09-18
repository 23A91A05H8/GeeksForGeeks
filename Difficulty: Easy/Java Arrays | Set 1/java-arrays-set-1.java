


class Solution {
    public String average(int arr[]) {
        // code here
        double sum=0;
        for(int i=0;i<arr.length;i++){
            sum=sum+arr[i];
        }
        double res = sum/arr.length;
        return String.format("%.2f",res);
    }
}