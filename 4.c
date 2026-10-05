#include <stdio.h>
int main(void) {
	int N, K;
	int A[100000];
	int B[100000];
	scanf("%d %d", &N, &K);
	for (int i = 0;i < N;i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0;i < N;i++) {
		scanf("%d", &B[i]);
	}
	for (int i = 0;i < N;i++) {
		int min = i;
		for (int j = i + 1;j < N;j++) {
			if (A[j] < A[min]) {
				min = j;
			}
		}
		int temp = A[i];
		A[i] = A[min];
		A[min] = temp;
		
	}
	for (int i = 0;i < N - 1;i++) {
		int max = i;
		for (int j = i + 1;j < N;j++) {
			if (B[j] > B[max]) {
				max = j;
			}
		}
		int temp = B[i];
		B[i] = B[max];
		B[max] = temp;
	}
	for (int i = 0;i < K;i++) {
		if (A[i] < B[i]) {
			int temp = A[i];
			A[i] = B[i];
			B[i] = temp;
		}
		else {
			break;
		}
	}
	int sum = 0;
	for (int i = 0; i < N;i++) {
		sum += A[i];
	}
	printf("%d", sum);

}
