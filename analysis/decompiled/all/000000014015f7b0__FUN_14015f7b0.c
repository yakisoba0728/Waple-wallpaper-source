// Function: FUN_14015f7b0
// Addr: 14015f7b0
// Size: 288 bytes


void FUN_14015f7b0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0xf8);
  lVar3 = *(longlong *)(param_1 + 0x108);
  uVar6 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x120);
  plVar5 = *(longlong **)(lVar3 + 8 + uVar6 * 0x10);
  if (plVar5 == plVar2) {
LAB_14015f844:
    plVar5 = (longlong *)0x0;
  }
  else {
    iVar1 = (int)plVar5[2];
    while ((int)param_2 != iVar1) {
      if (plVar5 == *(longlong **)(lVar3 + uVar6 * 0x10)) goto LAB_14015f844;
      plVar5 = (longlong *)plVar5[1];
      iVar1 = (int)plVar5[2];
    }
  }
  if (plVar5 != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar3 + uVar6 * 0x10);
    if (*(longlong **)(lVar3 + 8 + uVar6 * 0x10) == plVar5) {
      if (plVar4 == plVar5) {
        *(longlong **)(lVar3 + uVar6 * 0x10) = plVar2;
        *(longlong **)(lVar3 + 8 + uVar6 * 0x10) = plVar2;
      }
      else {
        *(longlong *)(lVar3 + 8 + uVar6 * 0x10) = plVar5[1];
      }
    }
    else if (plVar4 == plVar5) {
      *(longlong *)(lVar3 + uVar6 * 0x10) = *plVar5;
    }
    lVar3 = *plVar5;
    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -1;
    *(longlong *)plVar5[1] = lVar3;
    *(longlong *)(lVar3 + 8) = plVar5[1];
    plVar2 = (longlong *)plVar5[10];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar5 + 3);
      plVar5[10] = 0;
    }
    thunk_FUN_14028af80(plVar5,0x58);
    return;
  }
  return;
}

