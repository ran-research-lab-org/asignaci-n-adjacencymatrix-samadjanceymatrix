#include "Graph.hpp"

using namespace std;

int main() {
    Graph G(5);
    G.addEdge(0,1); G.addEdge(2,1); G.addEdge(3,4); G.addEdge(4,1);
    G.print();
    cout << G.numEdges() << " " << G.inDegree(1) << " " << (G.isInfluencer(1) ? "yes" : "no") << endl;
}