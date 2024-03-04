#include <iostream>
#include <vector>
#include <stack>

void DFS(const std::vector<std::vector<int>>& graph, int starting) {
    std::vector<bool> visited(graph.size(), false);
    std::stack<int> stack;

    stack.push(starting);

    while (!stack.empty()) {
        int v = stack.top();
        stack.pop();

        if (!visited[v]) {
            visited[v] = true;
            std::cout << v << " ";

        
            for (auto i = graph[v].rbegin(); i != graph[v].rend(); ++i) {
                if (!visited[*i]) {
                    stack.push(*i);
                }
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
    std::cout << "Searching the graph with DFS starting from the vertex " << starting << ": ";
    DFS(graph, starting);
    std::cout << std::endl;

    return 0;
}
