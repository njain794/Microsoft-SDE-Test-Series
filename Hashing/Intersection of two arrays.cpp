class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
    {
        unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    int cnt=0;
    for(int j=0;j<m;j++)
    {
        if(s.find(b[j])!=s.end())
        {
            cnt++;
            s.erase(b[j]);
        }
    }
    return cnt;
        // Your code goes here
    }
};
