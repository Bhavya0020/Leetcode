class Solution {
public:
    vector<string> v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
    vector<string> ans;
    void fun(int i,int n,string s,string p){
        if(i == n){
            ans.push_back(p);
            return;
        }
        for(int x = 0;x < v[s[i] - '0'].size();x++){
            p.push_back(v[s[i] - '0'][x]);
            fun(i+1,n,s,p);
            p.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n == 0){
            return ans;
        }
        string c;
        fun(0,n,digits,c);
        return ans;
    }
};