// Function: FUN_14035ab70
// Addr: 14035ab70
// Size: 279 bytes


uint FUN_14035ab70(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x3c);
  if (((*(char *)(param_1 + 0x20) == '\0') &&
      (uVar5 = *(uint *)(param_1 + 0x18), uVar5 < *(uint *)(param_1 + 0x1c))) &&
     (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44))) {
LAB_14035ac46:
    *(uint *)(param_1 + 0x18) = uVar5 + uVar6;
    iVar2 = -(uVar5 & 7);
    iVar7 = iVar2 + 8;
    pbVar8 = (byte *)(param_1 + 9 + (ulonglong)(uVar5 >> 3));
    uVar6 = uVar6 - iVar7;
    uVar5 = (uint)(*(byte *)((ulonglong)(uVar5 >> 3) + 8 + param_1) >> (sbyte)(uVar5 & 7));
    if (7 < uVar6) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar5 = (uint)bVar1 << ((byte)iVar7 & 0x1f) | uVar5;
      iVar7 = iVar2 + 0x10;
      uVar6 = uVar6 - 8;
    }
    if (uVar6 != 0) {
      return uVar5 | ((1 << ((byte)uVar6 & 0x1f)) - 1U & (uint)*pbVar8) << ((byte)iVar7 & 0x1f);
    }
  }
  else {
    if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44)) {
LAB_14035abd8:
      if (*(char *)(param_1 + 0x20) != '\0') {
        uVar6 = 9;
        *(undefined4 *)(param_1 + 0x44) = 0x100;
        *(undefined4 *)(param_1 + 0x3c) = 9;
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        uVar3 = FUN_1402f5dc0(*(undefined8 *)(param_1 + 200),param_1 + 8,uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c);
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (ulonglong)uVar3;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(uint *)(param_1 + 4) = (uint)(uVar3 < uVar5);
        uVar4 = uVar3 * 8;
        *(uint *)(param_1 + 0x1c) = uVar4;
        if ((uVar5 < uVar4) && (*(uint *)(param_1 + 0x1c) = (uVar4 - uVar5) + 1, uVar3 != 0)) {
          uVar5 = 0;
          goto LAB_14035ac46;
        }
      }
    }
    else {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0x3c) = uVar6;
      if (uVar6 < 0x11) {
        if (uVar6 < *(uint *)(param_1 + 0x30)) {
          iVar2 = (1 << ((byte)uVar6 & 0x1f)) + -0x100;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x38) + 1;
        }
        *(int *)(param_1 + 0x44) = iVar2;
        goto LAB_14035abd8;
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

