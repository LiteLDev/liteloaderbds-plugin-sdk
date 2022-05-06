// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FoodItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENT
public:
    FoodItemComponent(class FoodItemComponent const &) = delete;
    FoodItemComponent() = delete;
#endif

public:
    /*
    inline bool isNetworkComponent() const{
        bool (FoodItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@FoodItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline float getSaturationModifier() const{
        float (FoodItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?getSaturationModifier@FoodItemComponent@@UEBAMXZ");
        return (this->*rv)();
    }
    inline int getNutrition() const{
        int (FoodItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?getNutrition@FoodItemComponent@@UEBAHXZ");
        return (this->*rv)();
    }
    inline bool canAlwaysEat() const{
        bool (FoodItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?canAlwaysEat@FoodItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class CompoundTag> buildNetworkTag() const{
        std::unique_ptr<class CompoundTag> (FoodItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?buildNetworkTag@FoodItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline class Item const * eatItem(class ItemStack & a0, class Actor & a1, class Level & a2){
        class Item const * (FoodItemComponent::*rv)(class ItemStack &, class Actor &, class Level &);
        *((void**)&rv) = dlsym("?eatItem@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVActor@@AEAVLevel@@@Z");
        return (this->*rv)(std::forward<class ItemStack &>(a0), std::forward<class Actor &>(a1), std::forward<class Level &>(a2));
    }
    inline void initializeFromNetwork(class CompoundTag const & a0){
        void (FoodItemComponent::*rv)(class CompoundTag const &);
        *((void**)&rv) = dlsym("?initializeFromNetwork@FoodItemComponent@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const &>(a0));
    }
    inline bool use(class ItemStack & a0, class Player & a1){
        bool (FoodItemComponent::*rv)(class ItemStack &, class Player &);
        *((void**)&rv) = dlsym("?use@FoodItemComponent@@UEAA_NAEAVItemStack@@AEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class ItemStack &>(a0), std::forward<class Player &>(a1));
    }
    inline class Item const * useTimeDepleted(class ItemStack & a0, class Player & a1, class Level & a2){
        class Item const * (FoodItemComponent::*rv)(class ItemStack &, class Player &, class Level &);
        *((void**)&rv) = dlsym("?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z");
        return (this->*rv)(std::forward<class ItemStack &>(a0), std::forward<class Player &>(a1), std::forward<class Level &>(a2));
    }
    */
    MCAPI FoodItemComponent(class ComponentItem *);
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;
    MCAPI class FoodItemComponent & operator=(class FoodItemComponent const &);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

protected:

private:

};