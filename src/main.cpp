#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        FLAlertLayer::create(
            "Geode",
            "Mod loaded successfully",
            "OK"
        )->show();

        return true;
    }
};
