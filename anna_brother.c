#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int answer = 0;

    if (m * a <= b) {
        answer = n * a;
    } else {
        answer = (n / m) * b + min((n % m) * a, b);
    }

    printf("%d\n", answer);

    return 0;
}