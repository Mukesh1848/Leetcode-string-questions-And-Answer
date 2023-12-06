//    1047. Remove All Adjacent Duplicates In String
//   solution -1   using vector of string

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        ans.push_back(s[0]);

        for(int i=1;i<s.size();i++){
            if(!ans.empty() && s[i] == ans.back()){
                 ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

//  solution - 2  using stack


class Solution {
public:
    string removeDuplicates(string s) {
          if(s.size() == 1) return s;

         stack<char> st;
        //  st.push(s[0]);
         for(int i=0;i<s.size();i++){
             if(!st.empty() && st.top() == s[i]){
                 st.pop();
             }
             else{
                 st.push(s[i]);
             }
         }

         string ans = "";
         while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
         }

         reverse(ans.begin(),ans.end());
         return ans;
    }
};
