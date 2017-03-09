/*
 * LocalizationManager.h
 *
 *  Created on: Jan 16, 2017
 *      Author: user
 */

#ifndef LOCALIZATIONMANAGER_H_
#define LOCALIZATIONMANAGER_H_
#include "Particle.h"
#include "Map.h"
#include <vector>
using namespace std;

class LocalizationManager {
private:
	vector<Particle> particles;
	const float  NORM = 1.3;
	Map map;
	Location loc = new Location(0,0,0);

public:
	LocalizationManager();
	virtual ~LocalizationManager();
	void update(float distance, float angle, vector<float> scan);
	void randomParticle();
	void randomParticle(float radius, int count);
	vector<float> GetPos();
	void ShowMap();

};

#endif /* LOCALIZATIONMANAGER_H_ */
