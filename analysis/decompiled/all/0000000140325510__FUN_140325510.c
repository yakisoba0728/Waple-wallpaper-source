// Function: FUN_140325510
// Addr: 140325510
// Size: 153 bytes


void FUN_140325510(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  uVar9 = 0;
  uVar2 = *(ushort *)(lVar4 + 0x62);
  uVar3 = *(ushort *)(lVar4 + 0x60);
  iVar7 = uVar2 - 1;
  if (uVar3 != 0) {
    uVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x78) + -2 + (ulonglong)uVar3 * 2);
  }
  iVar8 = (int)uVar9;
  iVar6 = iVar7 - iVar8;
  if (iVar8 < iVar7) {
    lVar5 = *(longlong *)(lVar4 + 0x68);
    piVar1 = (int *)(lVar5 + uVar9 * 8);
    if ((*piVar1 == *(int *)(lVar5 + -8 + (ulonglong)uVar2 * 8)) &&
       (piVar1[1] == *(int *)(lVar5 + (ulonglong)uVar2 * 8 + -4))) {
      iVar7 = uVar2 - 2;
      *(ushort *)(lVar4 + 0x62) = uVar2 - 1;
      iVar6 = iVar7 - iVar8;
      goto LAB_140325581;
    }
  }
  else {
LAB_140325581:
    if (SBORROW4(iVar7,iVar8) != iVar6 < 0) goto LAB_140325591;
  }
  *(short *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)uVar3 * 2) = (short)iVar7;
  *(short *)(lVar4 + 0x60) = *(short *)(lVar4 + 0x60) + 1;
LAB_140325591:
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

