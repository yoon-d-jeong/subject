#include <stdio.h>

int N, M;
int map[200][200];
int dist[200][200];

int qx[40000];
int qy[40000];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs() {
    int front = 0;
    int rear = 0;

    qx[rear] = 0;
    qy[rear] = 0;
    rear++;

    dist[0][0] = 1;

    while (front < rear) {
        int x = qx[front];
        int y = qy[front];
        front++;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;

            if (map[nx][ny] == 0)
                continue;

            if (dist[nx][ny] != 0)
                continue;

            dist[nx][ny] = dist[x][y] + 1;

            qx[rear] = nx;
            qy[rear] = ny;
            rear++;
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &map[i][j]);
        }
    }

    bfs();

    printf("%d\n", dist[N - 1][M - 1]);

    return 0;
}