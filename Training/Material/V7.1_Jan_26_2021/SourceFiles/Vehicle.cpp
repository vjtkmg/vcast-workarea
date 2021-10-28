// Class definition for Vehicle
//

#include "Vehicle.h"
#include "iostream"
#include "string"
#include "vector"

using namespace std;

vector<Vehicle *> in_use;

int vehicleCount = 0;


Vehicle::Vehicle()
{
	if (vehicleCount >= MAX_VEHICLES)
	{
		cout << endl << "Too Many Vehicles Allocated: " << vehicleCount << endl;
	}

	in_use.resize(vehicleCount+1);
	in_use[vehicleCount] = this;
	vehicleCount++;

	set_speed(0);
	set_direction(NORTH);
	currentPosition.latitude  = 0;
	currentPosition.longitude = 0;
	color = WHITE;
	name = "Car" + vehicleCount;

}

Vehicle::~Vehicle()
{
	if (vehicleCount == 0)
	{
		cout << "\nNo Vehicles to Deallocate\n";
		return;
	}

	vehicleCount--;
	in_use.resize(vehicleCount);
}

/*
	Vehicle Vehicle::operator= ( Vehicle & )
	{
		return(*this);
	}

	bool Vehicle::operator== ( Vehicle & other)
	{

	if (   (other.currentPosition.latitude == this->currentPosition.latitude)
		&& (other.currentPosition.longitude == this->currentPosition.longitude))
		return(true);
	else
		return(false);
	return(true);
	}

	t_direction Vehicle::get_direction( void )
{
	return( currentDirection );
}

*/

t_error_code Vehicle::set_name( string newName )
{
	name = newName;
	return(STS_GOOD);
}

t_error_code Vehicle::set_color( t_color newColor )
{
	color = newColor;
	return(STS_GOOD);
}


t_error_code Vehicle::set_direction( t_direction newDirection )
{
	if (   (newDirection > MAX_DIRECTION)
		|| (newDirection < MIN_DIRECTION))
	{
		return(STS_BAD_DIRECTION);
	}
	currentDirection = newDirection;
	return(STS_GOOD);
}

t_error_code Vehicle::set_speed( t_speed newSpeed )
{
	if (   (newSpeed > MAX_SPEED)
		|| (newSpeed < MIN_SPEED))
	{
		return(STS_BAD_SPEED);
	}
	currentSpeed = newSpeed;
	return(STS_GOOD);
}


t_error_code Vehicle::get_position( t_position *position )
{
	position->latitude   = currentPosition.latitude;
	position->longitude  = currentPosition.longitude;
	return(STS_GOOD);
}

void Vehicle::increment_time( int num_hours )
{
	int distance;

	if (num_hours > MAX_TIME)
	{
		num_hours = 1;
	}

	distance = currentSpeed * num_hours;

	switch (currentDirection)
	{
			case NORTH:  currentPosition.latitude  += distance; break;
			case SOUTH:  currentPosition.latitude  -= distance; break;
			case EAST:   currentPosition.longitude += distance; break;
			case WEST:   currentPosition.longitude -= distance; break;

	}
}

void Vehicle::print_stats( void )
{
	cout << "Vehicle " << name << ": Lat= " << currentPosition.latitude << ", Long = " << currentPosition.longitude << endl;
}

/*
 *   Vehicle Name Space (VNS), for functions outside of the class.
 */
namespace VNS
{
/*
	void increment_time_1_hr( void )
	{
		vector<Vehicle *>::iterator i;

		for (i=in_use.begin(); i != in_use.end(); i++)
		{
			(*i)->increment_time(1);
		}
	}


	void print_all_vehicles( void )
	{
		vector<Vehicle *>::iterator i;

		for (i=in_use.begin(); i != in_use.end(); i++)
		{
			(*i)->print_stats();

		}
	}
*/

}
