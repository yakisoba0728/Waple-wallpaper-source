// Function: FUN_1400c8180
// Addr: 1400c8180
// Size: 442 bytes


void FUN_1400c8180(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  iVar4 = FUN_140290d80(param_1 + 0x450);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  lVar1 = *(longlong *)(param_1 + 0x4c0);
  uVar5 = *(ulonglong *)(param_1 + 0x4d8) &
          ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3;
  plVar2 = *(longlong **)(param_1 + 0x4b0);
  plVar6 = *(longlong **)(lVar1 + 8 + uVar5 * 0x10);
  if (plVar6 != plVar2) {
    iVar4 = (int)plVar6[2];
    while ((int)param_2 != iVar4) {
      if (plVar6 == *(longlong **)(lVar1 + uVar5 * 0x10)) goto LAB_1400c82fc;
      plVar6 = (longlong *)plVar6[1];
      iVar4 = (int)plVar6[2];
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (plVar6 != plVar2) {
      uVar5 = *(ulonglong *)(param_1 + 0x4d8) &
              (((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3;
      plVar3 = *(longlong **)(lVar1 + uVar5 * 0x10);
      if (*(longlong **)(lVar1 + 8 + uVar5 * 0x10) == plVar6) {
        if (plVar3 == plVar6) {
          *(longlong **)(lVar1 + uVar5 * 0x10) = plVar2;
          *(longlong **)(lVar1 + 8 + uVar5 * 0x10) = plVar2;
        }
        else {
          *(longlong *)(lVar1 + 8 + uVar5 * 0x10) = plVar6[1];
        }
      }
      else if (plVar3 == plVar6) {
        *(longlong *)(lVar1 + uVar5 * 0x10) = *plVar6;
      }
      lVar1 = *plVar6;
      *(longlong *)(param_1 + 0x4b8) = *(longlong *)(param_1 + 0x4b8) + -1;
      *(longlong *)plVar6[1] = lVar1;
      *(longlong *)(lVar1 + 8) = plVar6[1];
      FUN_1400cd530();
      *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + -1;
      if (*(longlong *)(param_1 + 0x4b8) == 0) {
        FUN_1400c8e60(param_1);
      }
    }
  }
LAB_1400c82fc:
  FUN_140290ea0(param_1 + 0x450);
  return;
}

