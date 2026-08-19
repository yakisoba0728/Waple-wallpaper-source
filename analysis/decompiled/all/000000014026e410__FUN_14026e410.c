// Function: FUN_14026e410
// Addr: 14026e410
// Size: 80 bytes


void FUN_14026e410(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong *in_stack_00000028;
  uint *in_stack_00000030;
  undefined1 auStack_118 [224];
  
  lVar1 = *in_stack_00000028;
  uVar3 = (ulonglong)*in_stack_00000030;
  lVar2 = (longlong)**(int **)(in_stack_00000030 + 4);
  fVar6 = *(float *)(lVar1 + 0x34 + uVar3 * 0x50) - *(float *)(lVar1 + 0x34 + lVar2 * 0x50);
  fVar4 = *(float *)(lVar1 + 0x3c + uVar3 * 0x50) - *(float *)(lVar1 + 0x3c + lVar2 * 0x50);
  fVar5 = *(float *)(lVar1 + 0x38 + uVar3 * 0x50) - *(float *)(lVar1 + 0x38 + lVar2 * 0x50);
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  if (0.0 <= fVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_14005f800(auStack_118,param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0(fVar4);
}

