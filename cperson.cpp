#include <iostream>
#include <unistd.h>
#include <unistd.h>

using namespace std;

class Cperson
{
	private:
		Cperson(){}
		~Cperson(){}
	private:
		static Cperson * ps;
		static path lock;
	public:
		static Cperson * Getobject();
		static void Destory(Cperson * p);











   }
