// Function: FUN_1403f5580
// Addr: 1403f5580
// Size: 156 bytes


undefined8 * FUN_1403f5580(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 4) + 1;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  cVar2 = FUN_1403a4c80(param_1,uVar3,0);
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 < uVar3) && (((uVar3 - uVar1) * 3 & 0x3fffffff) != 0)) {
      FUN_1404217a0(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0xc,0,(uVar3 - uVar1) * 0xc);
    }
    *(uint *)(param_1 + 4) = uVar3;
    return (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar3 - 1) * 0xc);
  }
  DAT_1404e4f28 = (undefined4)DAT_14045dd18;
  DAT_1404e4f20 = DAT_14045dd10;
  return &DAT_1404e4f20;
}

