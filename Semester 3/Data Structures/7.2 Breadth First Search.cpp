/* 2] b. Breadth First Search (BFS):
Application:Indexing web pages for search engines.
Example: A web crawler uses BFS to visit web pages systematically, starting from a seed URL and exploring links level by level. Nodes represent web pages. Edges represent hyperlinks. BFS ensures that pages at the same "depth" (distance from the starting page) are visited before moving to deeper levels. Write a program to simulate the indexing of web pages for a search engine using a Breadth-First Search (BFS) algorithm. */
#include <iostream>
using namespace std;
void BFS(int start, int total, bool visited[], int** links) {
    int queue[50];  
    int front = 0, rear = 0;
    visited[start] = true;
    queue[rear++] = start;
    while (front < rear) {
        int current = queue[front++];
        cout << "Visited Webpage: " << current + 1 << endl;

        for (int i = 0; i < total; i++) {
            if (links[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue[rear++] = i;
            }
        }
    }
}
int main() {
    int totalPages;
    cout << "Enter Number of Web pages: ";
    cin >> totalPages;
    bool* visited = new bool[totalPages];
    int** links = new int*[totalPages];
    for (int i = 0; i < totalPages; i++) {
        links[i] = new int[totalPages];
    }
    for (int i = 0; i < totalPages; i++) {
        for (int j = 0; j < totalPages; j++) {
            links[i][j] = 0;
        }
    }
    for (int i = 0; i < totalPages; i++) {
        visited[i] = false;
    }
    for (int i = 0; i < totalPages; i++) {
        for (int j = i + 1; j < totalPages; j++) {
            int connected = 0;
            cout << "Is there a hyperlink between webpage " << i + 1
                 << " and " << j + 1 << "? (1 = Yes, 0 = No): ";
            cin >> connected;
            if (connected == 1) {
                links[i][j] = connected;
                links[j][i] = connected;
            }
        }
        cout << endl;
    }
    cout << "\nAdjacency Matrix (Connection Map):\n";
    for (int i = 0; i < totalPages; i++) {
        for (int j = 0; j < totalPages; j++) {
            cout << links[i][j] << " "; }
        cout << endl; }
    cout << "\nStarting BFS traversal from webpage 1...\n";
    BFS(0, totalPages, visited, links);
    cout << "\nBFS traversal complete.\n";

    return 0;
}
