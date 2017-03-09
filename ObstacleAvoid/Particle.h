#ifndef INCLUDE_HAMSTERAPICOMMON_MESSAGES_PARTICLES_H_
#define INCLUDE_HAMSTERAPICOMMON_MESSAGES_PARTICLES_H_

struct Location {
  float x;
  float y;
  float angle;
  Location(float X,float Y,float A){
	  x=X;
	  y=Y;
	  angle=A;
  }
} ;

class Particle{
public:
	Location loc = new Location(0,0,0);
	float belief;

	Particle(float x, float y, int angel1);
};
#endif /* INCLUDE_HAMSTERAPICOMMON_MESSAGES_PARTICLES_H_ */
