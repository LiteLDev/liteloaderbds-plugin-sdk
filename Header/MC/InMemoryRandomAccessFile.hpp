// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InMemoryRandomAccessFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYRANDOMACCESSFILE
public:
    class InMemoryRandomAccessFile& operator=(class InMemoryRandomAccessFile const &) = delete;
    InMemoryRandomAccessFile(class InMemoryRandomAccessFile const &) = delete;
    InMemoryRandomAccessFile() = delete;
#endif


public:
    /*0*/ virtual ~InMemoryRandomAccessFile();
    /*1*/ virtual class leveldb::Status Read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INMEMORYRANDOMACCESSFILE
public:
#endif
    MCAPI InMemoryRandomAccessFile(class std::shared_ptr<class InMemoryFile>);


};