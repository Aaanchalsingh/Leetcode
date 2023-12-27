class Node{
    public:
    char data;
    bool ends;
    string word;
    Node*characters[26];
    Node(char d) {
        this->data=d;
        for(int i=0;i<26;i++) characters[i]=NULL;
        this->ends=false;
        this->word="";
    }
};
class Solution {
public:
    Node*root;
    Solution(){
        root= new Node('\0'); 
    }
    void insert(string s) {
        int n=s.size();
        Node*cur=root;
        for(int i=0;i<n;i++){
            if(cur->characters[s[i]-'a']==NULL){
                Node*temp=new Node(s[i]-'a');
                cur->characters[s[i]-'a']=temp;
            }
            cur=cur->characters[s[i]-'a'];
        }
        cur->ends=true;
        cur->word=s;
    }
    void solve(int i,int j,int r,int c,vector<vector<char>>& board, vector<string>& words,vector<string> &ans,Node*root){

        if(board[i][j]=='#'||root->characters[board[i][j]-'a']==NULL) return;
        root=root->characters[board[i][j]-'a'];
        if(root->ends==true){
            ans.push_back(root->word);
            root->ends=false;
        }
        char ch=board[i][j];
        board[i][j]='#';
        if(i>0) solve(i-1,j,r,c,board,words,ans,root);
        if(i<r-1) solve(i+1,j,r,c,board,words,ans,root);
        if(j>0) solve(i,j-1,r,c,board,words,ans,root);
        if(j<c-1) solve(i,j+1,r,c,board,words,ans,root);
        board[i][j]=ch;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++) insert(words[i]);
        vector<string> ans;
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               solve(i,j,r,c,board,words,ans,root);
            }
        }
        return ans;
    }
};