class Solution {
private:
    bool validch(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char lowercase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            ch=ch-'A'+'a';
        }
        return ch;
    }

    bool palindrome(string st){
        int s=0;
        int e=st.length()-1;
        while(s<e){
            if(st[s++] != st[e--]){
                return false;
            }
            
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
       string temp="";
       for(int i=0; i<s.length(); i++){
           if(validch(s[i])){
               temp.push_back(s[i]);
           }
       } 
       for(int j=0; j<temp.length(); j++){
           temp[j]=lowercase(temp[j]);
       }

       return palindrome(temp);
    }
};