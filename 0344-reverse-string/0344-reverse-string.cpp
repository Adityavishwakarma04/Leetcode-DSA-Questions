int size(char arr[]){
    int count=0;
    for(int i=0; arr[i]!=0; i++)
    count++;
    return count;
}

class Solution {
public:
    void reverseString(vector<char>& s) {
       int i=0;
       int a=size(s);
       int j=a-1;
       while(i<j){
           swap(s[i],s[j]);
           i++;
           j--;
       }

    }
};