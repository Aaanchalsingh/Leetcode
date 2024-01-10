class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int n=word.size(),count=0;
        for(int i=0;i<n-1;i++){
            if(word[i]==word[i+1]||word[i]==word[i+1]-1||word[i]==word[i+1]+1){
                i++;
                count++;
            }
        }
        return count;
    }
};