#ifndef INCLUDE_HAMSTERAPICOMMON_MESSAGES_MAP_H_
#define INCLUDE_HAMSTERAPICOMMON_MESSAGES_MAP_H_

#include <HamsterAPIClientCPP/Hamster.h>
#include <iostream>
using namespace std;
using namespace HamsterAPI;

class Map{
private:
	OccupancyGrid ogrid;
	double Resolution;

public:
	Map(OccupancyGrid ogrid);
};

#endif /* INCLUDE_HAMSTERAPICOMMON_MESSAGES_MAP_H_ */
