#include <cstring>
#include <iostream>

void main() {
    setlocale(LC_ALL, "Rus");
    char str[250], s1[250];
    int pos1, pos2, count = 0, countS;
    printf("Введите строку: ");
    gets_s(str);
    pos1 = -1;
    pos2 = -1;
    for (int i = 0; *(str+i) != '\0'; i++) {
        count++;
    }

    for (int i = 0; i < count; i++) {
        if (*(str+i) == '(') {
            pos1 = i;
        }
        else if (*(str+i) == ')') {
            pos2 = i;

            if (pos1 != -1 && pos2 != -1) {
                for (int j = 0; j < pos1; j++) {
                    *(s1+j) = *(str+j);
                }
                *(s1+pos1) = '\0';
                countS = 0;
                for (int i = 0; *(str+i) != '\0'; i++) {
                    countS++;
                }
                for (int k = pos2 + 1; k < countS; k++) {
                    *(s1+pos1 + k - pos2 - 1) = *(str+k);
                    *(s1+pos1 + k - pos2) = '\0';
                }

                for (int k = 0; k < count; k++) {
                    *(str+k) = *(s1+k);
                }
                *(str+count) = '\0';
                pos1 = -1;
                pos2 = -1;
                i = -1;
            }
        }
    }
    printf("%s", str);
}