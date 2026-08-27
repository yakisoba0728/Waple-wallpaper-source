// Function: FUN_1403f54e0
// Addr: 1403f54e0
// Size: 158 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403f54e0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 4) + 1;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  cVar2 = FUN_1403a4a30(param_1,uVar3,0);
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 < uVar3) && (((uVar3 - uVar1) * 3 & 0x1fffffff) != 0)) {
      FUN_1404217a0(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0x18,0,(uVar3 - uVar1) * 0x18);
    }
    *(uint *)(param_1 + 4) = uVar3;
    return (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar3 - 1) * 0x18);
  }
  DAT_1404e4f20 = DAT_14045dd10;
  _DAT_1404e4f28 = DAT_14045dd18;
  _DAT_1404e4f30 = DAT_14045dd20;
  return &DAT_1404e4f20;
}

