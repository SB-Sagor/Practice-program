#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
bool visited[MAX];
vector<int> edges[MAX];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        // int node = q.front();
        // q.pop();
        // cout << node << " ";
  
        cout << q.front() << " ";
        for (auto it : edges[q.front()])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
           q.pop();

    }
}
int main()
{
         int n,s,e,d;
   cout<<"Enter the number of nodes = ";
   cin>>n;

   for(int i=1;i<=n;i++){
       cout<<"Degree of node "<<i<<" = ";
       cin>>d;
       for(int j=1;j<=d;j++){
           cout<<"Edges connected with "<<i<<" = ";
           cin>>e;
           edges[i].push_back(e);
       }
   }
    cout<<"Starting node = ";
   cin>>s;

   cout<<"The result of BFS is: ";
   bfs(s);

   for(int i=1; i<=n;i++){
       if(!visited[i]){
           bfs(i);
       }
   }

    return 0;
}
