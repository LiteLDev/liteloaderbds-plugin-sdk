// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameEventMovementTrackingDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGDEFINITION
public:
    class GameEventMovementTrackingDefinition& operator=(class GameEventMovementTrackingDefinition const &) = delete;
    GameEventMovementTrackingDefinition(class GameEventMovementTrackingDefinition const &) = delete;
    GameEventMovementTrackingDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEEVENTMOVEMENTTRACKINGDEFINITION
#endif
    MCAPI void initialize(class EntityContext &, class GameEventMovementTrackingComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GameEventMovementTrackingDefinition>> &);



};