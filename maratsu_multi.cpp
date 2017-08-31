#include <iostream>	
#include "maratsu_multi.hpp"
#include "stdafx.h"
#include <math.h>

int maratsu_multi(int& x, int& y)
{
	int n;
	n = sizeof(x);
	int x1, x2, y1, y2, F, G, H, K;

	if (n == 1)
	{
		return x*y;
	}
	else
	{
		x1 = x / (int) (pow(10, n / 2));
		x2 = x - x1*(int) pow(10, n / 2);
		y1 = y / (int) (pow(10, n / 2));
		y2 = y - y1*(int) pow(10, n / 2);
		int x12 = x1 + x2;
		int y12 = y1 + y2;
		
		F = maratsu_multi(x1, y1);
		G = maratsu_multi(x2, y2);
		H = maratsu_multi(x12, y12);
		K = H - F - G;
		return F*(int) pow(10, n) + K*(int) pow(10, n / 2) + G;

	}
}