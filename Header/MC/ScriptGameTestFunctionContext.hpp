// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptGameTestFunctionContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTGAMETESTFUNCTIONCONTEXT
public:
    class ScriptGameTestFunctionContext& operator=(class ScriptGameTestFunctionContext const &) = delete;
    ScriptGameTestFunctionContext(class ScriptGameTestFunctionContext const &) = delete;
    ScriptGameTestFunctionContext() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTGAMETESTFUNCTIONCONTEXT
public:
#endif
    MCAPI ScriptGameTestFunctionContext(class Scripting::WeakLifetimeScope, class gametest::BaseGameTestHelper &);
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptGameTestHelper> getScriptGameTestHelper();


};