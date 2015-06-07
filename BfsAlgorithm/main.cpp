//
//  main.cpp
//  BfsAlgorithm
//
//  Created by Anoop Varghese on 6/7/15.
//  Copyright (c) 2015 Anoop Varghese. All rights reserved.
//

#include <iostream>
#include "Graph.h"
using namespace std;

int main(int argc, const char * argv[]) {

        // Create a graph given in the above diagram
        Graph g(4);
        g.AddEdge(0, 1);
        g.AddEdge(0, 2);
        g.AddEdge(1, 2);
        g.AddEdge(2, 0);
        g.AddEdge(2, 3);
        g.AddEdge(3, 3);
        
        cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
        g.BFS(2);
        
        return 0;

}
