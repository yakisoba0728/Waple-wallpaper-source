// Function: FUN_14027df40
// Addr: 14027df40
// Size: 854 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14027df40(undefined8 param_1,float param_2)

{
  char cVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *in_stack_00000030;
  
  uVar2 = 0;
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
  if (((float)((uint)(fVar4 - DAT_1404926c0) & _DAT_140492fc0) <=
       (float)((uint)(param_2 - DAT_1404926c0) & _DAT_140492fc0)) &&
     (((cVar1 = FUN_14027f320(), cVar1 != '\0' || (cVar1 = FUN_14027f320(param_1), cVar1 != '\0'))
      || (cVar1 = FUN_14027f320(param_1), uVar2 = 0, cVar1 != '\0')))) {
    uVar2 = 1;
  }
  return uVar2;
}

