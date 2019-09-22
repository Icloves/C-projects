#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *str);
int     test(const char *str);

int main(void)
{
    char *str;
    long long res = 0;

    printf("1. ");
    res += test("214d");
    printf("2. ");
    res += test(" -214d");
    printf("3. ");
    res += test(" +214d");
    printf("4. ");
    res += test("\t\n\v\f\r -214d");
    printf("5. ");
    res += test("V-214d");
    printf("6. ");
    res += test("-21V4d");
    printf("7. ");
    res += test(" v -214d");
    printf("8. ");
    res += test("-21 4d");
    printf("9. ");
    res += test("- +214d");
    printf("10. ");
    res += test("+-214d");
    printf("11. ");
    res += test("- 21 4d");
    printf("12. ");
    res += test("-d");
    printf("13. ");
    res += test("+d");
    printf("14. ");
    res += test("-2147483648");
    printf("15. ");
    res += test("2147483647");

    printf("\nResult: %lld", res);
    printf(" of 15\n");

    if (res == 15)
        printf("Succes!\n");
    else
        printf("Fail!\n");

    return (0);
}

int     test(const char *str)
{
    if (atoi(str) == ft_atoi(str))
    {
        printf("\tOK\n");
        return (1);
    } else {
        printf("\tKO\n");
        printf("%s\n", str);
        printf("%d\n", atoi(str));
        printf("~~~VS~~~\n");
        printf("%d\n", ft_atoi(str));
        return (0);
    }
}
