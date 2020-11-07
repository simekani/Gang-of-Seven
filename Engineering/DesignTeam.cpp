#include "DesignTeam.h"


ComplexSpecs* DesignTeam::getSpecs() {
    return currentDesignSpecs;
}

void DesignTeam::setSpecs(ComplexSpecs* specs) {
    currentDesignSpecs = specs;
    changed();
}
