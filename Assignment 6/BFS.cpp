#include <iostream>  
#include <vector>  
#include <queue>  
using namespace std;  

vector<int> bfs(const vector<vector<int>>& adj_list, int start, int target = -1)  
{  
    int n = adj_list.size();  
    vector<bool> visited(n, false);
    vector<int> order; 
  
    queue<int> q;  
    q.push(start); 
    visited[start] = true; 
    while (!q.empty())  
    {  
        int u = q.front(); 
        q.pop();  
  
        order.push_back(u);  
   
        for (int v : adj_list[u])  
        {  
            if (!visited[v])  
            {  
                q.push(v);  
                visited[v] = true;  
            }  
        }  
    }  
    if (target != -1 && !visited[target])  
    {  
      
        return {};  
    }  
    return order;  
}  
int main()  
{  
  
    vector<vector<int>> adj_list = {  
        {1, 2},  
        {0, 3, 4}, 
        {0, 4}, 
        {1, 4},  
        {1, 2, 3} 
    };  

    vector<int> order = bfs(adj_list, 0);  
  
    cout << "BFS traversal order: ";  
    for (int i : order)  
    {  
        cout << i << " ";  
    }  
    cout << endl;  
  
    return 0;  
}  
