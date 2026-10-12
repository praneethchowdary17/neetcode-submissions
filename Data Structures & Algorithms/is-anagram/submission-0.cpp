class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()){
            return false;
        }
        map<char,int> hms;
        map<char,int> hmt;
        for(auto x:s){
            hms[x]++;
        }
        for(auto y:t){
            hmt[y]++;
        }
        bool flag=true;
        for(auto z:s){
            if(hms[z]==hmt[z]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            return true;
        }
        else{
            return false;
        }
    }
};
