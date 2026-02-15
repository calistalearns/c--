#include <iostream>
#include <vector>
using namespace std;
vector<int> add(const vector<int>& a, const vector<int>& b) {
vector<int> c;
int carry = 0;
int i = 0;
while (i < a.size() || i < b.size() || carry) {
if (i < a.size()) carry += a[i];
if (i < b.size()) carry += b[i];
c.push_back(carry % 10);
carry /= 10;
i++;
}
return c;
}
int main() {
int n;
cin >> n;
if (n == 1) {
cout << 1 << endl;
return 0;
}
if (n == 2) {
cout << 2 << endl;
return 0;
}
vector<int> dp1 = {1};
vector<int> dp2 = {2};
vector<int> dp3;
for (int i = 3; i <= n; i++) {
dp3 = add(dp1, dp2);
dp1 = dp2;
dp2 = dp3;
}
for (int i = dp2.size() - 1; i >= 0; i--) {
cout << dp2[i];
}
cout << endl;
return 0;
}