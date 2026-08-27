// Function: FUN_14035be20
// Addr: 14035be20
// Size: 336 bytes


undefined4 * FUN_14035be20(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = (undefined4 *)_calloc_base(1,0x10);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  iVar6 = 0;
  do {
    if ((int)(uVar1 - 1) < 0) {
      uVar2 = 0;
      goto LAB_14035be7c;
    }
    uVar1 = uVar1 - 1 >> 1;
  } while (*(int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x24) != 0);
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x24 + 0x1c);
LAB_14035be7c:
  *puVar4 = uVar2;
  iVar5 = *(int *)(param_1 + 0x3c) + -1;
  if (-1 < iVar5) {
    do {
      uVar3 = (uint)(iVar5 + iVar6) >> 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24);
      if (uVar1 < 0x6c6a6d70) {
        if (0x6c6a6d6e < uVar1) {
          uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24 + 0x1c);
          goto LAB_14035bec1;
        }
        iVar6 = uVar3 + 1;
      }
      else {
        iVar5 = uVar3 - 1;
      }
    } while (iVar6 <= iVar5);
  }
  uVar2 = 0;
LAB_14035bec1:
  puVar4[1] = uVar2;
  iVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x3c) + -1;
  if (-1 < iVar6) {
    do {
      uVar3 = (uint)(iVar6 + iVar5) >> 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24);
      if (uVar1 < 0x766a6d70) {
        if (0x766a6d6e < uVar1) {
          uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24 + 0x1c);
          goto LAB_14035bf06;
        }
        iVar5 = uVar3 + 1;
      }
      else {
        iVar6 = uVar3 - 1;
      }
    } while (iVar5 <= iVar6);
  }
  uVar2 = 0;
LAB_14035bf06:
  puVar4[2] = uVar2;
  iVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x3c) + -1;
  if (-1 < iVar6) {
    do {
      uVar3 = (uint)(iVar6 + iVar5) >> 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24);
      if (uVar1 < 0x746a6d70) {
        if (0x746a6d6e < uVar1) {
          puVar4[3] = *(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24 + 0x1c);
          return puVar4;
        }
        iVar5 = uVar3 + 1;
      }
      else {
        iVar6 = uVar3 - 1;
      }
    } while (iVar5 <= iVar6);
  }
  puVar4[3] = 0;
  return puVar4;
}

