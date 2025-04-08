#include "NoClip.hpp"
#include <Geode/modify/PlayerObject.hpp>

static bool noclipEnabled = false;

void setNoClipEnabled(bool enabled) {
    noclipEnabled = enabled;
}

class $modify(NoClipPlayer, PlayerObject) {
    void checkCollisions(PlayerObject* obj, float dt, bool idk) {
        if (!noclipEnabled)
            PlayerObject::checkCollisions(obj, dt, idk);
        // If enabled, skip collisions
    }
};

void setupNoClip() {
    setNoClipEnabled(false);
}
