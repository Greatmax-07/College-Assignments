/*1] Depth First Search (DFS):
Application: Web crawlers use DFS to explore web pages systematically, following links and indexing content for search engines. Write a simple program to index web pages using Depth First Search (DFS). The program should simulate a web graph where pages are represented as nodes and hyperlinks as edges.*/
#include <iostream>
using namespace std;
void DFS(int current, int total, bool visited[], int** links) {
    visited[current] = 1;
    cout << "Visiting webpage " << current + 1 << endl;
    for (int i = 0; i < total; i++) {
        if (links[current][i] == 1 && !visited[i]) {
            DFS(i, total, visited, links);
        };
    };
};
int main() {
    int totalPages;
    cout << "Enter the number of webpages: ";
    cin >> totalPages;
    bool* visited = new bool[totalPages];
    int** links = new int*[totalPages];
    for (int i = 0; i < totalPages; i++) {
        links[i] = new int[totalPages];
    };
    for (int i = 0; i < totalPages; i++) {
        for (int j = 0; j < totalPages; j++) {
            links[i][j] = 0;
        };
    };
    for (int i = 0; i < totalPages; i++) {
        for (int j = i + 1; j < totalPages; j++) {
            int connection = 0;
            cout << "Is there a hyperlink between webpage " << i + 1
                 << " and " << j + 1 << "? (1 = Yes, 0 = No): ";
            cin >> connection;
            if (connection == 1) {
                links[i][j] = connection;
                links[j][i] = connection;
            }
        };
        cout << endl;
    };
    cout << "\nAdjacency Matrix (Connection Map):\n";
    for (int i = 0; i < totalPages; i++) {
        for (int j = 0; j < totalPages; j++) {
            cout << links[i][j] << " ";
        };
        cout << endl;
    };
    for (int i = 0; i < totalPages; i++) {
        visited[i] = 0;
    };
    cout << "\nStarting DFS traversal from webpage 1...\n";
    DFS(0, totalPages, visited, links);
    cout << "\nDFS traversal complete.\n";
    return 0;
};
