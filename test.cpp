#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
typedef long long ll;
typedef vector<vector<ll>> vvl;
const ll INF = LLONG_MAX;

template <class T, size_t n, size_t idx = 0>
auto make_vec(const size_t (&d)[n], const T &init) noexcept
{
    if constexpr (idx < n)
        return std::vector(d[idx], make_vec<T, n, idx + 1>(d, init));
    else
        return init;
}

template <class T, size_t n>
auto make_vec(const size_t (&d)[n]) noexcept
{
    return make_vec(d, T{});
}

/*
    vector<vector<ll>> graph(n);
    for (int i = 0; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

*/

int solve()
{

    // END
    return 0;
}
int main()
{
    while (true)
        solve();

    cout << "\n";
    return 0;
}
