#include "CheatMenu.hpp"
#include "SpeedHack.hpp"
#include "NoClip.hpp"
#include <Geode/ui/GeodeUI.hpp>

void setupCheatMenu() {
    GeodeUI::addTab("Ageode", []() {
        auto layout = CCNode::create();
        
        GeodeUI::addToggle(layout, "NoClip", [](bool on) {
            setNoClipEnabled(on);
        });

        GeodeUI::addSlider(layout, "SpeedHack", 0.1f, 3.0f, 1.0f, [](float val) {
            setSpeed(val);
        });

        return layout;
    });
}
