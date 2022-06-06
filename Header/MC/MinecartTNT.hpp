// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecartTNT : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTTNT
public:
    class MinecartTNT& operator=(class MinecartTNT const &) = delete;
    MinecartTNT(class MinecartTNT const &) = delete;
    MinecartTNT() = delete;
#endif


public:
    /*14*/ virtual ~MinecartTNT();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*181*/ virtual void __unk_vfn_181();
    /*185*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual void destroy(class ActorDamageSource const &, bool);
    /*280*/ virtual enum MinecartType getType();
    /*281*/ virtual class Block const * getDefaultDisplayBlock() const;
    /*282*/ virtual void __unk_vfn_282();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECARTTNT
public:
#endif
    MCAPI MinecartTNT(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void primeFuse(enum ActorDamageCause);

//private:

private:
    MCAPI static int const DEFAULT_FUSE_LENGTH;


};