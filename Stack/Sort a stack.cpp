void sortStack(stack<int>&s,int val)
{
    if(s.empty() or s.top()<=val)
    {
        s.push(val);
        return;
    }
    int value=s.top();
    s.pop();
    sortStack(s,val);
    s.push(value);
    return;
}

void SortedStack :: sort()
{
   if(s.empty() or s.size()==1)
   {
       return;
   }
   int val=s.top();
   s.pop();
   sort();
   sortStack(s,val);
}
