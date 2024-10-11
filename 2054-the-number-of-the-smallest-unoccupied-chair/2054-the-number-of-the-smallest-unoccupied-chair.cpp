class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int arrival=times[targetFriend][0];
        sort(times.begin(),times.end());
        vector<int> seats;
        for(int i=0;i<times.size();i++){
            int j=0;
            for(j=0;j<seats.size();j++){
                if(seats[j]<=times[i][0]){
                    seats[j]=times[i][1];
                    break;
                }
            }
            if(j==seats.size()) seats.push_back(times[i][1]);
            if(times[i][0]==arrival) return j;
        }
        return -1;
    }
};