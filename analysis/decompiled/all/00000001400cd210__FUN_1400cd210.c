// Function: FUN_1400cd210
// Addr: 1400cd210
// Size: 173 bytes


void FUN_1400cd210(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_2 < 0x8000000000000000) {
    lVar1 = *param_1;
    uVar6 = param_1[2] - lVar1;
    uVar5 = 0x7fffffffffffffff;
    if ((uVar6 <= 0x7fffffffffffffff - (uVar6 >> 1)) &&
       (uVar5 = (uVar6 >> 1) + uVar6, uVar5 < param_2)) {
      uVar5 = param_2;
    }
    if (lVar1 != 0) {
      lVar3 = lVar1;
      puVar4 = auStack_28;
      if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
         (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
        lVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x1400cd296;
      thunk_FUN_14028af80(lVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    FUN_1400cd7a0(param_1,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013050();
}

