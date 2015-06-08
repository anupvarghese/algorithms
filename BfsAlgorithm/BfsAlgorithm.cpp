//
//  Graph.cpp
//  BfsAlgorithm
//
//  Created by Anoop Varghese on 6/7/15.
//  Copyright (c) 2015 Anoop Varghese. All rights reserved.
//

#include "BfsAlgorithm.h"

BfsAlgorithm::BfsAlgorithm(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void BfsAlgorithm::AddEdge(int v, int w)
{
    adj[v].push_back(w);
}

void BfsAlgorithm::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
    
    // Create a queue for BFS
    list<int> queue;
    
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
    
    // 'i' will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
    
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        
        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    
}


