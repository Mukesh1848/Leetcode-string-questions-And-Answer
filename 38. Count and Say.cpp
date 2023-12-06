// 38. Count and Say

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";

        string ansString = "11";

        for(int i=3;i<=n;i++){
            string temp = "";
            ansString = ansString + "&";
            int cnt =1; // maintain no. of count 
            for(int j=1;j<ansString.size();j++){
                 if(ansString[j] != ansString[j-1]){  // compareing character
                     temp = temp + to_string(cnt);
                     temp = temp + ansString[j-1];
                     cnt =1;
                 }
                 else cnt++;
            }
            ansString = temp;
        }
        return ansString;
        
    }
};
