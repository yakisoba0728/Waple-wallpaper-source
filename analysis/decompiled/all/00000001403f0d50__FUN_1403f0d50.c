// Function: FUN_1403f0d50
// Addr: 1403f0d50
// Size: 106 bytes


void FUN_1403f0d50(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (((plVar2 != (longlong *)0x0) && (uVar1 = *(uint *)(param_1 + 0x2c), uVar1 < 0x11)) &&
     ((0x10105U >> (uVar1 & 0x1f) & 1) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x48) = plVar2[6];
    if (lVar3 == 0) {
      lVar3 = *plVar2;
    }
    if (uVar1 == 0) {
      *(longlong *)(param_1 + 0x10) = plVar2[1];
      *(longlong *)(param_1 + 8) = lVar3;
      FUN_1403bdff0(param_1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_1403c2ab0(plVar2);
    *plVar2 = *(longlong *)(param_1 + 0x30);
    *(longlong **)(param_1 + 0x30) = plVar2;
  }
  return;
}

