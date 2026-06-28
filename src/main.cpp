#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <geode/ui/GeodeUI.hpp>

using namespace geode::prelude;

class $modify(MenuLayerHook, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto menuPrincipal = this->getChildByID("bottom-menu"); 
        if (!menuPrincipal) menuPrincipal = this->getChildByID("main-menu");

        if (menuPrincipal) {
            auto miBotonMenu = CCMenuItemSpriteExtra::create(
                CircleButtonSprite::createWithSpriteFrameName("GJ_plusBtn_001.png", 1.0f, CircleBaseColor::Green),
                this,
                menu_selector(MenuLayerHook::onAbrirMiMenu)
            );

            menuPrincipal->addChild(miBotonMenu);
            menuPrincipal->updateLayout();
        }

        return true;
    }

    void onAbrirMiMenu(CCObject* sender) {
        geode::openSettingsPopup(Mod::get());
    }
};
