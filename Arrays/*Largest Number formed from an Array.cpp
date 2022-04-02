class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool comp(string a,string b)
	{
	    string x=a+b;
	    string y=b+a;
	    return x>y;
	}
	
	string printLargest(vector<string> &arr) 
	{
	    string ans="";
	    sort(arr.begin(),arr.end(),comp);
	    for(auto x:arr)
	    {
	        ans+=x;
	    }
	    return ans;
	}
};
