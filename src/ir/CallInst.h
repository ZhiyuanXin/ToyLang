#ifndef TOY_LANG_IR_CALL_INST_H
#define TOY_LANG_IR_CALL_INST_H

#include "ir/Function.h"
#include "ir/Instruction.h"

class CallInst : public Instruction {
public:
  CallInst(int64_t ID, Function *Callee, std::vector<Value *> Arguments)
      : Instruction(ID),
        Callee(Callee),
        Arguments(Arguments) {}

private:
  Function *Callee;
  std::vector<Value *> Arguments;
};

#endif // !TOY_LANG_IR_CALL_INST_H
