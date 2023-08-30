// In the name of Allah (SWT).

#include <bits/stdc++.h>

using namespace std;

#define ll   long long
#define ull  unsigned ll
#define endl '\n'

// For memset operations.

#define INF             20000000000    // 2B.
#define MEMSET_INF      0x7f           // Almost 2B.
#define MEMSET_HALF_INF 0x3f           // Almost 1B.

// Take input to a C like array.

template<typename T1, typename T2>
void input(T1* arr, T2 n) {
    for(T2 i = 0; i < n; i++) 
        cin >> arr[i];
}

// Take input to STL containers.

template<typename T>
void input(const T& stl) {
	for(T t : stl) 
		cin >> t;
}

// Print a plain C array (seperated by spaces).

template<typename T1, typename T2>
void print(const T1* const arr, T2 size) {
    for(int i = 0; i < size; i++) 
        cout << arr[i] << " ";
    
    cout << endl;
}

// Print STL containers.

template<typename T>
void print(const T& stl) {
    for(T& t : stl) 
        cout << t << " ";

    cout << endl;
}

void pre() {}

void solve() {
    
}

int main() {
#ifdef LOCAL
    freopen(stdin, "input.txt", "r");
    freopen(stdout, "output.txt", "w");
#elif defined(DEBUG)
    freopen(stdin, "input", "r");
    freopen(stdout, "output", "w");
    freopen(stderr, "debug", "w");
#endif

    // Pre-computation.

    pre();

    cin.tie(nullptr) -> sync_with_stdio(false);
    cin.exceptions(cin.failbit);

    int T = 1;

    cin >> T;

    while(T--) 
        solve();

    return 0;
}
