class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int mid = candyType.size()/2;
        
        set<int> s;
        for(int i=0;i<candyType.size();i++)
        {
            s.insert(candyType[i]);
        }
        if(s.size() <= mid)
        {
            return s.size();
        }
        else
        {
            return mid;
        }
    }
};