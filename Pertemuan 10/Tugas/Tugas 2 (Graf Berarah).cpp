#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int data;
	vector<int> neighbors;
};

void addNode(vector<Node>& graph, int data) {
	Node newNode;
	newNode.data = data;
	graph.push_back(newNode);
}

void addEdge(vector<Node>& graph, int from, int to) {
	graph[from].neighbors.push_back(to);
}

void printAdjacencyList(const vector<Node>& graph) {
	cout << " Daftar Ketetanggaan (Graf Berarah) : " << endl;
	for (size_t i = 0; i < graph.size(); ++i) {
    	cout << " Simpul " << graph[i].data << " :";
    	for (size_t j = 0; j < graph[i].neighbors.size(); ++j) {
      		cout << " -> " << graph[i].neighbors[j];
    }
    cout << endl;
	}
}

int main() {
	vector<Node> g;

	addNode(g, 0);
	addNode(g, 1);
	addNode(g, 2);
	addNode(g, 3);
	addNode(g, 4);

	addEdge(g, 0, 1);
	addEdge(g, 0, 4);
	addEdge(g, 1, 2);
	addEdge(g, 1, 3);
	addEdge(g, 1, 4);
	addEdge(g, 2, 3);
	addEdge(g, 3, 4);

	printAdjacencyList(g);

	return 0;
}
