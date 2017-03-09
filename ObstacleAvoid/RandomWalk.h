#ifndef INCLUDE_HAMSTERAPICOMMON_MESSAGES_RANDOMWALKE_H_
#define INCLUDE_HAMSTERAPICOMMON_MESSAGES_RANDOMWALKE_H_

struct step{
	float distance;
	float angle;
	step(float d, float a){
		distance = d;
		angle = a;
	}
};

class RandomWalk{
public:
	RandomWalk();
	step walk();
	step walkStraight();
	step turnRight();
	step turnLeft();
	step walkBack();
};

#endif /* INCLUDE_HAMSTERAPICOMMON_MESSAGES_RANDOMWALKE_H_ */
