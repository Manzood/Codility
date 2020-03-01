#include <stdio.h>

int solution(int A[], int N) {
    int i;
    long long int MAX = 1000000000; 
    int B[MAX];
    
    for (i = 0; i < MAX; i++)
    {
        B[i] = 0;
    }
    
    for (i=0; i<N; i++)
    {
        B[A[i]]++;
        if (B[A[i]]>1)
        {
            B[A[i]] = 0;
        }
    }
    
    for (i=0;i<MAX;i++)
    {
        if (B[i] > 0)
            return i;
    }
    
    return 0;
}

int main()
{
	int A[10000000];
	int len;
	len = 0;

	scanf ("%d", &len);

	for (int i = 0; i < len; i++)
	{
		scanf("%d", &A[i]);
	}

	int soln;
	soln = solution(A, len);

	printf("%d", soln);
}