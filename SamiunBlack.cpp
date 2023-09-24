
// // 1
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         int n;
//         cin >> n;

//         int h[n];

//         int mx = INT_MIN;
//         int sm = INT_MIN;
//         int mi = -1;
//         int si = -1;

//         for(int i = 0; i < n; i++)
//         {
//             cin >> h[i];
//             if(h[i] > mx)
//             {
//                 mx = h[i];
//                 mi = i;
//             }
//         }

//         for(int i = 0; i < n; i++)
//         {
//             if(h[i] > sm && h[i] != mx)
//             {
//                 sm = h[i];
//                 si = i;
//             }
//         }

//         int l = mi, r = si;

//         if(l <= r)
//         {
//             cout << l << " " << r << endl;
//         }
//         else
//         {
//             cout << r << " " << l << endl;
//         }
//     }   
// }







// //2
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string w1, w2;

//     while(cin >> w1 >> w2)
//     {
//         int i = 0;
//         int j = 0;

//         while(i < w1.size() && j < w2.size())
//         {
//             if(w1[i] == w2[j])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }

//         if(j == w2.size()) cout << "Possible" << endl;
//         else cout << "Impossible" << endl;
//     }
// }















// // 3
// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         priority_queue<int> pq;
        
//         string str;

//         for(int i = 0; i < s.size(); i++)
//         {
//             if(s[i] == '1')
//             {
//                 if(i + 1 < s.size() && s[i + 1] == '1')
//                 str.push_back(s[i]);

//                 else if(i + 1 < s.size() && s[i + 1] == '0')
//                 {
//                    str.push_back(s[i]); 
//                    pq.push(str.size());
//                    str = "";
//                 }
//                 else
//                 {
//                     str.push_back(s[i]);
//                     pq.push(str.size());
//                     str = "";
//                 }
                
//             }
//             else
//             {
//                 str = "";
//             }
            
//         }
//         if(str.size()) 
//         {
//             pq.push(str.size());
//         }

//         int z = 0;
//         int k = 0;

//         while(!pq.empty())
//         {
//             z += pq.top();
//             pq.pop();
//             if(!pq.empty()) pq.pop();
//         }

//         cout << z << endl;
//     }
// }














// // 4
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++)
//     {
//         cout << i;
//     }

//     cout << endl;

//     for(int i = 2; i <= n - 1; i++)
//     {
//         cout << i;
//         for(int j = 0; j < n - 2; j++)
//         {
//             cout << " ";
//         }

//         cout << n;
//         cout << endl;
//     }

//     if(n != 1)
//     {
//         for(int i = 0; i < n; i++)
//         {
//             cout << n;
//         }
//     }
    
// }











// // 5
// #include <bits/stdc++.h>
// #define pii pair<int, int>
// using namespace std;


// const int N = 1e5 + 5;
// vector<pii> v[N];
// bool vis[N];


// class Edge
// {
//     public:
//         int a, b, w;
//         Edge(int a, int b, int w)
//         {
//             this->a = a;
//             this->b = b;
//             this->w = w;
//         }
// };

// class cmp
// {
//     public:
//         bool operator()(Edge a, Edge b)
//         {
//             return a.w > b.w;
//         }
// };


// void prims(int s, int n, int e)
// {
//     priority_queue<Edge, vector<Edge>, cmp> pq;
//     vector<Edge> edgeList;

//     pq.push(Edge(s, s, 0));
//     int cnt = 0;

//     while (!pq.empty())
//     {
//         Edge parent = pq.top();
//         pq.pop();


//         int a = parent.a;
//         int b = parent.b;
//         int w = parent.w;


//         if (vis[b]) continue;

//         vis[b] = true;
//         cnt++;

//         edgeList.push_back(parent);


//         for (int i = 0; i < v[b].size(); i++)
//         {
//             pii child = v[b][i];
//             if (!vis[child.first]) pq.push(Edge(b, child.first, child.second));
//         }
//     }


