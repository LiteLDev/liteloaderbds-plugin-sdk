// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpyglassItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPYGLASSITEM
public:
    class SpyglassItem& operator=(class SpyglassItem const &) = delete;
    SpyglassItem(class SpyglassItem const &) = delete;
    SpyglassItem() = delete;
#endif


public:
    /*0*/ virtual ~SpyglassItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual float getViewDamping() const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*82*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*83*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPYGLASSITEM
public:
#endif
    MCAPI SpyglassItem(std::string const &, short);


};