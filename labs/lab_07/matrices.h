
//
//  matrices.h
//  hw6_1
//
//

#ifndef __hw6__matrices__
#define __hw6__matrices__

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace matrices {

	//Create a matrix given dimensions r x c
	void create(int ** &m, int r, int c);

	void deleteMatrix(int ** &m, int r);

	int ** add(int ** m1, int r1, int c1, int ** m2, int r2, int c2);

	string repr(int ** m, int r, int c);
    
}



#endif /* defined(__hw6__matrices__) */
