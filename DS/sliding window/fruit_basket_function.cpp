class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0,mx=1;
        if(fruits.size()<=1)return fruits.size();
        map<int,int> m;
        while(j<fruits.size()){
            m[fruits[j]]++;
            if(m.size()<2){
                
                mx=max(mx,j-i+1);
                j++;
            }
            else if(m.size()==2)
            {
                mx=max(mx,j-i+1);
                j++;
                
            }   
            else {
                while(m.size()>2){
                    m[fruits[i]]--;
                    if(m[fruits[i]]==0){
                        m.erase(fruits[i]);
                    }i++;
                    
                }
                j++;
            }
        }
        return mx;
    }
};