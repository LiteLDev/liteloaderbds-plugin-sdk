// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SittableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITTABLEDEFINITION
public:
    class SittableDefinition& operator=(class SittableDefinition const &) = delete;
    SittableDefinition(class SittableDefinition const &) = delete;
    SittableDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SITTABLEDEFINITION
public:
#endif
    MCAPI void uninitialize(class EntityContext &, class SitComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SittableDefinition>> &);


};