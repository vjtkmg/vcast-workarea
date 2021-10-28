// Vehicle Class Main Driver code.
//

#include "Vehicle.h"
#include "iostream"
#include "string"

using namespace VNS;  // Vehicle Name Space
using namespace std;

int main(int argc, string* argv[])
{
	t_position pos;

	Vehicle myCar = Vehicle();

	myCar.set_speed(50);
	myCar.set_direction(NORTH);
	myCar.increment_time(1);  // 1 Hour

	myCar.set_direction(WEST);
	myCar.increment_time(2);  // 2 Hours

	myCar.get_position( &pos );

	cout << "Current Position: Lat= " << pos.latitude << ", Long = " << pos.longitude << endl;

}