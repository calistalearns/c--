#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 50005;
int stone[MAXN];
int L, n, m;

bool check(int d)
{
    int prev = 0;
    int removed = 0;
    for (int i = 1; i <= n; i++)
    {
        if (stone[i] - prev < d)
        {
            removed++;
        }
        else
        {
            prev = stone[i];
        }
    }
    return removed <= m;
}

int main()
{
    scanf("%d %d %d", &L, &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &stone[i]);
    }
    stone[++n] = L;
    
    int l = 1, r = L, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}