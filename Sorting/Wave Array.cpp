 void convertToWave(vector<int>& arr, int n)
    {
        for (int i = 0; i < n; i+=2)
        {
            // If current even element is smaller than previous
            if (i>0 && arr[i-1] > arr[i] )
                swap(arr[i], arr[i-1]);
     
            // If current even element is smaller than next
            if (i<n-1 && arr[i] < arr[i+1] )
                swap(arr[i], arr[i + 1]);
        }
    }
