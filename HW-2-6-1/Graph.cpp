#include "Graph.h"

//#include "LinkedListQueue.cpp"
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

/*class Vertex {
public:
    int id;
    std::vector<int> connectedVertexes;

    Vertex() {
        this->id = 0;
        connectedVertexes.resize(0);
    }

    Vertex(int id) {
        this->id = id;
        connectedVertexes.resize();
    }

};*/

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
    /*int BfsShortestPath(UndirectedGraph graph, int start, int end) {
        LinkedListQueue queue;
        std::vector<int> distances(graph.GetSize(), 0);
        distances[start] = 0;
        std::vector<bool> visited(graph.GetSize(), false);
        visited[start] = true;

        queue.Enqueue(start);
        for (int i = 0; i < graph.GetSize(); i++) {
            if (queue.IsEmpty())
                return -1;
            int currentVertex = queue.Dequeue();

            std::vector<int> adjacentVertices = graph.vertexes[currentVertex].connectedVertexes;
            for (int neighbour: adjacentVertices) {
                if (!visited[neighbour]) {
                    distances[neighbour] = distances[currentVertex] + 1;
                    queue.Enqueue(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        return distances[end];
    }*/

    int BfsShortestPath(UndirectedGraph graph, int start, int end) {
        std::queue<int> queue;
        std::vector<int> distances(graph.GetSize(), 0);
        //std::cout << graph.GetSize()  << std::endl;
        //for (int i = 0; i < distances.size(); i++)
            //std::cout << i << " is " << distances[i] << std::endl;
        std::vector<bool> visited(graph.GetSize(), false);
        //std::cout << std::endl;
        //std::cout << visited.size();
        visited[start] = true;
        //for (int i = 0; i < visited.size(); i++)
        //std::cout << i << " is " << visited[i] << std::endl;

        queue.push(start);
        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();
            //std::cout << queue.GetFirst();
            //std::vector<int> adjacentVertices = graph.vertexes[currentVertex];
            for (int neighbour : vertexes[currentVertex]) {
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
