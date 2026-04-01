#include <iostream>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
int n, d, v[N], a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> d;
    for (int i = 1; i < n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    ll ans = 0, left_km = 0;  // 还能跑多少公里
    int cur = 1;
    
    while (cur < n) {
        int nxt = cur + 1;
        while (nxt < n && a[nxt] > a[cur]) nxt++;
        
        ll dis = 0;
        for (int i = cur; i < nxt; i++) dis += v[i];
        
        if (left_km < dis) {
            ll need_km = dis - left_km;
            ll buy = (need_km + d - 1) / d;  // 向上取整
            ans += buy * a[cur];
            left_km += buy * d;
        }
        left_km -= dis;
        cur = nxt;
    }
    
    cout << ans << endl;
    return 0;
}