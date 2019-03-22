#include <bits/stdc++.h>
#define MAX(c, a, b) {c=a;if(a<b)c = b;}
#define UMAX(a, b) {if(a<b)a=b;}
using namespace std;

const int N = (1<<21);
const int SZ = N * 2 + 179;

struct SegmentTree {
	int T[SZ];
	SegmentTree() {}
	void change(int pos, int val) {
		pos += N;
		T[pos] = val;
		pos >>= 1;
		while (pos) {
			MAX(T[pos], T[(pos<<1) + 1], T[pos<<1]);
			pos >>= 1;
		}
	}

	int get(int l, int r) {
		int res = 0;
		l += N;
		r += N;
		while (l <= r) {
			if (l % 2 == 1) {
				UMAX(res, T[l]);
				//if (res < T[l]) res = T[l];
				l++;
			}
			if (r % 2 == 0) {
				UMAX(res, T[r]);//if (res < T[r]) res = T[r];
				r--;
			}
			l >>= 1;
			r >>= 1;
		}
		return res;
	}
};

SegmentTree T;
int t, l, r, val, n, pos;

signed main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	while (n --> 0) {
		cin >> t;
		if (t == 1) {
			cin >> pos >> val;
			T.change(pos, val);
		} else {
			cin >> l >> r;
			cout << T.get(l, r) << endl;
		}
	}

	return 0;
}