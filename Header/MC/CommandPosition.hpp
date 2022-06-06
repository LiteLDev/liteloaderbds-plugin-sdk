// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandPosition {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
    float offsetX;
    float offsetY;
    float offsetZ;
    bool relativeX;
    bool relativeY;
    bool relativeZ;
    bool local;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
public:
    class CommandPosition& operator=(class CommandPosition const &) = delete;
    CommandPosition(class CommandPosition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDPOSITION
public:
#endif
    MCAPI CommandPosition(class Vec3 const &);
    MCAPI CommandPosition();
    MCAPI class BlockPos getBlockPos(class CommandOrigin const &, class Vec3 const &) const;
    MCAPI class BlockPos getBlockPos(class Vec3 const &, class Vec3 const &) const;
    MCAPI class Vec3 getPosition(class Vec3 const &, class Vec3 const &) const;
    MCAPI class Vec3 getPosition(class CommandOrigin const &, class Vec3 const &) const;
    MCAPI void load(class CompoundTag const &);
    MCAPI class CompoundTag serialize() const;


};