/// Causal Dynamical Triangulations in C++ using CGAL
///
/// Copyright (c) 2014 Adam Getchell
///
/// Inserts a given number of points into a d-dimensional sphere of
/// a given radius
/// TODO: Make the vector compatible with the triangulation data structure

#ifndef SPHERE_D_H_
#define SPHERE_D_H_

/// CGAL headers
#include <CGAL/Cartesian_d.h>
#include <CGAL/point_generators_d.h>

/// C++ headers
#include <iostream>
#include <vector>


typedef CGAL::Cartesian_d<double> Kd;
typedef Kd::Point_d Point;

void make_d_sphere(std::vector<Point> *v,
  int number_of_points,
  int dimension,
  double radius,
  bool message) {

  if (message) {
  std::cout << "Generating " << number_of_points << " random points on the "
            << "surface of a sphere in " << dimension << "D" << std::endl
            << "of center 0 and radius " << radius << std::endl;
          }

  v->reserve(number_of_points);

  CGAL::Random_points_on_sphere_d<Point> gen(dimension, radius);

  for (size_t i = 0; i < number_of_points; i++)
  {
    v->push_back(*gen++);
  }
} // make_d_sphere()


/// make_d_sphere without message
void make_d_sphere(std::vector<Point> *v,
                    int number_of_points,
                    int dimension,
                    double radius) {
  make_d_sphere(v, number_of_points, dimension, radius, false);
} // make_d_sphere

#endif  // SPHERE_D_H_