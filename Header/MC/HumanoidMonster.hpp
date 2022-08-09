// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HumanoidMonster : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUMANOIDMONSTER
public:
    class HumanoidMonster& operator=(class HumanoidMonster const &) = delete;
    HumanoidMonster(class HumanoidMonster const &) = delete;
    HumanoidMonster() = delete;
#endif


public:
    /*14*/ virtual ~HumanoidMonster();
    /*41*/ virtual void __unk_vfn_41();
    /*49*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*269*/ virtual void __unk_vfn_269();
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*308*/ virtual int getItemUseDuration() const;
    /*313*/ virtual void __unk_vfn_313();
    /*316*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*317*/ virtual void __unk_vfn_317();
    /*351*/ virtual void __unk_vfn_351();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUMANOIDMONSTER
#endif
    MCAPI HumanoidMonster(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:


private:
    MCAPI static float const MAX_ENCHANTED_ARMOR_CHANCE;
    MCAPI static float const MAX_ENCHANTED_WEAPON_CHANCE;
    MCAPI static float const MAX_PICKUP_LOOT_CHANCE;
    MCAPI static float const MAX_WEARING_ARMOR_CHANCE;


};