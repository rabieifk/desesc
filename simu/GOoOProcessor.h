
#pragma once

#include "GProcessor.h"
#include "iassert.hpp"

class GOoOProcessor : public GProcessor {
private:
protected:
  // BEGIN VIRTUAL FUNCTIONS of GProcessor

  //  virtual void fetch(EmulInterface *eint, Hartid_t fid);
  //  virtual bool advance_clock();
  //  virtual StallCause addInst(Dinst *dinst);
  //  virtual void retire();

  // END VIRTUAL FUNCTIONS of GProcessor
public:
  GOoOProcessor(GMemorySystem *gm, CPU_t i);
  virtual ~GOoOProcessor() {}
  //  virtual LSQ *getLSQ();
};
