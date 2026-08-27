// Function: FUN_1401575b0
// Addr: 1401575b0
// Size: 169 bytes


void FUN_1401575b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar3 = *(longlong **)(param_1 + 0x300); plVar3 != plVar1; plVar3 = plVar3 + 7) {
    if ((*(uint *)(*plVar3 + 0x1f8) & 0x400) != 0) {
      FUN_140150ac0(*(longlong *)(param_1 + 200) + 0x1630);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x308);
  lVar4 = *(longlong *)(param_1 + 0x300);
  if (lVar4 != lVar2) {
    do {
      FUN_14015c210(lVar4 + 0x20);
      FUN_1400dda40(lVar4 + 8);
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != lVar2);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x300);
  }
  return;
}

