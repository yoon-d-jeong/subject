#include <stdio.h>
int N, M;
int map[1000][1000];

void dfs(int x, int y) {
	if (x < 0 || x >= N || y < 0 || y >= M) {
		return;
	}
	if (map[x][y] == 1)
		return;
	map[x][y] = 1;
	dfs(x - 1, y);
	dfs(x + 1, y);
	dfs(x, y - 1);
	dfs(x, y + 1);

}
int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	int count = 0;
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < M;j++) {
			if (map[i][j] == 0) {
				count++;
				dfs(i, j);
			}
		}
	}
	printf("%d", count);

}