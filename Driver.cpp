#include <iostream>
#include "Graph.h"
using namespace std;

int main() {

	Graph g("State", "Number of Johns");
	   
	g.addItem("TN", 4);
	g.addItem("CT", 10);
	g.addItem("MA", 7);
	g.addItem("NY", 9); 
	
	cout<<"Number of Johns in the directory ordered by State: "<<endl;
	g.display();

	g.initializeGraph();
	g.generateGraph();

	return 0;
}