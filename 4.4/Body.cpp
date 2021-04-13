#include "Body.h"

using namespace std;

Body::Body()
	: a(0) {}

Body::Body(int a)
	: a(a) {}

void Body::Robota()
{
	Read();
	Print();
}