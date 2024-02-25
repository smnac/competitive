class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k=0;
        int count=0;
        vector<int> charmap(126);
        char temp;
        string res;
        int min=INT_MAX;
        for(auto str:strs)
        {
            if(str.size()<min)
              min=str.size();
        }

        for(int i=0;i<min;i++)
        {
          for(int j=0;j<strs.size();j++)
          {  
              temp =strs[j][i]; 
            charmap[strs[j][i]]+=1;
         
          }
          if(charmap[temp]==strs.size()){
               res.push_back(temp);
               charmap[temp]=0;  
               continue;
          }
          else
           {
               return res;

           }
        }
        return strs[0].substr(0,min);
        
    }
};
