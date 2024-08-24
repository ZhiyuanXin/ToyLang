#ifndef TOY_LANG_IR_BASIC_BLOCK_H
#define TOY_LANG_IR_BASIC_BLOCK_H

#include <vector>

#include "ir/Instruction.h"
#include "ir/Value.h"

class BasicBlock : public Value {
public:
  BasicBlock(int64_t ID) : Value(ID) {}

  bool isLValue() override { return false; }

  void append(std::unique_ptr<Instruction> Inst);
  Instruction *getLastInst();

private:
  // TODO: Use Use/Def Chain to track Preds. Use Terminator to track Succs.

  std::vector<std::unique_ptr<Instruction>> AllInsts;
};

#endif // !TOY_LANG_IR_BASIC_BLOCK_H
