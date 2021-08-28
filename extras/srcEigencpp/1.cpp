/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description: Demo Program for Eigen C++
 *    Library.
 *
 *    Version:  1.0
 *        Created:  08/28/2021 03:09:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */

#include <iostream>
#include <Eigen/Dense>

int main()
{
	Eigen::MatrixXd m(3,3);
	Eigen::Matrix3d a;
	a << 24, -4, -4,
	  	 -4, 24, -4,
		 -4, -4,  4;
  m << a.inverse();
  std::cout << "Matrix a = \n" << a << std::endl;
  std::cout << "Addition of two matrices: a + (inverse a)\n" << a+m << std::endl;
  std::cout << "And product is:\n" << a*m << std::endl;
  std::cout << "The Determinant of a is:\n" << a.determinant() << std::endl;
  return 0;
}

