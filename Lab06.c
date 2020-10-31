#include <stdio.h>
main()
{
    int x, y;

    x = y = 3;
    if (x > 0 && y < 0)
        y += x + y;
    printf("%d %d\n", x, y);

    x = y = 4;
    if (x > 0 || y < 0)
        y += x + y;
    printf("%d %d\n", x, y);

    x = y = 5;
    if (!(x > 0 || y < 0))
        y += x + y;
    printf("%d %d\n", x, y);

    x = y = 4;
    switch (x) {
    case 1:
        x++;
        y--;
    case 2:
        x = x + 7;
        y = x % 7;
        printf("%d %d\n", x, y);
    case 3:
        x--;
        y++;
        break;
    default:
        printf("%d %d\n", x, y);
        break;
    }
    printf("%d %d\n", x, y);
}