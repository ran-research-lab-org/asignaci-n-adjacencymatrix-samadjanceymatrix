#include "Graph.hpp"

using namespace std;

int main() {
    Graph G(5);
    G.addEdge(0,1); G.addEdge(2,1); G.addEdge(3,4); G.addEdge(4,1);
    G.print();
    cout << "\nThe number of edges is: " << G.numEdges() << "\nThe degree of 1 is: " << G.inDegree(1) << "\nIs 1 influencer?: " << (G.isInfluencer(1) ? "yes\n" : "no\n") << endl;
}