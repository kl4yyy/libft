#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "HelloWorld";
    char str2[] = "HelloWorld";
    char str3[] = "HelloThere";

    // Compare str1 and str2 - should be equal
    int result1 = memcmp(str1, str2, sizeof(str1));
    if (result1 == 0)
        printf("str1 and str2 are equal\n");
    else
        printf("str1 and str2 are different (memcmp returned %d)\n", result1);

    // Compare str1 and str3 - should be different
    int result2 = memcmp(str1, str3, sizeof(str1));
    if (result2 == 0)
        printf("str1 and str3 are equal\n");
    else if (result2 < 0)
        printf("str1 is less than str3 (memcmp returned %d)\n", result2);
    else
        printf("str1 is greater than str3 (memcmp returned %d)\n", result2);

    return 0;
}
