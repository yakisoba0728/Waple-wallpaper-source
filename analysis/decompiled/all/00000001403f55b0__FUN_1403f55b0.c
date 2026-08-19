// Function: FUN_1403f55b0
// Addr: 1403f55b0
// Size: 108 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403f55b0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 4) + 1;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  cVar2 = FUN_1403a4b00(param_1,uVar4,0);
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 < uVar4) && (((uVar4 - uVar1) * 3 & 0x1fffffff) != 0)) {
      puVar3 = (undefined8 *)
               func_0x000140421870(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0x18,0,
                                   (uVar4 - uVar1) * 0x18);
      return puVar3;
    }
    *(uint *)(param_1 + 4) = uVar4;
    return (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar4 - 1) * 0x18);
  }
  DAT_1404e4ff0 = DAT_14045dde0;
  DAT_1404e4ff8 = _DAT_14045dde8;
  _DAT_1404e5000 = DAT_14045ddf0;
  return &DAT_1404e4ff0;
}

