// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorAliasDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORALIASDESCRIPTION
public:
    class ActorAliasDescription& operator=(class ActorAliasDescription const &) = delete;
    ActorAliasDescription(class ActorAliasDescription const &) = delete;
    ActorAliasDescription() = delete;
#endif


public:
    /*0*/ virtual ~ActorAliasDescription();
    /*1*/ virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORALIASDESCRIPTION
public:
#endif
    MCAPI struct AliasInfoDescription const * getAliasInfo(std::string const &) const;
    MCAPI void parse(class Json::Value &, bool);


};