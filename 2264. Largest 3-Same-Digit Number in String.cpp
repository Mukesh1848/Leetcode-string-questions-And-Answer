// 2264. Largest 3-Same-Digit Number in String

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n = num.size();
        
        for(int i=1;i<n-1;i++){
            if(num[i] == num[i-1] &&  num[i] == num[i+1]){
               if(ans[2] - '0' < num[i] - '0' || ans == ""){
                    ans = "";
                    ans +=num[i];
                    ans +=num[i];
                    ans +=num[i];
               } 
            }
        }
        return ans;
    }
};
