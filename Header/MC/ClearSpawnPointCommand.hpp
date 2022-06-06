// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClearSpawnPointCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEARSPAWNPOINTCOMMAND
public:
    class ClearSpawnPointCommand& operator=(class ClearSpawnPointCommand const &) = delete;
    ClearSpawnPointCommand(class ClearSpawnPointCommand const &) = delete;
    ClearSpawnPointCommand() = delete;
#endif


public:
    /*0*/ virtual ~ClearSpawnPointCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLEARSPAWNPOINTCOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);


};