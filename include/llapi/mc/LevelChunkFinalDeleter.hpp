/**
 * @file  LevelChunkFinalDeleter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


class LevelChunkFinalDeleter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKFINALDELETER
public:
    class LevelChunkFinalDeleter& operator=(class LevelChunkFinalDeleter const &) = delete;
    LevelChunkFinalDeleter(class LevelChunkFinalDeleter const &) = delete;
    LevelChunkFinalDeleter() = delete;
#endif

public:
    /**
     * @symbol ??RLevelChunkFinalDeleter\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void operator()(class LevelChunk *);

};
