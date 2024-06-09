#include <iostream>
#include <vector>

using namespace std;

struct Edge {
	int to;
	int weight;
};

struct Node {
	int id;
	vector<Edge> edges;
};

void printAdjacencyList(vector<Node>& graph) {
	cout << " Daftar Ketetanggaan (Graf Berbobot) : " << endl;
	for (int i = 0; i < graph.size(); i++) {
    	Node& node = graph[i];
    	cout << " Simpul " << node.id << " : ";
    	for (int j = 0; j < node.edges.size(); j++) {
			Edge& edge = node.edges[j];
			cout << " -> (" << edge.to << ", " << edge.weight << ") ";
    	}
    	cout << endl;
	}
}

int main() {
	vector<Node> g(5);
	for (int i = 0; i < 5; i++) {
    	g[i].id = i;
	}

	g[0].edges.push_back({1, 10});
	g[0].edges.push_back({4, 20});

	g[1].edges.push_back({2, 30});
	g[1].edges.push_back({3, 40});
	g[1].edges.push_back({4, 50});

	g[2].edges.push_back({3, 60});

	g[3].edges.push_back({4, 70});

	printAdjacencyList(g);

	return 0;
}
