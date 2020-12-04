class Solution {
public:
    vector<string> ans;
    
    void permute(string str, int left, int right, int n){
        if(left==n && right==n){
            ans.push_back(str);
            return;
        }
        
        if(left!=n){
            permute(str+'(',left+1,right,n);
        }
        
        if(right<left){
            permute(str+')',left,right+1,n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string temp="";
        permute(temp,0,0,n);
        return ans;
        
    }
};
