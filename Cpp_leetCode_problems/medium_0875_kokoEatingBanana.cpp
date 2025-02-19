class Solution {
    public:
        double calTime(vector<int>& arr,int mid){
            double totalTime = 0;
            int n = arr.size();
            for(int i=0;i<n;i++)
            totalTime += ceil((double)arr[i]/(double)mid);
            return totalTime;
        }
        int minEatingSpeed(vector<int>& piles, int h) {
            sort(piles.begin(),piles.end());
            int n = piles.size();
            int maxElement = piles[n-1];
            int low = 1;
            int high = maxElement;
            int ans = -1;
            while(low<=high){
                int mid = low + (high - low)/2;
                double reqTime = calTime(piles,mid);
                if(reqTime<=h){
                    ans = mid;
                    high = mid - 1;
                }
                else
                low = mid + 1;
            }
            return ans;
        }
    };