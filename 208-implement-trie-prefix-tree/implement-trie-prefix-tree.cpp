class Trie {
public:
    vector<string> v;
    Trie() {
        
    }
    
    void insert(string word) {
        v.push_back(word);
    }
    
    bool search(string word) {
        return find(v.begin(),v.end(),word)!=v.end();
    }
    
    bool startsWith(string prefix) {
        for(auto x:v){
            if(x.starts_with(prefix))
                return true;
        }
        return false; 
    }
};