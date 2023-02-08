/**
 * @file  SynchedActorDataReader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SynchedActorDataReader.
 *
 */
class SynchedActorDataReader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATAREADER
public:
    class SynchedActorDataReader& operator=(class SynchedActorDataReader const &) = delete;
    SynchedActorDataReader(class SynchedActorDataReader const &) = delete;
    SynchedActorDataReader() = delete;
#endif

public:
    /**
     * @hash   -2040260256
     * @symbol  ?getInt\@SynchedActorDataReader\@\@QEBAHG\@Z
     */
    MCAPI int getInt(unsigned short) const;
    /**
     * @hash   626574552
     * @symbol  ?getPosition\@SynchedActorDataReader\@\@QEBA?AVBlockPos\@\@G\@Z
     */
    MCAPI class BlockPos getPosition(unsigned short) const;
    /**
     * @hash   923035147
     * @symbol  ?getStatusFlag\@SynchedActorDataReader\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @hash   -1114082664
     * @symbol  ?getVec3\@SynchedActorDataReader\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const;

};