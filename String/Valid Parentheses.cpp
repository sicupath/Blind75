#include <stack>
#include <map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> St;
        map<char, char> open;
        open[')']='(';
        open['}']='{';
        open[']']='[';
        for(int i=0; i<s.size(); i++){
            if(open[s[i]]){
                if(St.empty()){
                    return false;
                }else if(St.top()==open[s[i]]){
                    St.pop();
                }else{
                    return false;
                }
            }else{
                St.push(s[i]);
            }
        }
        if(!St.empty()){
            return false;
        }
        return true;
    }
};
