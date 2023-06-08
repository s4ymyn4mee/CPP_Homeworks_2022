#include "Graph.h"
#include "LinkedListQueue.h"


int main() {
    Vertex sourceVertex, firstVertex(1), secondVertex(2), thirdVertex(3);
    UndirectedGraph graph(4);
    graph.AddEdge(sourceVertex, firstVertex);
    graph.AddEdge(sourceVertex, secondVertex);
    graph.AddEdge(secondVertex, thirdVertex);
    graph.AddEdge(firstVertex, thirdVertex);
    std::cout << graph.BfsShortestPath(graph, 0, 3);
    return 0;
}