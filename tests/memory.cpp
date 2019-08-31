//
// Created by Sebastian Glonner on 10.08.2019.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>

#include "library.h"

void createAndSetActor(NavAgent* agent) {
    int speed = 3;
    auto actor = Actor{speed};
    agent->initActor(&actor);
}

TEST_CASE( "pointer arg at stack memory", "[single-file]" ) {
    int speed = 3;
    auto actor = Actor{speed};
    auto agent = NavAgent{};
    agent.initActor(&actor);
    REQUIRE( agent.getActorSpeed() == speed );
}

TEST_CASE( "pointer arg at heap memory", "[single-file]" ) {
    auto agent = NavAgent{};
    createAndSetActor(&agent);
    REQUIRE(agent.getActorSpeed() != 3); // if this is true then it is just a coincidence.
}

