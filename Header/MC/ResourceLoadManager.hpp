// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ResourceLoadManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADMANAGER
public:
    class ResourceLoadManager& operator=(class ResourceLoadManager const &) = delete;
    ResourceLoadManager(class ResourceLoadManager const &) = delete;
    ResourceLoadManager() = delete;
#endif

public:
    MCAPI void cancel(enum ResourceLoadType);

protected:

private:

};