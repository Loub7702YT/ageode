#include "SpeedHack.hpp"
#include <Geode/modify/PlayLayer.hpp>

static float currentSpeed = 1.0f;

void setSpeed(float speed) {
    currentSpeed = speed;
}

class $modify(SpeedPlayLayer, PlayLayer) {
    void update(float dt) {
        PlayLayer::update(dt * currentSpeed);
    }
}

void setupSpeedHack() {
    setSpeed(1.0f); // default
}
