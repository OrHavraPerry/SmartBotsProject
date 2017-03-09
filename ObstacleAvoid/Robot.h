/*
 * Robot.h
 *
 *  Created on: Jan 16, 2017
 *      Author: user
 */

#ifndef ROBOT_H_
#define ROBOT_H_

using namespace std;

class Robot {
public:
	Robot();
	virtual ~Robot();
	vector<float> getLidar();
	void move(float speed, float angle);
};

#endif /* ROBOT_H_ */
