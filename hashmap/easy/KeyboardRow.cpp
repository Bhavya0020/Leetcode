class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char,int> r1,r2,r3;
        string s1= "qwertyuiop", s2="asdfghjkl", s3="zxcvbnm";
        for(int i = 0;i<s1.length();i++){
            r1[s1[i]]++;
        }
        for(int i = 0;i<s2.length();i++){
            r2[s2[i]]++;
        }
        for(int i = 0;i<s3.length();i++){
            r3[s3[i]]++;
        }
        vector<string> s;
        for(int i = 0;i<words.size();i++){
            char c = tolower(words[i][0]);
            bool isok = true;
            if(r1[c]){
                for(int j = 0;j<words[i].length();j++){
                    if(r1[tolower(words[i][j])] == 0){
                        isok = false;
                        break;
                    }
                }
            }
            else if(r2[c]){
                for(int j = 0;j<words[i].length();j++){
                    if(r2[tolower(words[i][j])] == 0){
                        isok = false;
                        break;
                    }
                }
            }
            else if(r3[c]){
                for(int j = 0;j<words[i].length();j++){
                    if(r3[tolower(words[i][j])] == 0){
                        isok = false;
                        break;
                    }
                }
            }
            if(isok){
                s.push_back(words[i]);
            }
        }
        return s;
    }
};