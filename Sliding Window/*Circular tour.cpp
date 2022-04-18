int tour(petrolPump p[],int n)
    {
        int petrol=0,distance=0;
      for(int i=0;i<n;i++){
          petrol+=p[i].petrol;
          distance+=p[i].distance;
      }
      if(distance>petrol)return -1;    
        
       int cap=0;
       int def=0;
       int s=0;
       
       for(int i=0;i<n;i++)
       {
           cap+=p[i].petrol-p[i].distance;
           if(cap<0)
           {
               s=i+1;
               def=cap;
               cap=0;
           }
           
       }
       return s;
    }
