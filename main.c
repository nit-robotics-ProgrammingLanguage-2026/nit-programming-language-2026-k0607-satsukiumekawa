#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    // n が負のときは「NG」を出力して終了
    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    int count = 0;
    // 0 以上 50 以下の範囲で i と j を全探索する
    for (int i = 0; i <= 50; i++)
    {
        for (int j = 0; j <= 50; j++)
        {
            // i と j が異なり、かつ i + j = n となる組を数える
            if (i != j && i + j == n)
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}
