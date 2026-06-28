#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Nos acoplamos a la pantalla principal del juego (MenuLayer)
class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // Esto mandará un mensaje de saludo flotante al abrir Geometry Dash
        FLAlertLayer::create(
            "¡Hola desde Geode!",
            "Tu mod menu <color_l>xdmod</color_l> se cargo con exito.",
            "Aceptar"
        )->show();

        return true;
    }
};
