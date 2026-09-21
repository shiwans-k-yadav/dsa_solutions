class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){
            int index = s.find(part);
            s.erase(index,part.length());
        }
        return s;
    }
};

// string::npos is something which is return by find(), if s.find(part) ,finds nothing.
