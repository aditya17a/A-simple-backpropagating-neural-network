/*
 * data_set.h
 *
 *  Created on: Feb 23, 2016
 *      Author: aditya
 */

#ifndef DATA_SET_H_
#define DATA_SET_H_
#include <iostream>
#include <Eigen/Dense>


using namespace std;
using namespace Eigen;
struct data_set_partitioned{
	MatrixXd inputs, outputs;
	string data_file_name;
};

struct data_set_full{
	data_set_partitioned training_set, validation_set, test_set;
	int input_count;
	int output_count;
};



#endif /* DATA_SET_H_ */
