/*
Vẽ rắn: VD:(3,5)
                    #####
                    ....#
                    #####
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; ++i) {       // Lặp qua từng cột của hàng đó
        for (int j = 1; j <= m; ++j) {
            if (i % 2 == 1) {                // Nếu là hàng lẻ (hàng thứ 1, 3, 5, ...)
                printf("#");
            } else {             // Nếu là hàng chẵn
                if (i % 4 == 0 && j == 1) {      // Hàng thứ 4, 8, 12,... có dấu # ở đầu (i % 4 == 0)
                    printf("#");
                } else if (i % 4 == 2 && j == m) {      // Hàng thứ 2, 6, 10,... có dấu # ở cuối (i % 4 == 2)
                    printf("#");
                } else {
                    printf(".");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
