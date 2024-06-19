#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph{
		int jumlahSimpul;
		vector<vector<int> > adjasi;
	public:
		Graph(int simpul);
		void tambahTepi(int src, int dest);
		void display();
};

Graph::Graph(int simpul){
		jumlahSimpul = simpul;
		adjasi.resize(simpul);
}

void Graph::tambahTepi(int src, int dest){
	adjasi[src].push_back(dest);
	adjasi[dest].push_back(src);
	
}
		
void Graph::display(){
	for(int i = 0; i < jumlahSimpul; ++i){
		cout << " Simpul " << i << " : ";
		for(size_t j = 0; j < adjasi[i].size(); ++j){
			cout<<adjasi[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main () {
	queue<pair<int,int> >edges;
	Graph graph(5);
	graph.tambahTepi(0, 1);
	graph.tambahTepi(0, 4);
	graph.tambahTepi(1, 2);
	graph.tambahTepi(1, 3);
	graph.tambahTepi(1, 4);
	graph.tambahTepi(2, 3);
	graph.tambahTepi(3, 4);

while(!edges.empty()){
	pair<int, int>edge = edges.front();
	graph.tambahTepi(edge.first, edge.second);
	edges.pop();		
}
	cout << " Graf Dengan Daftar Adjasi : "<<endl;
	graph.display();
}
