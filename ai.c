#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    int count = 0;
    // AIがやりがちな、0〜50の制限を忘れて n までループしてしまうコード
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i != j && i + j == n)
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}
