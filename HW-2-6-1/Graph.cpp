#include "Graph.h"

#include <vector>
#include <queue>
#include <iostream>

using namespace std;

class UndirectedGraph {
private:
    int size;
    std::vector<std::vector<int>> vertexes;

public:

    UndirectedGraph() {
        this->size = 0;
        vertexes.resize(0);
    }

    UndirectedGraph(int amountOfVertexes) {
        this->size = amountOfVertexes;
        vertexes.resize(amountOfVertexes);
    }

    ~UndirectedGraph() {
        for (int i = 0; i < size; i++)
            vertexes[i].clear();
        vertexes.clear();
    }

    int GetSize() const {
        return size;
    }

    void AddEdge(int sourceVertex, int destinedVertex) {
        vertexes[sourceVertex].push_back(destinedVertex);
        vertexes[destinedVertex].push_back(sourceVertex);
    }

    void Print() const {
        for (int i = 0; i < vertexes.size(); i++) {
            for (int j = 0; j < vertexes[i].size(); j++)
                cout << vertexes[i][j] << " ";
            cout << endl;
        }
    }

    int BfsShortestPath(UndirectedGraph graph, int start, int end) {
        std::queue<int> queue;
        std::vector<int> distances(graph.GetSize(), 0);
        std::vector<bool> visited(graph.GetSize(), false);
        visited[start] = true;

        queue.push(start);
        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();
            std::vector<int> adjacentVertices = graph.vertexes[currentVertex];
            for (int neighbour : adjacentVertices) {
                if (!visited[neighbour]) {
                    distances[neighbour] = distances[currentVertex] + 1;
                    queue.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        return distances[end];
    }
};
