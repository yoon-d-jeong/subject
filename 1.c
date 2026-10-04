#include <stdio.h>
int main() {
    int x = 1, y = 1;
    int N;
    char move[202];
    do {
        scanf("%d", &N);
    } while (N < 1 || N>100);
    getchar();
    fgets(move, sizeof(move), stdin);
    for (int i = 0;move[i] != '\0';i++) {
        int nx = x;
        int ny = y;
        if (move[i] == 'L') {
            ny--;
        }
        else if (move[i] == 'R') {
            ny++;
        }
        else if (move[i] == 'U') {
            nx--;
        }
        else if (move[i] == 'D') {
            nx++;
        }
        if (nx >= 1 && nx <= N && ny >= 1 && ny <= N) {
            x = nx;
            y = ny;
        }
    }
    printf("%d %d", x, y);

}