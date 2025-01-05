class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        int arr[n];
        for(int i=0;i<n;i++)arr[i]=0;
        for(int i=0;i<shifts.size();i++){
            if(shifts[i][2]==0){
                arr[shifts[i][0]]-=1;
                if(shifts[i][1]+1<n){
                    arr[shifts[i][1]+1]+=1;
                }
            }
            else if(shifts[i][2]==1){
                arr[shifts[i][0]]+=1;
                if(shifts[i][1]+1<n){
                    arr[shifts[i][1]+1]-=1;
                }
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(i>0)arr[i]+=arr[i-1];
            char t =s[i];
            int temp = arr[i]%26;
            if(t+temp>'z'){
                temp-=('z'-t)+1;
                t='a';
            }
            if(t+temp<'a'){
                temp+=(t-'a')+1;
                t='z';
            }
            char c = (char)(t+temp);
            ans+=c;
        }
         return ans;
    }
   
};