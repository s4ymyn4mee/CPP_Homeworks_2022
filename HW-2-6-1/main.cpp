#include "Graph.cpp"

int main() {
    UndirectedGraph graph(6);
    graph.AddEdge(0, 1);
    graph.AddEdge(0, 2);
    graph.AddEdge(2, 3);
    graph.AddEdge(1, 3);
    graph.AddEdge(1, 4);
    graph.AddEdge(2, 4);
    graph.AddEdge(3, 4);
    graph.AddEdge(4, 5);
    //graph.Print();
    std::cout << graph.BfsShortestPath(graph, 0, 5);
    return 0;
}