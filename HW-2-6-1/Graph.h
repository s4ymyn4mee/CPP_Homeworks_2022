#pragma once

#include "LinkedListQueue.h"
#include <vector>

class Vertex {
public:
    int id;
    std::vector<int> connectedVertexes;

    Vertex() {
        this->id = 0;
    }

    Vertex(int id) {
        this->id = id;
    }

};

class UndirectedGraph {
private:
    int size;

public:
    std::vector<Vertex> vertexes;

    UndirectedGraph(int amountOfVertexes) {
        this->size = amountOfVertexes;
        vertexes.resize(amountOfVertexes);
    }

    ~UndirectedGraph() {
        vertexes.clear();
    }

    int GetSize() const {
        return size;
    }

    void AddEdge(const Vertex &sourceVertex, const Vertex &destinedVertex) {
        int idSource = sourceVertex.id;
        int idDestined = destinedVertex.id;
        vertexes[idSource].connectedVertexes.push_back(idDestined);
        vertexes[idDestined].connectedVertexes.push_back(idSource);
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
        LinkedListQueue queue;
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

        queue.Enqueue(start);
        while (!queue.IsEmpty()) {
            int currentVertex = queue.Dequeue();
            //std::cout << queue.GetFirst();
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
    }
};


