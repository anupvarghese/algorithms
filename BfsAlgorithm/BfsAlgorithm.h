//
//  Graph.h
//  BfsAlgorithm
//
//  Created by Anoop Varghese on 6/7/15.
//  Copyright (c) 2015 Anoop Varghese. All rights reserved.
//

#ifndef BfsAlgorithm_Graph_h
#define BfsAlgorithm_Graph_h


#endif

#include<iostream>
#include<list>
using namespace std;

class BfsAlgorithm
{
    int V;
    list<int> *adj;
    
public:
    BfsAlgorithm(int V);
    void AddEdge(int v, int w);
    void BFS(int s);
};




