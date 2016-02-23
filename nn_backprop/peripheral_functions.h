/*
 * class_conversion_functions.h
 *
 *  Created on: Feb 20, 2016
 *      Author: aditya
 */
#ifndef PERIPHERAL_FUNCTIONS_H_
#define PERIPHERAL_FUNCTIONS_H_

#include <iostream>
#include <Eigen/Dense>
#include "data_set.h"


using namespace std;
using namespace Eigen;


VectorXd output_to_class(MatrixXd output_matrix);
MatrixXd class_to_output(VectorXd output_vector);
void get_data(data_set_full *full_dataset);
#endif /* PERIPHERAL_FUNCTIONS_H_ */
