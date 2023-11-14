// Unique Occurence
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int i = 0;
        while(i < arr.size()){
            int count = 1;
            for(int j =0; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    count ++;
                }
                else{
                    break;
                }
            
            }
            ans.push_back(count);
            i += count; 
        }
        sort(ans.begin(),ans.end());
        int i = 0;
        while(i<ans.size()){
            if(ans[i] == ans[j+1]){
                return false;
            }
        }
        return true;
    }
};