class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
            }
        }
            string ans="";
            for(int i=0; i<n; i++){
                if(isalnum(s[i])){
                    ans+=s[i];
                }
            }
            int st=0;
            int end=ans.length()-1;
            while(st<end){
              if(ans[st]!=ans[end]){
                return false;
            }
                st++;
                end--;
            }
                return true;
        }
};