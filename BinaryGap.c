int solution(int N) {
    int x = N;
    int bin[100000], i;
    int ans = 0;
    int count, max;
    
    max = 0;
    
    int maxans = 0;
    
    while (x>0)
    {
        i = 1;
        count = 0;
        while (i<=x)
        {
            i=i*2;
            count++;
        }
        i=i/2;
        
        x = x-i;
        bin[count] = 1;
        
        if (count>max)
            max = count;
    }
    
    for (i = max; i > 0; i--)
    {
        //printf ("%d", bin[i]);
        
        if (bin[i] != 1)
            ans++;
            
        else
        {
            if (maxans < ans)
                maxans = ans;
                
            ans = 0;
        }
    }
    
    return maxans;
}