#include "udf.h"

DEFINE_SOURCE(porous, cell, thread, dS, eqn)
{
	const real c2 = 100.0;
	real x[ND_ND];
	real con, source;
	C_CENTROID(x, cell, thread);
	con = c2 * 0.5 * C_R(cell, thread) * x[1];
	source = -con * fabs(C_U(cell, thread)) * C_U(cell, thread);
	dS[eqn] = -2. * con * fabs(C_U(cell, thread));
	Message("Number: %d \n", cell);
	return source;
}