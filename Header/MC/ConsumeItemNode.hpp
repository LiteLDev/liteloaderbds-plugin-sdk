// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ConsumeItemNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMEITEMNODE
public:
    class ConsumeItemNode& operator=(class ConsumeItemNode const &) = delete;
    ConsumeItemNode(class ConsumeItemNode const &) = delete;
#endif


public:
    /*0*/ virtual ~ConsumeItemNode();
    /*1*/ virtual enum BehaviorStatus tick(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONSUMEITEMNODE
public:
#endif
    MCAPI ConsumeItemNode();


};