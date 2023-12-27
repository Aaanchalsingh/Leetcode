class Node{
    public:
    char data;
    bool ends;
    Node*characters[26];
    Node(char d) {
        this->data=d;
        for(int i=0;i<26;i++) characters[i]=NULL;
        this->ends=false;
    }
};
class Trie {
public:
    Node*root;
    Trie(){
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
    }
    
    bool search(string s) {
        int n=s.size();
        Node*cur=root;
        for(int i=0;i<n;i++){
            if(cur->characters[s[i]-'a']==NULL) return false;
            cur=cur->characters[s[i]-'a'];
        }
        return cur->ends;
    }
    bool startsWith(string s) {
        int n=s.size();
        Node*cur=root;
        for(int i=0;i<n;i++){
            if(cur->characters[s[i]-'a']==NULL) return false;
            cur=cur->characters[s[i]-'a'];
        }
        return true;
    }
};