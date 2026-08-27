// Function: FUN_1403cb6d0
// Addr: 1403cb6d0
// Size: 393 bytes


int FUN_1403cb6d0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  pbVar8 = (byte *)((ulonglong)*(byte *)(param_1 + 8) * 0x100 +
                   (ulonglong)*(byte *)(param_1 + 9) + param_1);
  uVar3 = (param_2 - (uint)pbVar8[1]) + (uint)*pbVar8 * -0x100;
  if (uVar3 < (uint)pbVar8[3] + (uint)pbVar8[2] * 0x100) {
    iVar7 = (uint)pbVar8[(ulonglong)uVar3 * 2 + 5] + (uint)pbVar8[(ulonglong)uVar3 * 2 + 4] * 0x100;
  }
  else {
    iVar7 = 0;
  }
  pbVar8 = (byte *)((ulonglong)*(byte *)(param_1 + 10) * 0x100 +
                   (ulonglong)*(byte *)(param_1 + 0xb) + param_1);
  uVar3 = (param_3 - (uint)pbVar8[1]) + (uint)*pbVar8 * -0x100;
  if (uVar3 < (uint)pbVar8[3] + (uint)pbVar8[2] * 0x100) {
    iVar6 = (uint)pbVar8[(ulonglong)uVar3 * 2 + 5] + (uint)pbVar8[(ulonglong)uVar3 * 2 + 4] * 0x100;
  }
  else {
    iVar6 = 0;
  }
  uVar9 = (ulonglong)*(uint *)(param_4 + 0x40);
  lVar5 = (ulonglong)*(byte *)(param_1 + 0xc) * 0x100 +
          (ulonglong)*(byte *)(param_1 + 0xd) + param_1;
  iVar4 = (int)lVar5;
  pcVar2 = "OUT-OF-RANGE";
  uVar3 = (uint)(((int)param_1 - iVar4) + iVar6 + iVar7) >> 1;
  if ((uint)(iVar6 + iVar7) < (uint)(iVar4 - (int)param_1)) {
    uVar3 = 0x3fffffff;
  }
  pbVar1 = (byte *)(lVar5 + (ulonglong)uVar3 * 2);
  pbVar8 = pbVar1 + 2;
  uVar10 = (longlong)pbVar8 - *(longlong *)(param_4 + 0x30);
  if (uVar10 <= uVar9) {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar8,0,1,*(int *)(param_4 + 0x28) + 1,0,
                "check_point [%p] in [%p..%p] -> %s",pbVar8,*(longlong *)(param_4 + 0x30),
                *(undefined8 *)(param_4 + 0x38),pcVar2);
  if (uVar9 < uVar10) {
    return 0;
  }
  return (int)(short)((ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1]);
}

