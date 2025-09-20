class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int count = 0;
        int balance = 0;
        for(char c:s){
            if(c=='('){
                balance++;
            }
            else if(c==')'){
                if(balance>0){
                    balance--;
                }
                else{
                    count++;
                }
            }
        }
        return count+balance;
    }
};