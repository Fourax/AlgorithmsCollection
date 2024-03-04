#include <iostream>
#include <vector>
#include <queue>


void BFS(const std::vector<std::vector<int>>& graph, int starting) {
    std::vector<bool> visited(graph.size(), false);
    std::queue<int> queue;
    
    visited[starting] = true;
    queue.push(starting);

    while (!queue.empty()) {
        int v = queue.front();
        queue.pop();
        std::cout << v << " ";

        for (auto i : graph[v]) {
            if (!visited[i]) {
                visited[i] = true;
                queue.push(i);
            }
        }
    }
}

int main() {
  
    std::vector<std::vector<int>> graph = {
        {1, 2},    
        {0, 3, 4}, 
        {0, 4},    
        {1, 5},    
        {1, 2},    
        {3}        
    };

    int starting = 0; 
    std::cout << "Searching the graph with BFS starting from the vertex " << starting << ": ";
    BFS(graph, starting);
    std::cout << std::endl;

    return 0;
}
