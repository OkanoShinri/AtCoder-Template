
#include <bits/stdc++.h>
using namespace std;

vector<int> topological_sort(vector<vector<int>> &graph, vector<int> &inter)
{
    vector<int> answer;
    queue<int> stacks;

    // 入次数0の頂点
    for (int i = 0; i < graph.size(); i++)
    {
        if (inter[i] == 0)
        {
            stacks.push(i);
        }
    }

    while (!stacks.empty())
    {

        int top_v = stacks.front();
        stacks.pop();
        answer.push_back(top_v);

        for (int i = 0; i < graph[top_v].size(); i++)
        {
            int u = graph[top_v][i];
            inter[u]--;
            if (inter[u] == 0)
            {
                stacks.push(u);
            }
        }
    }
    return answer;
}
