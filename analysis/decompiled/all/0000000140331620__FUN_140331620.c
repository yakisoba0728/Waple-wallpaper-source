// Function: FUN_140331620
// Addr: 140331620
// Size: 59 bytes


int FUN_140331620(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    return 0;
  }
  puVar3 = *(ushort **)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x59) == '\0') {
    *puVar3 = *puVar3 + 1;
    goto code_r0x0001403316b6;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar4 + 0xc) < *(ushort *)(lVar4 + 0x60) + 1 + (uint)*(ushort *)(lVar4 + 0x18)) {
    iVar6 = FUN_1402f0940(lVar4,0,1);
    if (iVar6 == 0) goto code_r0x000140331694;
  }
  else {
    iVar6 = 0;
code_r0x000140331694:
    if (*puVar3 != 0) {
      *(ushort *)(*(longlong *)(puVar3 + 0xc) + -2 + (ulonglong)*puVar3 * 2) = puVar3[1] - 1;
    }
    *puVar3 = *puVar3 + 1;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
code_r0x0001403316b6:
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((*(uint *)(lVar4 + 8) < *(ushort *)(lVar4 + 0x62) + 1 + (uint)*(ushort *)(lVar4 + 0x1a)) &&
     (iVar6 = FUN_1402f0940(lVar4,1,0), iVar6 != 0)) {
    return iVar6;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    uVar2 = *(ushort *)(lVar4 + 2);
    piVar1 = (int *)(*(longlong *)(lVar4 + 8) + (ulonglong)uVar2 * 8);
    lVar5 = *(longlong *)(lVar4 + 0x10);
    *piVar1 = param_2 >> 10;
    piVar1[1] = param_3 >> 10;
    *(undefined1 *)(lVar5 + (ulonglong)uVar2) = 1;
  }
  *(short *)(lVar4 + 2) = *(short *)(lVar4 + 2) + 1;
  return 0;
}

