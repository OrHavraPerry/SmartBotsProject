#include "Map.h"
#include <iostream>
using namespace std;


void Map::ShowMap(){

}

Map::Map(OccupancyGrid inogrid) {
	ogrid = inogrid;
	Resolution = inogrid.getResolution();
}
