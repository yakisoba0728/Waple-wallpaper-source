// Function: FUN_14027db10
// Addr: 14027db10
// Size: 807 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14027db10(undefined8 param_1,float param_2)

{
  char cVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *in_stack_00000030;
  
  fVar4 = (float)*in_stack_00000030;
  fVar5 = (float)((ulonglong)*in_stack_00000030 >> 0x20);
  fVar3 = fVar5;
  if (fVar5 <= fVar4) {
    fVar3 = fVar4;
  }
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(in_stack_00000030 + 1);
  if (fVar3 <= *(float *)(in_stack_00000030 + 1)) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  if ((float)((uint)(param_2 - DAT_140492790) & _DAT_140493090) <
      (float)((uint)(fVar4 - DAT_140492790) & _DAT_140493090)) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_14027e8c0();
    if (((cVar1 != '\0') || (cVar1 = FUN_14027e8c0(param_1), cVar1 != '\0')) ||
       (cVar1 = FUN_14027e8c0(param_1), uVar2 = 0, cVar1 != '\0')) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

