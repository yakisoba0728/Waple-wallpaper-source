// Function: FUN_140331250
// Addr: 140331250
// Size: 134 bytes


int FUN_140331250(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x58) == 3) {
    return 0;
  }
  puVar3 = *(ushort **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = 3;
  if (puVar3 == (ushort *)0x0) {
    return 3;
  }
  iVar6 = 0;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *puVar3 = *puVar3 + 1;
    goto LAB_140331304;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar4 + 0xc) < *(ushort *)(lVar4 + 0x60) + 1 + (uint)*(ushort *)(lVar4 + 0x18)) {
    iVar7 = FUN_1402f0940(lVar4,0,1);
    if (iVar7 == 0) goto code_r0x0001403312e2;
  }
  else {
    iVar7 = 0;
code_r0x0001403312e2:
    if (*puVar3 != 0) {
      *(ushort *)(*(longlong *)(puVar3 + 0xc) + -2 + (ulonglong)*puVar3 * 2) = puVar3[1] - 1;
    }
    *puVar3 = *puVar3 + 1;
  }
  if (iVar7 != 0) {
    return iVar7;
  }
LAB_140331304:
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((*(ushort *)(lVar4 + 0x62) + 1 + (uint)*(ushort *)(lVar4 + 0x1a) <= *(uint *)(lVar4 + 8)) ||
     (iVar6 = FUN_1402f0940(lVar4,1,0), iVar6 == 0)) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    puVar3 = (ushort *)(lVar4 + 2);
    if (*(char *)(param_1 + 0x5c) != '\0') {
      uVar2 = *puVar3;
      lVar5 = *(longlong *)(lVar4 + 0x10);
      piVar1 = (int *)(*(longlong *)(lVar4 + 8) + (ulonglong)uVar2 * 8);
      iVar7 = FUN_1402f4c30(param_2);
      *piVar1 = iVar7 >> 0x10;
      iVar7 = FUN_1402f4c30(param_3);
      piVar1[1] = iVar7 >> 0x10;
      *(undefined1 *)(lVar5 + (ulonglong)uVar2) = 1;
    }
    *puVar3 = *puVar3 + 1;
  }
  return iVar6;
}

