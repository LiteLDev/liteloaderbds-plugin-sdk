// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommandIntegerRange {

#define AFTER_EXTRA
public:
    int min, max;
    bool inverted;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDINTEGERRANGE
public:
    class CommandIntegerRange& operator=(class CommandIntegerRange const&) = delete;
    CommandIntegerRange(class CommandIntegerRange const&) = delete;
    CommandIntegerRange() = delete;
#endif

public:
    MCAPI CommandIntegerRange(int, int, bool);

protected:

private:

};