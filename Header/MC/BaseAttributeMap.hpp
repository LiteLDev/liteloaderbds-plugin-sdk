// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseAttributeMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEATTRIBUTEMAP
public:
    class BaseAttributeMap& operator=(class BaseAttributeMap const &) = delete;
    BaseAttributeMap(class BaseAttributeMap const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEATTRIBUTEMAP
#endif
    MCAPI BaseAttributeMap();
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin();
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin() const;
    MCAPI void clearDirtyAttributes();
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end() const;
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end();
    MCAPI std::vector<class AttributeInstanceHandle> const & getDirtyAttributes();
    MCAPI class AttributeInstance const & getInstance(class Attribute const &) const;
    MCAPI class AttributeInstance const & getInstance(unsigned int) const;
    MCAPI class AttributeInstance * getMutableInstance(class Attribute const &);
    MCAPI class AttributeInstance * getMutableInstance(class HashedString const &);
    MCAPI class AttributeInstance * getMutableInstance(unsigned int);
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;
    MCAPI void inheritFrom(class BaseAttributeMap const &);
    MCAPI void onAttributeModified(class AttributeInstance const &);
    MCAPI class BaseAttributeMap & operator=(class BaseAttributeMap &&);
    MCAPI bool operator==(class BaseAttributeMap const &) const;
    MCAPI class AttributeInstance & registerAttribute(class Attribute const &);
    MCAPI unsigned __int64 size() const;
    MCAPI void updateAttribute(class HashedString const &, float, float, float, float, std::vector<class AttributeModifier> const &);
    MCAPI ~BaseAttributeMap();

//private:


private:
    MCAPI static class AttributeInstance mInvalidInstance;


};