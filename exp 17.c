#include <stdio.h>

void merge(int a[], int l, int m, int r)
{
    int i=l, j=m+1, k=l, temp[50];

    while(i<=m && j<=r)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i<=m)
        temp[k++] = a[i++];

    while(j<=r)
        temp[k++] = a[j++];

    for(i=l;i<=r;i++)
        a[i] = temp[i];
}

void mergesort(int a[], int l, int r)
{
    int m;

    if(l<r)
    {
        m = (l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main()
{
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    mergesort(a,0,n-1);

    printf("Sorted array:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
