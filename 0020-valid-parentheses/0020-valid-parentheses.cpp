class Solution {
public:
bool isMatch(char ch1, char ch2){
    return(ch1=='(' && ch2==')'||ch1=='{' && ch2=='}'||ch1=='[' && ch2==']');
}
stack<char>st;
    bool isValid(string s) {
      for(int i=0; i<s.length(); i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        st.push(s[i]);
        else{
           if(st.empty())
           return false;
           else if(isMatch(st.top(),s[i]))
            st.pop();
        else
        return false; 
        }
      }  
      return(st.empty()==true);
    }
};