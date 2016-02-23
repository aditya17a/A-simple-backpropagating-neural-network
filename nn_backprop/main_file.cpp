/*
 * main_file.cpp
 *
 *  Created on: Feb 21, 2016
 *      Author: aditya
 */
#include <iostream>
#include <Eigen/Dense>


#include "peripheral_functions.h"
#include "data_set.h"
using namespace Eigen;
using namespace std;



int main()
{
	struct data_set_full iris_data_set;
	iris_data_set.training_set.data_file_name = "iris_training.data";
	iris_data_set.validation_set.data_file_name = "iris_validation.data";
	iris_data_set.test_set.data_file_name = "iris_test.data";
	iris_data_set.input_count = 4;
	iris_data_set.output_count = 3;

	cout << iris_data_set.training_set.data_file_name << endl;
	cout << iris_data_set.test_set.data_file_name << endl;
	get_data(&iris_data_set);


	return 0;
}



