#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > grid) {

	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors
	int height, width;
	height = grid.size();
	width = grid[0].size();

  	float prob_per_cell = 1.0 / ( height * width ) ;
  
  	// OPTIMIZATION: Is there a way to get the same results 	// without nested for loops?
	vector< vector <float> > newGrid (height, vector<float> (width, prob_per_cell));
	return newGrid;
}