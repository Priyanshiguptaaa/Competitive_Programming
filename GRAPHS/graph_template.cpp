#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph
{
public:
    unordered_map<T,list<T>> adj; //adjacency list
    Graph(){
    } //constructor
    void add_edge(T n1, T n2,bool bidir = true)
    {
        adj[n1].push_back(n2);
        if(bidir)
        {
            adj[n2].push_back(n1);
        }
    }

    void print()
    {
        for(auto row: this->adj)
        {
            cout<<row.first<<"-->";
            for(T el:row.second)
            {
                cout<<el<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph<int> g;
    g.add_edge(1,2);
    g.add_edge(3,2);
    g.add_edge(4,2);
    g.add_edge(1,4);
    g.add_edge(1,3);
    g.print();
    return 0;
}
