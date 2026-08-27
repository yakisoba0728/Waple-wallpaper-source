// Function: FUN_1400cfe40
// Addr: 1400cfe40
// Size: 373 bytes


void FUN_1400cfe40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  iVar6 = FUN_140290d80(param_1 + 0x48);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x94) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x94) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar7 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  plVar3 = *(longlong **)(lVar2 + 8 + uVar7 * 0x10);
  if (plVar3 == plVar1) {
LAB_1400cff00:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar3[2];
    plVar8 = plVar3;
    while ((int)param_2 != iVar6) {
      if (plVar8 == *(longlong **)(lVar2 + uVar7 * 0x10)) goto LAB_1400cff00;
      plVar8 = (longlong *)plVar8[1];
      iVar6 = (int)plVar8[2];
    }
  }
  if (plVar8 != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar2 + uVar7 * 0x10);
    if (plVar3 == plVar8) {
      if (plVar4 == plVar8) {
        *(longlong **)(lVar2 + uVar7 * 0x10) = plVar1;
        *(longlong **)(lVar2 + 8 + uVar7 * 0x10) = plVar1;
      }
      else {
        *(longlong *)(lVar2 + 8 + uVar7 * 0x10) = plVar8[1];
      }
    }
    else if (plVar4 == plVar8) {
      *(longlong *)(lVar2 + uVar7 * 0x10) = *plVar8;
    }
    lVar5 = *plVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)plVar8[1] = lVar5;
    *(longlong *)(lVar5 + 8) = plVar8[1];
    plVar1 = (longlong *)plVar8[10];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))
                (plVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),plVar1 != plVar8 + 3));
      plVar8[10] = 0;
    }
    thunk_FUN_14028af80(plVar8,0x58);
  }
  FUN_140290ea0(param_1 + 0x48);
  return;
}

