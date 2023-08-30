// In the name of Allah (SWT). 

#include <bits/stdc++.h>
 
using namespace std;
 
// For memset operations.

#define INF             2000000000    // 2B.
#define MEMSET_INF      0x7f          // Almost 2B.
#define MEMSET_HALF_INF 0x3f          // Almost 1B.
 
#define ll long long
#define ull unsigned ll
 
/** For code debugging. */
 
// Debug printer for general data types.
 
void __dbg_print(int x) { cerr << x; }
void __dbg_print(short x) { cerr << x; }
void __dbg_print(unsigned x) { cerr << x; }
void __dbg_print(ll x) { cerr << x; }
void __dbg_print(ull x) { cerr << x; }
void __dbg_print(float x) { cerr << x; }
void __dbg_print(double x) { cerr << x; }
void __dbg_print(long double x) { cerr << x; }
void __dbg_print(char x) { cerr << x; }
void __dbg_print(const char* s) { cerr << '"' << s << '"'; }
void __dbg_print(const string& s) { cerr << '"' << s << '"'; }
void __dbg_print(bool x) { cerr << x; }
 
// Debug printer for STL pair<T1, T2>.
 
template<typename T1, typename T2>
void __dbg_print(const pair<T1, T2>& x) {
    cerr << '(';

    __dbg_print(x.first);
    cerr << ", ";

    __dbg_print(x.second);
    cerr << ')';
}
 
// Debug printer for STL containers such as vector<T>, initializer_list<T> etc.
 
template<typename T>
void __dbg_print(const T& x) {
    bool first;

    cerr << "{ ";

    for(const auto& i : x) {
        if(!first) {
            cerr << ", ";

            first = false;
        }

        __dbg_print(i);
    }

    cerr << " }";
}
 
// Debug end.
 
void __dbg_out() { cerr << " ]" << endl; }
 
template<typename T1, typename ... T2>
void __dbg_out(T1 a, T2 ... b) {
    __dbg_print(a);

    if(sizeof ... (b)) 
        cerr << ", ";

    __dbg_out(b ...);
}
 
#define dbg(...) cerr << "Debug : [ " << #__VA_ARGS__ << " ] = [ ", __dbg_out(__VA_ARGS__)
 
#define endl '\n'
 
// Take input to a plain C array.
 
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#elif defined(DEBUG)
    freopen("input",  "r", stdin);
    freopen("output", "w", stdout);
    freopen("debug",  "w", stderr);
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
