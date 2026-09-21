#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[1000];
        scanf("%s", s);

        int lower = 0;
        int upper = 0;
        int digit = 0;
        int special = 0;
        int n = strlen(s);

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                lower = 1;

            if (i > 0 && i < n - 1 && s[i] >= 'A' && s[i] <= 'Z')
                upper = 1;

            if (i > 0 && i < n - 1 && s[i] >= '0' && s[i] <= '9')
                digit = 1;

            if (i > 0 && i < n - 1 &&
                (s[i] == '@' || s[i] == '#' || s[i] == '%' ||
                 s[i] == '&' || s[i] == '?'))
                special = 1;
        }

        if (lower && upper && digit && special && n >= 10)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}