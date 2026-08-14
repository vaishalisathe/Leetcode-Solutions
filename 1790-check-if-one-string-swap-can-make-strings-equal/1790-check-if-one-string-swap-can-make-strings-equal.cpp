class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int count1[26]={0};
        int count2[26]={0};
        int diffCount=0;
        for(int i=0; i<s1.length(); i++){
            if(s1[i]!=s2[i]){
                diffCount++;
            }
                if(diffCount>2){
                    return false;
                }
            count1[s1[i]-'a']++;
            count2[s2[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(count1[i]!=count2[i]){
                return false;
            }
        }
        return true;
    }
};