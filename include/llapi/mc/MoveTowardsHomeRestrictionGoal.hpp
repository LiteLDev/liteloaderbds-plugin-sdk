/**
 * @file  MoveTowardsHomeRestrictionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveTowardsRestrictionGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsHomeRestrictionGoal.
 *
 */
class MoveTowardsHomeRestrictionGoal : public MoveTowardsRestrictionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSHOMERESTRICTIONGOAL
public:
    class MoveTowardsHomeRestrictionGoal& operator=(class MoveTowardsHomeRestrictionGoal const &) = delete;
    MoveTowardsHomeRestrictionGoal(class MoveTowardsHomeRestrictionGoal const &) = delete;
    MoveTowardsHomeRestrictionGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveTowardsHomeRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@MoveTowardsHomeRestrictionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0MoveTowardsHomeRestrictionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveTowardsHomeRestrictionGoal(class Mob &);

};
