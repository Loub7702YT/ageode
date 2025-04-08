#include <Geode/Geode.hpp>
#include "CheatMenu.hpp"
#include "SpeedHack.hpp"
#include "NoClip.hpp"

using namespace geode::prelude;

$on_mod(Loaded) {
    log::info("Ageode loaded!");

    setupSpeedHack();
    setupNoClip();
    setupCheatMenu(); // GUI with toggles
}
