//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireAnalysis_registrars.h"

#include "bennetts.h"
#include "ticomponents.h"
#include "ti.h"
#include "fep.h"

#include "Helpers/objectregistry.hpp"

void register_SireAnalysis_objects()
{

    ObjectRegistry::registerConverterFor< SireAnalysis::BennettsRatios >();
    ObjectRegistry::registerConverterFor< SireAnalysis::Bennetts >();
    ObjectRegistry::registerConverterFor< SireAnalysis::TIComponents >();
    ObjectRegistry::registerConverterFor< SireAnalysis::ComponentGradients >();
    ObjectRegistry::registerConverterFor< SireAnalysis::Gradients >();
    ObjectRegistry::registerConverterFor< SireAnalysis::TI >();
    ObjectRegistry::registerConverterFor< SireAnalysis::TIPMF >();
    ObjectRegistry::registerConverterFor< SireAnalysis::FEP >();
    ObjectRegistry::registerConverterFor< SireAnalysis::FEPDeltas >();
    ObjectRegistry::registerConverterFor< SireAnalysis::DataPoint >();
    ObjectRegistry::registerConverterFor< SireAnalysis::PMF >();

}

