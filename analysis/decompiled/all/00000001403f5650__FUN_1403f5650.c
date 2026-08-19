// Function: FUN_1403f5650
// Addr: 1403f5650
// Size: 156 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403f5650(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 4) + 1;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  cVar2 = FUN_1403a4d50(param_1,uVar4,0);
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 < uVar4) && (((uVar4 - uVar1) * 3 & 0x3fffffff) != 0)) {
      puVar3 = (undefined8 *)
               func_0x000140421870(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0xc,0,
                                   (uVar4 - uVar1) * 0xc);
      return puVar3;
    }
    *(uint *)(param_1 + 4) = uVar4;
    return (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar4 - 1) * 0xc);
  }
  DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
  DAT_1404e4ff0 = DAT_14045dde0;
  return &DAT_1404e4ff0;
}

