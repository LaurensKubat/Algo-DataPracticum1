#include <vector>
#include <iostream>
#include "graph.h"

using namespace std;

/*
parseInput reads the input up until the edges of the graph are read
and then uses parseGraph to parse the rest of the graph based on the edges
*/
Graph parseInput() {
    int nodes = 0;
    int edges = 0;
    int infected = 0;
    double p = 0;
    int lowerBound = 0;
    int upperBound = 0;
    Graph g;

    cin >> nodes;
    cin >> edges;
    cin >> infected;
    cin >> p;
    cin >> lowerBound >> upperBound;
    g = readGraph();

    return g
}

/*
readGraph reads the graph and stores it based on the input of the edges
*/
// TODO implement readGraph
Graph readGraph() {

}

/* 
test takes a vector of ints (where the int is the id of the vertex)
and outputs it to test the group and returns True if any of the
members of the group is true
*/
bool test(vector<int> group) {
    int size = group.size();
    string answer = "";

    cout << "test ";
    for (int i = 0; i < size; i++) {
        cout << group[i] << " ";
    }
    cout << "\n";
    cin >> answer;
    if (answer.find("true")) {
        return true;
    }
    return false;
}

/*
confirm takes a group of positive tested people and verifies it with the assignment
input and returns true the group is correct and false if it is not correct
*/
bool verifies(vector<int> group) {
    int size = group.size();
    string answer = "";

    cout << "answer";
    for (int i = 0; i < size; i++) {
        cout << group[i] << " ";
    }
    cout << "\n";
    cin >> answer;
    if (answer.find("succes")) {
        return true;
    }
    return false;
}