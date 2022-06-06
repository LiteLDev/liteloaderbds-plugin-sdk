// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FurnaceContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlastFurnaceContainerManagerModel : public FurnaceContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACECONTAINERMANAGERMODEL
public:
    class BlastFurnaceContainerManagerModel& operator=(class BlastFurnaceContainerManagerModel const &) = delete;
    BlastFurnaceContainerManagerModel(class BlastFurnaceContainerManagerModel const &) = delete;
    BlastFurnaceContainerManagerModel() = delete;
#endif


public:
    /*0*/ virtual ~BlastFurnaceContainerManagerModel();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLASTFURNACECONTAINERMANAGERMODEL
public:
#endif
    MCAPI BlastFurnaceContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);


};