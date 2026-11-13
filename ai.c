#include <stdio.h>

int main(void)
{
    int input_number;
    if (scanf("%d", &input_number) != 1)
    {
        return 1;
    }

    // 入力値が負のときは「NG」を出力して終了
    if (input_number < 0)
    {
        printf("NG\n");
        return 0;
    }

    int total_pairs = 0;
    
    // 一重ループで i を走査し、もう一方の数（j = input_number - i）を逆算して判定する
    for (int i = 0; i <= 50; i++)
    {
        int j = input_number - i;
        
        // j が 0〜50 の範囲内であり、かつ i と j が異なる場合のみ数える
        if (j >= 0 && j <= 50 && i != j)
        {
            total_pairs++;
        }
    }

    printf("%d\n", total_pairs);
    return 0;
}