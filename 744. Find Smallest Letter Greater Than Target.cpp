class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res=letters[0];
        sort(letters.begin(),letters.end());
        for(auto i:letters)
        {
            if(i>target) {
                res=i; break;
            }
        }
        return res;
    }
};