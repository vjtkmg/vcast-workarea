
#include "string"

using namespace std;

#define MAX_SPEED 100	// 100 MPH forwardw
#define MIN_SPEED (-10)	// 10 MPH backwards
#define MAX_VEHICLES 10
#define MAX_TIME 12 // Max # hours we can increment the time
/*
 * Speed is in MPH and can be positive (forward) or negative (backward)
 */
typedef int t_speed;

enum vehicle_error_code
{
	STS_GOOD = 0,
	STS_BAD_SPEED,
	STS_BAD_DIRECTION,
};

typedef enum vehicle_error_code t_error_code;

#define MIN_DIRECTION 1  // For error checking
#define MAX_DIRECTION 4

enum direction
{
	EAST = MIN_DIRECTION,
	WEST,
	NORTH,
	SOUTH,
};
typedef enum direction t_direction;

enum e_color
{
	BLACK,
	WHITE,
	RED,
	BLUE,
	GREEN,
	YELLOW,
};
typedef enum e_color t_color;

struct position
{
	int	latitude;
	int	longitude;
};
typedef struct position t_position;



class Vehicle
{
private:

	t_direction	currentDirection;
	t_speed		currentSpeed;
	t_color		color;

protected:

	string		name;
	t_position	currentPosition;

public:

	Vehicle();
	~Vehicle();
	Vehicle operator= ( Vehicle & );
	bool operator== ( Vehicle &);
	t_error_code set_name(string);
	t_error_code set_color(t_color);
	t_error_code set_direction(t_direction);
	t_error_code set_speed(t_speed);
	virtual void print_stats( void );
	t_error_code get_position(t_position *);
	t_direction get_direction(void);
	void increment_time( int );
};

namespace VNS  // Vehicle Name Space, for functions outside of the class.
{
	void increment_time_1_hr( void );
	void print_all_vehicles( void );
};


