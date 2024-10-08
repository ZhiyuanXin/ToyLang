#ifndef TOY_LANG_IR_ALLOCA_H
#define TOY_LANG_IR_ALLOCA_H

#include "ir/Instruction.h"

class AllocaInst : public Instruction {
public:
  AllocaInst(std::string Name = "") : Instruction(std::move(Name)) {}

  void accept(IRVisitor &V) override { V.visit(*this); }

  bool isLValue() override { return true; }
  bool hasResult() override { return true; }
};

#endif // !TOY_LANG_IR_ALLOCA_H
