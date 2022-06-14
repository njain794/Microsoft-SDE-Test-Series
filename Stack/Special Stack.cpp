int mini;
void push(stack<int>& s, int a){
    if(s.empty())
    {
        mini=a;
        s.push(a);
    }
    else if(a<mini)
    {
        mini=a;
        s.push((2*a)-mini);
    }
    else{
    s.push(a);
    }
}

bool isFull(stack<int>& s,int n){
	return (s.size()==n);
}

bool isEmpty(stack<int>& s){
	return (s.size()==0);
}

int pop(stack<int>& s){
    int ans;
	if(isEmpty(s))
	{
	    return -1;
	}
	else if(s.top()<mini)
	{
	    mini=(2*mini)-s.top();
	}
	ans=s.top();
	s.pop();
	return ans;
}

int getMin(stack<int>& s){
	if(isEmpty(s))
	{
	    return -1;
	}
	return mini;
}
