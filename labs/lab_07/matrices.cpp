
//
//  matrices.cpp
//  hw6
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <string>
#include "matrices.h"

using namespace std;

namespace matrices
{

  //Create a matrix given dimensions r x c
  void create (int **&m, int r, int c)
  {
    m = new int *[r];
    for (int i = 0; i < r; i++)
      {
	// In each row define m's columns
	m[i] = new int[c];

	for (int j = 0; j < c; j++)
	  {
	    // Set default value for each entry
	    m[i][j] = 0;
	  }
      }
  }

  void deleteMatrix (int **&m, int r)
  {
    for (int i = 0; i < r; i++)
      {
	delete[]m[i];
      }
    delete[]m;
  }





  int **add (int **m1, int r1, int c1, int **m2, int r2, int c2)
  {
    int **added;
    if (r1 != r2 || c1 != c2)
      return NULL;

    create (added, r1, c1);
    for (int i = 0; i < r1; i++)
      {
	for (int j = 0; j < c1; j++)
	  {
	    added[i][j] = m1[i][j] + m2[i][j];
	  }
      }

    return added;
  }

  string repr (int **m, int r, int c)
  {
    ostringstream stream;

    stream << setprecision (8);

    // Loop to create matrix string representation
    for (int i = 0; i < r; i++)
      {
	stream << m[i][0];
	for (int j = 1; j < c; j++)
	  {
	    stream << " " << m[i][j];
	  }
	stream << "\n";
      }
    return stream.str ();
  }
}
