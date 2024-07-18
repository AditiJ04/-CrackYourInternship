class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";

        while(columnNumber>0)
        {
            columnNumber--;

            char ch='A'+(columnNumber)%26;

            res+=ch;
            columnNumber/=26;
        }

        reverse(res.begin(),res.end());
        return res;
    }
};