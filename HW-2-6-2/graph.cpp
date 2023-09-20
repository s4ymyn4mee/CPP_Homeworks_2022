#include "Graph.h"

#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class DirectedGraph {
private:
    int size;
    std::vector<std::vector<int>> vertexes;
    std::vector<bool> visited;
    std::vector<int> parents;
public:

    DirectedGraph() {
        this->size = 0;
        vertexes.resize(0);
    }

    DirectedGraph(int amountOfVertexes) {
        this->size = amountOfVertexes;
        vertexes.resize(amountOfVertexes);
    }

    ~DirectedGraph() {
        for (int i = 0; i < size; i++)
            vertexes[i].clear();
        vertexes.clear();
    }

    int GetSize() const {
        return size;
    }

    void AddEdge(int sourceVertex, int destinedVertex) {
        vertexes[sourceVertex].push_back(destinedVertex);
    }

    void Print() const {
        for (int i = 0; i < vertexes.size(); i++) {
            for (int j = 0; j < vertexes[i].size(); j++)
                cout << vertexes[i][j] << " ";
            cout << endl;
        }
    }

    /*void DfsCycle(DirectedGraph graph) {
        std::stack<int> stack;
        std::vector<bool> visited(graph.GetSize(), false);
        visited[0] = true;

        stack.push(0);
        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();

            std::vector<int> cycle;
            cycle.push_back(currentVertex);
            std::cout << currentVertex << endl;
            std::vector<int> adjacentVertices = graph.vertexes[currentVertex];
            for (int neighbour : adjacentVertices) {
                if (!visited[neighbour]) {
                    stack.push(neighbour);
                    cycle.push_back(neighbour);
                    std::cout << neighbour << endl;
                    visited[neighbour] = true;
                }
                else {
                    cycle.push_back(neighbour);
                    std::cout << neighbour << endl;
                    for (int i : cycle)
                        std::cout << cycle[i] << " ";
                    std::cout << endl;
                    return;
                }
            }
            cycle.clear();
            cout << "stop \n";
        }
        cout << "No cycle found \n";
    }*/


    void DfsCycle(DirectedGraph graph, int currentVertex, int &cycleStart, int &cycleEnd) {
        graph.visited[currentVertex] = true;
        for (int i = 0; i < graph.vertexes[currentVertex].size(); i++) {
            int to = graph.vertexes[currentVertex][i];
            if (!graph.visited[to]) {
                graph.parents[to] = currentVertex;
                DfsCycle(graph, to, cycleStart, cycleEnd);
            } else if (graph.parents[currentVertex] != to) {
                cycleEnd = currentVertex;
                cycleStart = to;
            }
        }
    }

    void FindCycle(DirectedGraph graph) {
        int cycleStart = -1, cycleEnd = -1;
        for (int currentVertex = 0; currentVertex < graph.size; currentVertex++) {
            if (!graph.visited[currentVertex] && cycleStart == -1) {
                graph.parents[currentVertex] = -1;
                DfsCycle(graph, currentVertex, cycleStart, cycleEnd);
            }
        }

        if (cycleStart == -1)
            cout << "No cycle found" << endl;
        else {
            vector<int> cycle;
            cycle.push_back(cycleStart);
            for (int currentVertex = cycleEnd;
                 currentVertex != cycleStart; currentVertex = graph.parents[currentVertex]) {
                cycle.push_back(currentVertex);
            }
            cycle.push_back(cycleStart);
            cout << "Cycle found: ";
            for (int i = 0; i < cycle.size(); i++) {
                cout << cycle[i] << " ";
            }
            cout << endl;
        }
    }
};

