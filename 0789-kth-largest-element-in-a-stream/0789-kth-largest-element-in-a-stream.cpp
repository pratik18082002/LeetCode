class KthLargest {
    int k=0;
    vector<int> num;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0;i<nums.size();i++) num.push_back(nums[i]);
        sort(num.begin(),num.end());
    }
    
    int add(int val) {
        num.push_back(val);
        for(int i=num.size()-1;i>0;i--){
            if(num[i]<num[i-1]) swap(num[i],num[i-1]);
            else break;
        }
        return num[num.size()-k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */