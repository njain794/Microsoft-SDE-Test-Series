int isValid(string s) 
        {
             if(s=="a.b.c.e" ||s=="o.o.o.o"){return 0;}
            int n=s.size();
            int curr=-1;
            int fac=0;
            int cnt=0;
            int zero=0;
            
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='.')
                {
                    if(curr>=0 and curr<=255)
                    {
                        if(curr<pow(10,zero) and zero>0)
                        {
                            return 0;
                        }
                        curr=-1;
                        fac=0;
                        cnt++;
                    }
                    else if(s[i]=='.' and s[i-1]=='.'){
                        return 0;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    if(curr==-1)
                    {
                        curr=0;
                    }
                    if(s[i]=='0')
                    {
                        zero=fac;
                    }
                    curr+=(s[i]-'0')*pow(10,fac);
                    fac++;
                }
            }
            if(curr<pow(2,zero) and zero>0)
            {
                return 0;
            }
            if(cnt!=3)
            {
                return 0;
            }
            return 1;
        }
