// Function: FUN_14040d210
// Addr: 14040d210
// Size: 647 bytes


void FUN_14040d210(undefined1 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  
  if ((*(int *)(param_2 + 0x5c) != *(int *)(param_2 + 0x60)) || (param_1[0x18] != '\0')) {
    pcVar11 = "OUT-OF-RANGE";
    uVar7 = (*(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x1c) * 0x14) +
             (uint)*(byte *)(param_4 + 4) * 0x100 + (uint)*(byte *)(param_4 + 5)) * 2;
    iVar9 = (int)*(longlong *)(param_1 + 0x20);
    pcVar6 = "OUT-OF-RANGE";
    uVar8 = (ulonglong)((*(int *)(param_1 + 0x10) - iVar9) + uVar7 >> 1);
    if (uVar7 < (uint)(iVar9 - *(int *)(param_1 + 0x10))) {
      uVar8 = 0x3fffffff;
    }
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + uVar8 * 2);
    lVar3 = *(longlong *)(param_1 + 8);
    pbVar1 = pbVar2 + 2;
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x40);
    uVar10 = (longlong)pbVar1 - *(longlong *)(lVar3 + 0x30);
    if (uVar10 <= uVar8) {
      pcVar6 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*(int *)(lVar3 + 0x28) + 1,0,
                  "check_point [%p] in [%p..%p] -> %s",pbVar1,*(longlong *)(lVar3 + 0x30),
                  *(undefined8 *)(lVar3 + 0x38),pcVar6);
    if ((uVar10 <= uVar8) && ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0)) {
      uVar5 = *(int *)(param_2 + 0x5c) + 1;
      uVar7 = *(uint *)(param_2 + 0x60);
      if (uVar5 <= *(uint *)(param_2 + 0x60)) {
        uVar7 = uVar5;
      }
      FUN_14040eef0(param_2,*(undefined4 *)(param_1 + 0x1c),uVar7);
      FUN_1403f7fb0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),
                    (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]);
      *param_1 = 1;
    }
    uVar7 = *(int *)(param_2 + 0x60) - 1;
    if (*(uint *)(param_2 + 0x5c) <= uVar7) {
      uVar7 = *(uint *)(param_2 + 0x5c);
    }
    iVar9 = (int)*(longlong *)(param_1 + 0x20);
    lVar3 = *(longlong *)(param_1 + 8);
    uVar4 = (*(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar7 * 0x14) +
             (uint)*(byte *)(param_4 + 7) + (uint)*(byte *)(param_4 + 6) * 0x100) * 2;
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x40);
    uVar5 = (uVar4 - iVar9) + *(int *)(param_1 + 0x10) >> 1;
    if (uVar4 < (uint)(iVar9 - *(int *)(param_1 + 0x10))) {
      uVar5 = 0x3fffffff;
    }
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 2);
    pbVar1 = pbVar2 + 2;
    uVar10 = (longlong)pbVar1 - *(longlong *)(lVar3 + 0x30);
    if (uVar10 <= uVar8) {
      pcVar11 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*(int *)(lVar3 + 0x28) + 1,0,
                  "check_point [%p] in [%p..%p] -> %s",pbVar1,*(longlong *)(lVar3 + 0x30),
                  *(undefined8 *)(lVar3 + 0x38),pcVar11);
    if (uVar10 <= uVar8) {
      if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
        FUN_1403f7fb0(*(undefined8 *)(param_1 + 8),(ulonglong)uVar7,
                      (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]);
        *param_1 = 1;
      }
    }
    if ((*(byte *)(param_4 + 2) & 0x80) != 0) {
      param_1[0x18] = 1;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x5c);
    }
  }
  return;
}

