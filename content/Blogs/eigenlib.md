---
title: The Eigen Library
---

## Introduction

Eigen is a C++ template library for linear algebra: matrices, vectors, numerical solvers, and related algorithms.

## Installation

My system is `Linux pop-os` so all I did was

```sh
git clone https://gitlab.com/libeigen/eigen.git
```
and then copied the [Eigen folder](https://gitlab.com/libeigen/eigen/-/tree/master/Eigen) to `/usr/local/include` so I could include the headers without having to explicitly pass a `-I` option to `g++`.

## Basic Matrix operations

To get the full source code, visit [1.cpp](https://github.com/DhruvaG2000/Blog/extras/1.cpp).<br>

### Matrix Declaration

You can use
```
Eigen::MatrixXd m(3,3);
```
for Matrix declaration of specifyied size, in this case 3 by 3.

and for smaller matrices upto the size of 4 by 4, you can simple use
```
Eigen::Matrix3d a;
```
where instead of 3 you can use 1,2 or 4 as well depending on the requirement.

### Basic Operations

- For Martix Addition, Subtraction you can just use `+` or `-` as you would with any other data type like `float` or `int`.<br>
In our case, the program output looks like:
```
Addition of two matrices: a + (inverse a)
 24.0595 -3.97619 -3.91667
-3.97619  24.0595 -3.91667
-3.91667 -3.91667  4.41667
```

- For finding the inverse of a matrix, simply use
```
m << a.inverse();
```

## References

- [Official Eigen Website Docs](https://eigen.tuxfamily.org/dox/GettingStarted.html)
