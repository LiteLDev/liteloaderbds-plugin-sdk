// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EconomyTradeableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECONOMYTRADEABLEDESCRIPTION
public:
    class EconomyTradeableDescription& operator=(class EconomyTradeableDescription const &) = delete;
    EconomyTradeableDescription(class EconomyTradeableDescription const &) = delete;
    EconomyTradeableDescription() = delete;
#endif


public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~EconomyTradeableDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ECONOMYTRADEABLEDESCRIPTION
public:
#endif


};