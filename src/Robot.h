/*
A pure virtual Robot class that extends Drawable and defines an interface all
robots share.
*/
#include "World.h"
#include <vector>

#ifndef _ROBOT_H_
#define _ROBOT_H_
class Robot : public Drawable{
 public:
    virtual bool inCollision(const World&) = 0;
 protected:
};
#endif