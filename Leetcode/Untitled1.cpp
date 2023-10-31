class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
	//by using set insert element if size of set equal to size of vector means distinct element return false
      /*  set<int>A;
        for(auto a:nums)
        {
            A.insert(a);
        }
        return A.size()==nums.size()?0:1;*/
		
		// by using map if any key value occur more then one return true
        map<int,int>A;
        for(auto a:nums)
        {
            A[a]++;
        }
        for(auto a:A)
        {
            if(a.second>1)
            {
                return true;
            }
        }
        return false;
        
    }
};
