long long int floorSqrt(long long int x) 
{
     long long int s=1;
     long long int e=x;
     long long int ans=0;
     
     while(s<=e)
     {
         long long int mid=s+(e-s)/2;
         long long int temp=mid*mid;
         
         if(temp==x)
         {
             return mid;
         }
         else if(temp<x)
         {
             ans=mid;
             s=mid+1;
         }
         else{
             e=mid-1;
         }
     }
     return ans;
}
