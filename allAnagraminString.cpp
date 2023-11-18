// 438. Find All Anagrams in a String

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pfreq(26,0);
        for(int i=0;i<p.size();i++){
            pfreq[p[i]-'a']++;
        }
        int i=0,j=0,n=s.size(),k=p.size();
        vector<int>sfreq(26,0);
        vector<int>ans;
        while(j<n){
            sfreq[s[j]-'a']++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(sfreq==pfreq){
                    ans.push_back(j-k+1);
                }
                sfreq[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};