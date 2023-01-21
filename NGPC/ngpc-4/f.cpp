#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pairll pair<long long, long long>
long long int count;

bool cmp(const pairll &i1, const pairll &i2) { return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
void merge(long long int *a, int low, long long int mid, long long int high)
{
    int b[1000010];
    long long int i = low, j = mid + 1, k = 0;
    long long int length = high - mid;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i];
            count += (a[i] * length);
            i++;
        }
        else
        {
            b[k++] = a[j++];
            length--;
        }
    }
    while (i <= mid)
        b[k++] = a[i++];

    while (j <= high)
        b[k++] = a[j++];

    k--;
    while (k >= 0)
    {
        a[low + k] = b[k];
        k--;
    }
}

void mergesort(long long int *a, long long int low, long long int high)
{
    if (low < high)
    {
        int m = (high + low) / 2;
        mergesort(a, low, m);
        mergesort(a, m + 1, high);
        merge(a, low, m, high);
    }
}
