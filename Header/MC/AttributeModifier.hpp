/**
 * @file  AttributeModifier.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum AttributeModifierOperation : int {
    OPERATION_ADDITION = 0x0,
    OPERATION_MULTIPLY_BASE = 0x1,
    OPERATION_MULTIPLY_TOTAL = 0x2,
    OPERATION_CAP = 0x3,
    TOTAL_OPERATIONS = 0x4,
    OPERATION_INVALID = 0x4,
};

enum AttributeOperands : int {
    OPERAND_MIN = 0x0,
    OPERAND_MAX = 0x1,
    OPERAND_CURRENT = 0x2,
    TOTAL_OPERANDS = 0x3,
    OPERAND_INVALID = 0x3,
};
#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeModifier.
 *
 */
class AttributeModifier {

#define AFTER_EXTRA
    // Add Member There
public:
    float mAmount;
    AttributeModifierOperation mOperation;
    AttributeOperands mOperand;
    string mName;
    mce::UUID mId;
    bool mSerialize;

#undef AFTER_EXTRA
public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~AttributeModifier();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?isInstantaneous@AttributeModifier@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEMODIFIER
#endif
    /**
     * @symbol ??0AttributeModifier@@QEAA@XZ
     */
    MCAPI AttributeModifier();
    /**
     * @symbol ??0AttributeModifier@@QEAA@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MW4AttributeModifierOperation@@W4AttributeOperands@@_N@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, enum AttributeModifierOperation, enum AttributeOperands, bool);
    /**
     * @symbol ??0AttributeModifier@@QEAA@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MHH_N@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, int, int, bool);
    /**
     * @symbol ??0AttributeModifier@@QEAA@AEBV0@@Z
     */
    MCAPI AttributeModifier(class AttributeModifier const &);
    /**
     * @symbol ?getAmount@AttributeModifier@@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @symbol ?getId@AttributeModifier@@QEBAAEBVUUID@mce@@XZ
     */
    MCAPI class mce::UUID const & getId() const;
    /**
     * @symbol ?getName@AttributeModifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?getOperand@AttributeModifier@@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @symbol ?getOperation@AttributeModifier@@QEBAHXZ
     */
    MCAPI int getOperation() const;
    /**
     * @symbol ?isSerializable@AttributeModifier@@QEBA_NXZ
     */
    MCAPI bool isSerializable() const;
    /**
     * @symbol ??4AttributeModifier@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class AttributeModifier & operator=(class AttributeModifier const &);
    /**
     * @symbol ??8AttributeModifier@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class AttributeModifier const &) const;

//private:

private:
MCAPI static class mce::UUID const mInvalidUUID;

};