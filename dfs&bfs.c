#include <stdio.h>
#define MAX 10

int adj[MAX][MAX];
int visited[MAX];
int n;  // number of vertices

void dfs(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for(int i = 0; i < n; i++) {
        if(adj[v][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    int queue[MAX], front = 0, rear = 0;

    for(int i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for(int i = 0; i < n; i++) {
            if(adj[v][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int choice, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    do {
        printf("\n--- Graph Traversal ---\n");
        printf("1. DFS\n");
        printf("2. BFS\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(int i = 0; i < n; i++)
                    visited[i] = 0;
                printf("Enter starting vertex: ");
                scanf("%d", &start);
                printf("DFS: ");
                dfs(start);
                printf("\n");
                break;

            case 2:
                printf("Enter starting vertex: ");
                scanf("%d", &start);
                printf("BFS: ");
                bfs(start);
                printf("\n");
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}
