// Function: FUN_140360f00
// Addr: 140360f00
// Size: 269 bytes


undefined4 * FUN_140360f00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = (undefined4 *)_calloc_base(1,0x10);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x3c) + -1;
  if (-1 < iVar6) {
    do {
      uVar2 = (uint)(iVar6 + iVar7) >> 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24);
      if (uVar1 < 0x72706867) {
        if (0x72706865 < uVar1) {
          uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 0x24 + 0x1c);
          goto LAB_140360f70;
        }
        iVar7 = uVar2 + 1;
      }
      else {
        iVar6 = uVar2 - 1;
      }
    } while (iVar7 <= iVar6);
  }
  uVar3 = 0;
LAB_140360f70:
  *puVar4 = uVar3;
  iVar6 = *(int *)(param_1 + 4);
  if (((((iVar6 == 0x4e6b6f6f) || (iVar6 == 0x4d616e64)) || (iVar6 == 0x41646c6d)) ||
      (((iVar6 == 0x41726162 || (iVar6 == 0x43687273)) ||
       ((iVar6 == 0x4d616e69 || ((iVar6 == 0x4d6f6e67 || (iVar6 == 0x526f6867)))))))) ||
     ((iVar6 == 0x4f756772 ||
      ((((iVar6 == 0x50686167 || (iVar6 == 0x50686c70)) || (iVar6 == 0x536f6764)) ||
       (iVar6 == 0x53797263)))))) {
    lVar5 = FUN_140361160(param_1);
    *(longlong *)(puVar4 + 2) = lVar5;
    if (lVar5 == 0) {
      thunk_FUN_1402d9040(puVar4);
      return (undefined4 *)0x0;
    }
  }
  return puVar4;
}

