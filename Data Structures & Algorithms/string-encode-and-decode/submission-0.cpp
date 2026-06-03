class Solution {
public:

    string encode(vector<string>& strs) {
        string word="";
     for(string s:strs){
     word+=to_string(s.size())+'#'+s;
     }
     return word;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>words;
       while(i<s.size()){
        string num="";
        while(i<s.size() && s[i]!='#'){
             num+=s[i];
            i++;
        }
        int limit=stoi(num);
        string b="";
        int j=i+1;
        while(j<i+limit+1){
            b+=s[j];
            j++;
       }
       words.push_back(b);
        i+=limit+1;
       }
       return words;
    }
};
