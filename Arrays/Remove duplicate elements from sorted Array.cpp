class Solution{
public:
    int remove_duplicate(int a[],int n){
        int len=0;
        for(int i=0;i<n;i++)
        {
            if(a[len]!=a[i])
            {
                len++;
                a[len]=a[i];
            }
        }
        return len+1;
    }
};
