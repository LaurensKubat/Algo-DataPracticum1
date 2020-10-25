// Testing Groups For COVID-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <list>
using namespace std;
enum colors {white,gray,black};
struct vertex {
    int label;
    int d;
    int pi;
    colors color;
};
struct graph {
    vector <vertex> V;
};
void show_graph(vector <vector <int>> g) {
    int n = g.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cout << g[i][j] << ' ';
        }
        cout << '\n';
    }
}

string color_out(colors c) {
    if (c == white)
        return "white";
    else if (c == gray)
        return "gray";
    else if (c == black)
        return "black";
    else
        return "no color!";
}

void detect_a_clique(vector<vector<int>> G) {
    cout << "welcome";
}

// BFS using Matrices
void BFS(vector <vector <int>> G , int s) {
    int n = G.size();
    queue<int> Q;
    vector <vertex> Vertices;
    for (int i = 0; i < n; i++) {    
         vertex v;
         v.label = i;
         v.color = white;
         v.d = -1;
         v.pi = -1;
         Vertices.push_back(v);
        }
    Vertices[s].color = gray;
    Vertices[s].d = 0;
    Vertices[s].pi = -1;
    Q.push(s);
    while (!Q.empty()) {
        int u = Vertices[Q.front()].label;
        Q.pop();
        for (int j = 0; j < n; j++) {
            if ((G[u][j] != 0) && (Vertices[j].color == white)) {
                Vertices[j].color = gray;
                Vertices[j].d = Vertices[u].d + 1;
                Vertices[j].pi = u;
                Q.push(j);
            }
        }
        Vertices[u].color = black;
    }
    for (int i = 0; i < n; i++) {
        cout << 'V' << Vertices[i].label << ' ' << Vertices[i].d << ' '<< color_out(Vertices[i].color)<<" V"<< Vertices[i].pi<<'\n';
    }
}


void initalize_adjacency_list(vector <list <int>> adj, int n) {
    adj.resize(n);
}
void add_edge(vector <list <int>> adj, int u, int v) {
    adj[u].push_back(v);
}

void show_adj_list(vector <list <int>> adj) {
    int n = adj.size();
    for (int i = 0; i < n; i++) {
        cout << 'V' << i << " --> ";
        int m = adj[i].size();
        for (int j = 0; j < m; j++) {
            cout << j << ' ,';
        }
        cout << '\n';
    }
}


int main()
{

    vector <list <int>> adj;
    vector <vector <int>> G;
    int problemsNo;
    int n, m, infections;
    int l, u;
    float p;
    cin >> problemsNo;
    while (problemsNo > 0) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            vector <int> row;
            for (int j = 0; j < n; j++) {

                row.push_back(0);
            }
            G.push_back(row);
        }
        initalize_adjacency_list(adj,n);
        cin >> m;
        cin >> infections;
        cin >> p;
        cin >> l >> u;
        for (int i = 0; i < m; i++) {
            int s, t;
            cin >> s >> t;
            G[s][t] = 1;
            G[t][s] = 1;
            add_edge(adj, s, t);
        }
        problemsNo--;
    }
 //     BFS(G, 0);
    show_adj_list(adj);
    
    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
