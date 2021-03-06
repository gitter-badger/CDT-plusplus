/// Causal Dynamical Triangulations in C++ using CGAL
///
/// Copyright (c) 2015 Adam Getchell
///
/// Performs the Metropolis-Hastings algorithm on the foliated Delaunay
/// triangulations.
/// For details see:
/// M. Creutz, and B. Freedman. “A Statistical Approach to Quantum Mechanics.”
/// Annals of Physics 132 (1981): 427–62.
/// http://thy.phy.bnl.gov/~creutz/mypubs/pub044.pdf

/// \todo Perfect forwarding constructor
/// \todo Initialization
/// \todo Implement 3D Metropolis algorithm
/// \todo Implement concurrency

/// @file MetropolisManager.h
/// @brief Perform Metropolis-Hasting algorithm on Delaunay Triangulations
/// @author Adam Getchell
/// @bug <a href="http://clang-analyzer.llvm.org/scan-build.html">
/// scan-build</a>: No bugs found.

#ifndef SRC_METROPOLISMANAGER_H_
#define SRC_METROPOLISMANAGER_H_

// CDT headers
#include "S3Triangulation.h"

class Metropolis {
 public:
  Metropolis(Delaunay* const D3, int passes) {
       passes_ = passes;
       // Sphere_ = D3;
  }

    // Metropolis3 (int&& passes) :
    //   passes_{std::forward(passes)}
    //   {}

    // void get_passes() {
    //   std::cout << "Passes = " << passes_ << std::endl;
    // }
  int get_passes() {
    return passes_;
  }

 private:
  int passes_;
    // Delaunay& Sphere_;
};

#endif  // SRC_METROPOLISMANAGER_H_
