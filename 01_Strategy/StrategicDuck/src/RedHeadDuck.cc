
#include "RedHeadDuck.h"

#include <iostream>

#include "FlyWithWings.h"
#include "Meow.h"

using std::cout;
using std::string;

unsigned int RedHeadDuck::_newID = 0;

RedHeadDuck::RedHeadDuck() {
  _name = "RedHead";
  _id = _newID++;
  _quackBehavior = new Meow();
  _flyBehavior = new FlyWithWings();
}

RedHeadDuck::~RedHeadDuck() {}
