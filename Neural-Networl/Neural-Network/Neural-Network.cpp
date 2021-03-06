#include "pch.h"
#include "vmath.h"
#include "activationFunctions.h"
#include "neuron.h"
#include <vector>
#include <iostream>

using namespace std;

vector<vector<double>> genInitWeights(int numHidden, int numInput) {
	vector<vector<double> > weights = vector<vector<double> >();
	for (int x = 0; x < numHidden; x++) {
		weights.push_back(vector<double>());
		for (int y = 0; y < numInput; y++) {
			double input = ((double)rand() / RAND_MAX) * 10;
			weights[x].push_back(input);

		}


	}
	return weights;
}


int main()
{
	neuron neuron;

	int numHidden = 10;
	int numInput = 9;
	int numOutput = 3;
	vector<vector<double>> weights = genInitWeights(numHidden, numInput);

	/*
	vector< vector<double> > weights{{-3.91,-1.77,6.66,-1.53,-3.99,-2.09,1.76,6.09,2.50},
									{-0.86,9.50,2.31,7.93,5.95,4.72,8.29,-0.48,-2.25},
									{-5.60,2.43,-6.82,-5.58,0.75,6.97,8.37,6.63,9.29},
									{-4.59,-1.74,-7.15,9.91,-2.34,-4.37,4.43,-0.31,-1.89},
									{8.33,3.17,3.03,6.52,0.01,8.22,0.66,7.52,-1.89},
									{-4.58,-7.17,-2.05,9.47,-8.95,-7.16,8.97,-6.39,9.88},
									{0.92,8.18,-7.52,4.81,0.42,-5.66,7.93,-1.71,6.41},
									{5.28,2.16,-6.08,-4.95,-1.99,5.06,6.57,-6.58,-8.45},
									{-5.55,-2.05,7.53,3.34,8.80,4.03,9.39,-1.19,3.97},
									{-7.09,-5.57,5.49,-4.96,-7.93,-1.30,5.03,-6.85,-5.76} };

	vector<double> hidden = vector<double>();
	hidden = neuron.feedforward(inputNeurons, numHidden, weights);
	for (int x = 0; x < 10; x++) cout << hidden[x] << endl;
	cout << "That's the Sum" << endl;
	vector<double> activate = vector<double>();
	activate = neuron.activate(hidden);
	for (int x = 0; x < 10; x++) cout << activate[x] << endl;
	*/

	return 0;
}
