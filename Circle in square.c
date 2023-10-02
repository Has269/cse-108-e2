#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        double r;
        scanf("%lf", &r);

        double square_area = 4 * r * r;
        double circle_area = M_PI * r * r;
        double shaded_area = square_area - circle_area;

        printf("Case %d: %.2lf\n", i, shaded_area);
    }

    return 0;
}
