// Function: FUN_1403312d0
// Addr: 1403312d0
// Size: 189 bytes


void FUN_1403312d0(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar6;
  
  puVar3 = *(ushort **)(param_1 + 0x28);
  if (puVar3 == (ushort *)0x0) {
    return;
  }
  uVar2 = *puVar3;
  if (uVar2 < 2) {
    uVar7 = 0;
    if (uVar2 == 0) goto LAB_14033131a;
  }
  else {
    uVar7 = (ulonglong)(*(ushort *)(*(longlong *)(puVar3 + 0xc) + -4 + (ulonglong)uVar2 * 2) + 1);
  }
  if ((uint)uVar7 == (uint)puVar3[1]) {
    *puVar3 = uVar2 - 1;
    return;
  }
LAB_14033131a:
  uVar8 = puVar3[1];
  uVar6 = (ulonglong)uVar8;
  uVar5 = (uint)uVar8;
  if (1 < uVar8) {
    lVar4 = *(longlong *)(puVar3 + 4);
    piVar1 = (int *)(lVar4 + uVar7 * 8);
    if (((*piVar1 == *(int *)(lVar4 + -8 + uVar6 * 8)) &&
        (piVar1[1] == *(int *)(lVar4 + -4 + uVar6 * 8))) &&
       (*(char *)(*(longlong *)(puVar3 + 8) + -1 + uVar6) == '\x01')) {
      uVar5 = (uint)(ushort)(uVar8 - 1);
      puVar3[1] = uVar8 - 1;
    }
  }
  if (uVar2 != 0) {
    uVar8 = (short)uVar5 - 1;
    if ((int)uVar7 == uVar5 - 1) {
      puVar3[1] = uVar8;
      *puVar3 = uVar2 - 1;
      return;
    }
    *(ushort *)(*(longlong *)(puVar3 + 0xc) + -2 + (ulonglong)uVar2 * 2) = uVar8;
  }
  return;
}

