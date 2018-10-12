   #include <stdio.h>
   int main()
    {
        int ar[30];
        int i, j, a, n, counter, average;
        printf("Enter the value of N\n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &ar[i]);

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (ar[i] < ar[j])
                {
                    a = ar[i];
                    ar[i] = ar[j];
                   ar[j] = a;
                }
            }

        }
        printf("The 2nd largest number is  = %d\n", ar[1]);
        printf("The 2nd smallest number is = %d\n", ar[n - 2]);
    return 0;
    }

