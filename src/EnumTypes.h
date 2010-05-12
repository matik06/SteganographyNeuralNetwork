/*
 * EnumTypes.h
 *
 *  Created on: 2009-10-29
 *      Author: matik
 */

#ifndef ENUMTYPES_H_
#define ENUMTYPES_H_

namespace KindOfNeuron
{
    enum Enum
    {
    	SIGMOIDAL_BP_NEURON,
    	SIGMOIDAL_UP_NEURON,
    	TANH_NEURON,
    	LINEAR,
    };
}

namespace OptymalizationType
{
	enum Enum
	{
		MINIMIM,
		MAXIMUM,
	};
}

namespace EvolAlgorithm
{
	enum Enum
	{
		DE,
		SOMA,
	};
}







#endif /* ENUMTYPES_H_ */
