// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructureTelemetryClientData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETELEMETRYCLIENTDATA
public:
    class StructureTelemetryClientData& operator=(class StructureTelemetryClientData const &) = delete;
    StructureTelemetryClientData(class StructureTelemetryClientData const &) = delete;
    StructureTelemetryClientData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETELEMETRYCLIENTDATA
public:
#endif
    MCAPI unsigned int getMirrorEditCount() const;
    MCAPI unsigned int getOffsetEditCount() const;
    MCAPI unsigned int getRotationEditCount() const;
    MCAPI unsigned int getSizeEditCount() const;


};