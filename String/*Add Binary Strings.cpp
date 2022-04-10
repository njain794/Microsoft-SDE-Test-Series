string addBinary(string s1, string s2)
	{
	    int i=s1.size()-1;
	    int j=s2.size()-1;
	    string ans="";
	    int carry=0;
	    
	    while(i>=0 or j>=0 or carry)
	    {
	        if(i>=0)
	        {
	            carry+=s1[i]-'0';
	            i--;
	        }
	        if(j>=0)
	        {
	            carry+=s2[j]-'0';
	            j--;
	        }
	        ans+=(carry%2+'0');
	        carry/=2;
	    }
	    reverse(ans.begin(),ans.end());
	    int c=0;
	    if(ans[0]=='0')
	    {
	        int c=1;
	        int g=ans.size();
	        while(c<g and ans[c]=='0')
	        {
	            c++;
	        }
	        //cout<<c<<"\n";
	        ans=ans.substr(c);
	    }
	    return ans;
	}
