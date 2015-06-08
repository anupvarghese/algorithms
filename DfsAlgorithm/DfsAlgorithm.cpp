//
//  DfsAlgorithm.cpp
//  BfsAlgorithm
//
//  Created by Anoop Varghese on 6/8/15.
//  Copyright (c) 2015 Anoop Varghese. All rights reserved.
//

#include "DfsAlgorithm.h"
#include <stack>

using namespace std;

DfsAlgorithm::DfsAlgorithm(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void DfsAlgorithm::AddEdge(int v, int w)
{
    adj[v].push_back(w);
}

void DfsAlgorithm::DFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    
    // Create a stack for DFS
    stack <int> temp_stack;
    
    // Mark the current node as visited and push it
    visited[s] = true;
    temp_stack.push(s);
    
    // 'i' will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
    
    while(!temp_stack.empty())
    {
        s = temp_stack.top();
        cout << s << " ";
        temp_stack.pop();
        // Get all adjacent vertices of the popped vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                temp_stack.push(*i);
            }
        }
    }
    
}
