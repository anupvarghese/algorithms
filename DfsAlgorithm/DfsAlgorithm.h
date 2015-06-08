//
//  DfsAlgorithm.h
//  BfsAlgorithm
//
//  Created by Anoop Varghese on 6/8/15.
//  Copyright (c) 2015 Anoop Varghese. All rights reserved.
//

#ifndef __BfsAlgorithm__DfsAlgorithm__
#define __BfsAlgorithm__DfsAlgorithm__

#include <stdio.h>

#endif /* defined(__BfsAlgorithm__DfsAlgorithm__) */


#include<iostream>
#include<list>
using namespace std;

class DfsAlgorithm
{
    int V;
    list<int> *adj;
    
public:
    DfsAlgorithm(int V);
    void AddEdge(int v, int w);
    void DFS(int s);
};