class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            int j=n-i-1;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};