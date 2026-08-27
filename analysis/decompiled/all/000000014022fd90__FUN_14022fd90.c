// Function: FUN_14022fd90
// Addr: 14022fd90
// Size: 273 bytes


void FUN_14022fd90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x340) != 0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
    FUN_1404217a0(*(undefined8 *)(param_1 + 0x260),0,(ulonglong)*(uint *)(param_1 + 0x34c) << 2);
    if (*(longlong *)(param_1 + 0x218) != *(longlong *)(param_1 + 0x220)) {
      *(longlong *)(param_1 + 0x220) = *(longlong *)(param_1 + 0x218);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x488);
  for (lVar4 = *(longlong *)(param_1 + 0x480); lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
    FUN_14022fd90(*(undefined8 *)(lVar4 + 8));
  }
  lVar1 = *(longlong *)(param_1 + 0x4a0);
  for (lVar4 = *(longlong *)(param_1 + 0x498); lVar4 != lVar1; lVar4 = lVar4 + 0x38) {
    plVar2 = *(longlong **)(lVar4 + 0x10);
    for (plVar5 = *(longlong **)(lVar4 + 8); plVar5 != plVar2; plVar5 = plVar5 + 1) {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        FUN_14022ac60(lVar3);
        thunk_FUN_14028af80(lVar3,0x4b0);
      }
    }
    if (*(longlong *)(lVar4 + 8) != *(longlong *)(lVar4 + 0x10)) {
      *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 8);
    }
  }
  FUN_140161c50(param_1 + 0x438);
  return;
}

