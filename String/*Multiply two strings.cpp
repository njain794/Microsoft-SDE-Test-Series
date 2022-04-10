string multiplyStrings(string s1, string s2) 
    {
       int n=s1.size();
       int m=s2.size();
       
       if(n==0 || m==0 || s1=="0" || s2=="0" )
       {
           return "0";
       }
       else if(s1=="1")
       {
           return s2;
       }
       else if(s2=="1")
       {
           return s1;
       }
       bool flag=false;
       if(s1[0]=='-')
       {
           flag=!flag;
           s1=s1.substr(1,n-1);
       }
       if(s2[0]=='-')
       {
           flag=!flag;
           s2=s2.substr(1,m-1);
       }
       n=s1.size();
       m=s2.size();
       
       vector<int>v(n+m,0);
       
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=0;j--)
           {
               v[i+j+1]+=(s1[i]-'0')*(s2[j]-'0');
               v[i+j]+=v[i+j+1]/10;
               v[i+j+1]%=10;
           }
       }
       
       string ans;
       for(int x:v)
       {
           if(x==0 and ans.size()==0)
           {
               continue;
           }
           ans+=to_string(x);
       }
       if(flag==true)
       {
           ans="-"+ans;
       }
       return ans;
    }
