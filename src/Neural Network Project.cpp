//============================================================================
// Name        : Neural.cpp
// Author      : Mateusz Lubańśki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "EnumTypes.h"
#include "neuralNetwork/NeuralNetwork.h"
#include "trainingAlgorithms/Individual.h"
#include "trainingAlgorithms/EvolutionaryAlgorithm.h"
#include "trainingAlgorithms/SOMA.h"
#include "trainingAlgorithms/DifferentialEvolution.h"

using namespace std;

void print(int * tab);
void print(double * tab);

int main() {

//	srand((int)time(null));
//
//	int * tab = new int[3];
//	tab[0] = 5; tab[1] = 4; tab[2] = 3;//{5, 4, 3};
//	double input[] = {0.1, 0.2, 0.3, 0.4};
//	double alfaibeta[] = {0.1, 0.5, 0.5};
//	KindOfNeuron::Enum neuronsType[] = {KindOfNeuron::SIGMOIDAL_BP_NEURON,
//										KindOfNeuron::SIGMOIDAL_BP_NEURON,
//										KindOfNeuron::SIGMOIDAL_BP_NEURON};
//
//	NeuralNetwork * network =  new NeuralNetwork(3, tab, 4, neuronsType, alfaibeta, alfaibeta);
//	double * patterns = new double[3];//{0.8, 0.7, 0.01};
//	patterns[0] = 0.8; patterns[1] = 0.7; patterns[2] = 0.01;
//	//network->setPatterns(patterns);
//
//	Individual::setBegin(0);
//	Individual::setEnd(1);
//
//	EvolutionaryAlgorithm * eAlg = new DifferentialEvolution(0.8, 0.5, 5, 20);
//	EvolutionaryAlgorithm * eAlg = new SOMA(0.3, 3.0, 0.4, -1, 200, 10);
//
//	Individual ind = eAlg->simulate(OptymalizationType::MINIMIM, *network, input);
//	ind.indPrint();
//
//	double * tabb = eAlg->getCostValueHistory();
//
//	cout << endl;
//	for(int i = 0; i < 200; i++)
//	{
//		cout << tabb[i] << endl;
//	}
//
//	delete network;
//	delete eAlg;

	cout << "nothing at all :)" << endl;
	return 0;
}

