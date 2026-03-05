#include <cstdio>
#include <algorithm>
using namespace std;

struct data
{
    int x, y, z;
};
data f[100005];
int n, m, a[20005], b[20005], i;

bool cmp(data a, data b)
{
    return a.z > b.z;
}

int find(int x)
{
    if (a[x] == x)
        return x;
    a[x] = find(a[x]);
    return a[x];
}

void ad(int x, int y)
{
    x = find(x);
    y = find(y);
    a[x] = y;
}

bool check(int x, int y)
{
    x = find(x);
    y = find(y);
    return x == y;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
        a[i] = i;
    for (i = 1; i <= m; i++)
        scanf("%d%d%d", &f[i].x, &f[i].y, &f[i].z);
    sort(f + 1, f + m + 1, cmp);
    for (i = 1; i <= m + 1; i++)
    {
        if (check(f[i].x, f[i].y))
        {
            printf("%d", f[i].z);
            break;
        }
        else
        {
            if (!b[f[i].x])
                b[f[i].x] = f[i].y;
            else
                ad(b[f[i].x], f[i].y);
            if (!b[f[i].y])
                b[f[i].y] = f[i].x;
            else
                ad(b[f[i].y], f[i].x);
        }
    }
    return 0;
}