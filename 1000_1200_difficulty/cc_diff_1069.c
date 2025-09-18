#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int a, b, x;
        scanf("%d%d%d", &a, &b, &x);

        if (a == b) {
            printf("YES\n");
        } else if (a < b) {
            if ( (b - a) % (2 * x) == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if (a > b) {
            if ( (a - b) % (2 * x) == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }

        t--;
    }
    return 0;
}