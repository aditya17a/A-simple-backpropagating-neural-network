/*
 * peripheral_functions.cpp
 *
 *  Created on: Feb 19, 2016
 *      Author: aditya
 */
#include "peripheral_functions.h"


/*Function Description:
 * output_to_class:
 * This function takes in the output_matrix, which is in the one-hot format and
converts it into a vector with distinct classes.*/

VectorXd output_to_class(MatrixXd output_matrix){
	int num_classes = output_matrix.cols();
	int num_datapoints = output_matrix.rows();
	VectorXd output_vector(num_datapoints);

	for(int i = 0; i < num_datapoints; i++){
		VectorXd current_datapoint = output_matrix.row(i);
		for(int j=0; j < num_classes; j++){
			if(current_datapoint(j) == 1){
				output_vector(i) = j+1; break;}
		}
	}
	return output_vector;
}

/*Function Description:
 * class_to_output:
 * This function takes in the output_vector, with class assignments and
converts it into a one-hot format matrix.*/

MatrixXd class_to_output(VectorXd output_vector)
{
	int num_classes = output_vector.maxCoeff();
	int num_datapoints = output_vector.size();
	MatrixXd output_matrix = MatrixXd::Zero(num_datapoints,num_classes);

	for(int i = 0; i < num_datapoints; i++){
		double current_datapoint = output_vector(i);
		output_matrix(i,current_datapoint-1) = 1;
		}
		return output_matrix;
}

/*Function Description:
 * get_data:
 * This function takes in a full_dataset structure object and populates it wit.*/

void get_data(data_set_full *full_dataset)
{


	}
