// Function: FUN_14040b4c0
// Addr: 14040b4c0
// Size: 192 bytes


void FUN_14040b4c0(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0x80;
  FUN_1403b1ed0(param_2);
  if (param_3 == 0x4d6f6e67) {
    uVar4 = *(uint *)(param_2 + 0x60);
    uVar7 = 1;
    lVar6 = *(longlong *)(param_2 + 0x70);
    if (1 < uVar4) {
      do {
        iVar5 = *(int *)(lVar6 + (ulonglong)uVar7 * 0x14);
        if ((iVar5 - 0x180bU < 3) || (iVar5 == 0x180f)) {
          *(undefined1 *)(lVar6 + (ulonglong)uVar7 * 0x14 + 0x13) =
               *(undefined1 *)(lVar6 + 0x13 + (ulonglong)(uVar7 - 1) * 0x14);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  uVar4 = *(uint *)(param_2 + 0x60);
  uVar7 = 0;
  lVar6 = *(longlong *)(param_2 + 0x70);
  if (uVar4 != 0) {
    lVar8 = 0;
    do {
      uVar7 = uVar7 + 1;
      lVar2 = lVar8 * 0x14;
      lVar3 = lVar8 * 0x14;
      lVar8 = lVar8 + 1;
      puVar1 = (uint *)(lVar6 + lVar2 + 4);
      *puVar1 = *puVar1 | *(uint *)(param_1 + (ulonglong)*(byte *)(lVar6 + 0x13 + lVar3) * 4);
    } while (uVar7 < uVar4);
  }
  return;
}

