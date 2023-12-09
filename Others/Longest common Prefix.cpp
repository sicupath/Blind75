class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        
        if(strs.size()==2){
            string px = "";
            int i=0;
            while(strs[0][i]==strs[1][i] && i<min(strs[0].size(), strs[1].size())){
                px += strs[0][i];
                i++;
            }
            return px;
        }

        string px = strs[0];
        for(int i=1; i<strs.size(); i++){
            vector<string> words = {px, strs[i]};
            px = longestCommonPrefix(words);
        }
        return px;
    }
};

/*
La idea es que LCP(s1,s2,...) = LCP(s1,LCP(s2,LCP(s3,...)))
Por lo que vamos comparando de dos en dos y la complejidad es O(S)
donde S es el numero total de caracteres de todas las palabras
*/
