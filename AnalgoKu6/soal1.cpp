#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 20

class AdjacencyMatrix{
    private:
        int n;
        int **adj;
        bool *visited;
    
    public:
        AdjacencyMatrix(int n){
            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            for (int i=0; i<n; i++){
                adj[i] = new int [n];
                for(int j=0; j<n; j++){
                    adj[i][j] = 0;
                }
            }
        }
    
    void add_edge(int origin, int destin){
        if( origin>n || destin>n || origin<0 || destin<0){
            cout << "Invalid edge!\n";
        }
        else{
            adj[origin - 1][destin - 1] = 1;
        }
    }

    void display(){
        int i;
        int j;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cout << adj[i][j]<<"  ";
            }
            cout << endl;
        }
    }
};

int main(){
    int nodes;
    int max_edges;
    int origin;
    int destin;

    cout << "\nEnter Number of Nodes\t: "; cin >> nodes;
    
    AdjacencyMatrix am(nodes);
    max_edges = nodes * (nodes - 1);
    cout<<"\nEnter Edge (example: 1 2)\n(-1 -1 to exit)\n";
    for (int i=0; i<max_edges; i++){
        cout<<"Enter Edge\t: "; cin >> origin >> destin;
        if((origin==-1) && (destin==-1)){
            break;
        }
        am.add_edge(origin, destin);
    }
    cout << endl;
    am.display();
    return 0;
}