//     edgeList.erase(edgeList.begin());
//     long long sum = 0;


//     for (Edge val : edgeList)
//     {
//         sum += (long long)(val.w);
//     }


//     if (cnt == n)
//     {
//         cout << e - (n - 1)  << " " << sum << endl;
//     }
//     else
//     {
//         cout << "Not Possible" << endl;
//     }
// }


// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     for(int i = 0; i < e; i++)
//     {
//         int a, b, w;
//         cin >> a >> b >> w;
        
//         v[a].push_back({b, w});
//         v[b].push_back({a, w});
//     }


//     prims(1, n, e);
// }













// // 6
// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 5;

// vector<int> adj[N];
// int visited[N];

// void solve(int k, int s, vector<int>& g)
// {
//     for(int i = 0; i < N; i++)
//     {
//         visited[i] = 0;
//     }

//     g.push_back(s);

//     if(k >= 1)
//     {
//         for(int i = 0; i < adj[s].size(); i++)
//         {
//             if(visited[adj[s][i]] != 1) 
//             {
//                 g.push_back(adj[s][i]);
//                 visited[adj[s][i]] = 1;
//             }

//             for(int j = 1; j < k; j++)
//             {
//                 for(int v : adj[adj[s][i]])
//                 {
//                     if(visited[v] != 1)
//                     {
//                         visited[v] = 1;
//                         g.push_back(v);
//                     }
//                 }
//             }
//         }
//     }
    
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     for(int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int r, j, k;
//     cin >> r >> j >> k;
    
//     vector<int> rv;
//     vector<int> jv;

//     solve(k, r, rv);
//     solve(k, j, jv);

//     for(int i = 0; i < rv.size(); i++)
//     {
//         for(int j = 0; j < jv.size(); j++)
//         {
//             if(rv[i] == jv[j])
//             {
//                 cout << "YES";
//                 return 0;
//             }
//         }
//     }

//     cout << "NO";
// }











// // 7
// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e9 + 7;

// int solve(int n, int d, vector<int>& a) {
//     int s = 0;

//     for (int i = 0; i < n; i++) {
//         s += a[i];
//     }

//     if(d > s || (d + s) % 2 != 0) return 0;

//     s = (s + d) / 2;
//     int dp[n + 1][s + 1] = {0};

//     for(int i = 0; i <= n; i++)
//     {
//         for(int j = 0; j <= s; j++)
//         {
//             dp[i][j] = 0;
//         }
//     }

//     dp[0][0] = 1;

//     for (int i = 1; i <= n; i++) 
//     {
//         for (int j = 0; j <= s; j++) 
//         {
//             dp[i][j] = dp[i - 1][j];
//             if (a[i - 1] <= j) dp[i][j] = (dp[i][j] + dp[i - 1][j - a[i - 1]]) % N;
//         }
//     }

//     return dp[n][s];
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, d;
//         cin >> n >> d;

//         vector<int> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         cout << solve(n, d, a) << endl;
//     }
// }



// // 8
// #include <bits/stdc++.h>
// using namespace std;

// int mn = INT_MAX;

// void subsolve(int arr[], int n, int k, int i, vector<int>& sub, int ms) {

//     if (sub.size() == k) {
//         int sum = 0;

//         for (int num : sub) {
//             sum += num;
//         }

//         int s2 = ms - sum;
        
//         mn = min(mn, abs(sum - s2));
        
//         return;
//     }

//     if (i >= n || sub.size() + (n - i) < k) return;

//     sub.push_back(arr[i]);
//     subsolve(arr, n, k, i + 1, sub, ms);

//     sub.pop_back();
//     subsolve(arr, n, k, i + 1, sub, ms);
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];
//         int ms = 0;

//         for(int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             ms += a[i];
//         }

//         int f = n / 2;
//         vector<int> v;

//         mn = INT_MAX;
        
//         subsolve(a, n, f, 0, v, ms);
        
//         cout << mn << endl;
//     }
// }