#include <stdio.h> 
int main(void) { 
	int N, M; 
	int start = 0; 
	int end, mid; 
	int Max = 0; 
	int answer; 
	scanf("%d %d", &N, &M); 
	int A[1000000]; 
	for (int i = 0;i < N;i++) { 
		scanf("%d", &A[i]); 
		if (A[i] > Max) { 
			Max = A[i]; 
		} 
	} 
	end = Max; 
	while (start <= end) { 
		mid = (start + end) / 2; 
		int sum=0; 
		for (int i = 0;i < N;i++) { 
			if (A[i] > mid) { 
				sum += A[i] - mid; 
			} 
		} 
		if (sum == M) { 
			answer = mid; 
			break; 
		} 
		else if (sum > M) { 
			answer = mid; 
			start = mid + 1; 
		} 
		else { 
			end = mid - 1; 
		} 
 
	} 
	printf("%d", answer); 
	 
}
