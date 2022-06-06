// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpawnActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORCOMPONENT
public:
    class SpawnActorComponent& operator=(class SpawnActorComponent const &) = delete;
    SpawnActorComponent(class SpawnActorComponent const &) = delete;
    SpawnActorComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNACTORCOMPONENT
public:
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI std::vector<struct SpawnActorEntry> & getSpawnEntries();
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);


};