#include <iostream>
using namespace std;
long long int cnt;
#define pairll pair<long long, long long>
 long long int count;

bool cmp(const pairll &i1, const pairll &i2) { return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
void merge_count(long long int *a, int l, long long int mid, long long int h)
{
    int b[1000010];
    long long int i = l, j = mid + 1, k = 0;
    long long int lgt = h - mid;

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i];
            cnt += (a[i] * lgt);
            i++;
        }
        else
        {
            b[k++] = a[j++];
            lgt--;
        }
    }
    while (i <= mid)
        b[k++] = a[i++];

    while (j <= h)
        b[k++] = a[j++];

    k--;
    while (k >= 0)
    {
        a[l + k] = b[k];
        k--;
    }
}

void sort(long long int *a, long long int low, long long int high)
{
    if (low < high)
    {
        int m = (high + low) / 2;
        sort(a, low, m);
        sort(a, m + 1, high);
        merge_count(a, low, m, high);
    }
}

int main()
{
    int t;
    long long int arr[1000010], i, n;
    cin>>t;

    while (t--)
    {
         cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cnt = 0;
        sort(arr, 0, n - 1);
        cout<<cnt<<endl;
    }

    return 0;
}