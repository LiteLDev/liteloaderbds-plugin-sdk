// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonValidator.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackSettingsJsonValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSETTINGSJSONVALIDATOR
public:
    class PackSettingsJsonValidator& operator=(class PackSettingsJsonValidator const &) = delete;
    PackSettingsJsonValidator(class PackSettingsJsonValidator const &) = delete;
    PackSettingsJsonValidator() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSETTINGSJSONVALIDATOR
public:
#endif
    MCAPI static class JsonValidator::Property getValidator();


};