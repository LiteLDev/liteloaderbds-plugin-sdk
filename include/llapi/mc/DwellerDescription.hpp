/**
 * @file  DwellerDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DwellerDescription.
 *
 */
class DwellerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERDESCRIPTION
public:
    class DwellerDescription& operator=(class DwellerDescription const &) = delete;
    DwellerDescription(class DwellerDescription const &) = delete;
    DwellerDescription() = delete;
#endif

public:
    /**
     * @hash   -1395211273
     * @vftbl  0
     * @symbol  ?getJsonName\@DwellerDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~DwellerDescription();
    /**
     * @hash   2080323996
     * @vftbl  2
     * @symbol  ?deserializeData\@DwellerDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   242812758
     * @vftbl  3
     * @symbol  ?serializeData\@DwellerDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};