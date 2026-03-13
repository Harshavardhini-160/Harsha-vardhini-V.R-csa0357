#include <stdio.h>

int main()
{
    int hash[10], key, i, h, n;

    for(i=0;i<10;i++)
        hash[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value: ");
        scanf("%d",&key);

        h = key % 10;

        while(hash[h] != -1)
            h = (h+1) % 10;

        hash[h] = key;
    }

    printf("Hash Table:\n");

    for(i=0;i<10;i++)
        printf("%d -> %d\n", i, hash[i]);

    return 0;
}
