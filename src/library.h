#ifndef PLAYGROUND_LIBRARY_H
#define PLAYGROUND_LIBRARY_H

#include <string>

class Actor {
private:
    int speed;

public:
    Actor(int speed) {
        this->speed = speed;
    }

    int getSpeed() {
        return this->speed;
    }
};


class NavAgent {
private:
    Actor* actor;
public:
    void initActor(Actor* actor) {
        this->actor = actor;
    }

    int getActorSpeed() {
        return this->actor->getSpeed();
    }
};

#endif //PLAYGROUND_LIBRARY_H