#include "Graph.cpp"

int main() {
    DirectedGraph graph(6);
    graph.AddEdge(0, 1);
    graph.AddEdge(0, 2);
    graph.AddEdge(2, 3);
    graph.AddEdge(1, 3);
    graph.AddEdge(3, 0);
    //graph.AddEdge(3, 0);
    //graph.AddEdge(2, 4);
    //graph.AddEdge(3, 4);
    //graph.AddEdge(4, 5);
    //graph.Print();
    graph.FindCycle(graph);
    return 0;
}
