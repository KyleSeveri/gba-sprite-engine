//
// Created by Wouter Groeneveld on 28/07/18.
//

#include "Scene.h"

#include <engine/gba_engine.h>

void Scene::setEngineForSceneSwitching(GBAEngine *engine) {
    this->engine = engine;
}