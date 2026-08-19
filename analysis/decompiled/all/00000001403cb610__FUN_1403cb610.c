// Function: FUN_1403cb610
// Addr: 1403cb610
// Size: 181 bytes


void FUN_1403cb610(longlong param_1,int param_2,int param_3,longlong param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)((ulonglong)*(byte *)(param_1 + 10) * 0x100 +
                   (ulonglong)*(byte *)(param_1 + 0xb) + param_1);
  uVar2 = (param_2 - (uint)pbVar7[1]) + (uint)*pbVar7 * -0x100;
  if (uVar2 < (uint)pbVar7[3] + (uint)pbVar7[2] * 0x100) {
    iVar6 = (uint)pbVar7[(ulonglong)uVar2 * 2 + 5] + (uint)pbVar7[(ulonglong)uVar2 * 2 + 4] * 0x100;
  }
  else {
    iVar6 = 0;
  }
  pbVar7 = (byte *)((ulonglong)*(byte *)(param_1 + 0xc) * 0x100 +
                   (ulonglong)*(byte *)(param_1 + 0xd) + param_1);
  uVar2 = (param_3 - (uint)pbVar7[1]) + (uint)*pbVar7 * -0x100;
  if (uVar2 < (uint)pbVar7[3] + (uint)pbVar7[2] * 0x100) {
    iVar5 = (uint)pbVar7[(ulonglong)uVar2 * 2 + 5] + (uint)pbVar7[(ulonglong)uVar2 * 2 + 4] * 0x100;
  }
  else {
    iVar5 = 0;
  }
  lVar4 = (ulonglong)*(byte *)(param_1 + 0xe) * 0x100 +
          (ulonglong)*(byte *)(param_1 + 0xf) + param_1;
  iVar3 = (int)lVar4;
  pcVar1 = "OUT-OF-RANGE";
  uVar2 = (uint)(((int)param_1 - iVar3) + iVar5 + iVar6) >> 1;
  if ((uint)(iVar5 + iVar6) < (uint)(iVar3 - (int)param_1)) {
    uVar2 = 0x3fffffff;
  }
  lVar4 = lVar4 + (ulonglong)uVar2 * 2 + 2;
  if ((ulonglong)(lVar4 - *(longlong *)(param_4 + 0x30)) <= (ulonglong)*(uint *)(param_4 + 0x40)) {
    pcVar1 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar4,0,1,*(int *)(param_4 + 0x28) + 1,0,
                "check_point [%p] in [%p..%p] -> %s",lVar4,*(longlong *)(param_4 + 0x30),
                *(undefined8 *)(param_4 + 0x38),pcVar1);
}

