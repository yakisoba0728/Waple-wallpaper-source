// Function: FUN_1403740e0
// Addr: 1403740e0
// Size: 376 bytes


ulonglong FUN_1403740e0(int *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  
  pbVar1 = param_2 + 4;
  uVar8 = (ulonglong)(uint)param_1[6];
  pcVar6 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  pcVar3 = "OUT-OF-RANGE";
  if (uVar10 <= uVar8) {
    pcVar3 = "OK";
  }
  uVar4 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
  if (uVar10 <= uVar8) {
    iVar7 = (uint)*param_2 * 0x100 + (uint)param_2[1];
    iVar5 = (uint)param_2[2] * 0x100 + (uint)param_2[3];
    uVar2 = (iVar7 + iVar5 * 2) * 2 - 2;
    if (iVar7 == 0) {
      uVar2 = iVar5 * 4;
    }
    if ((((ulonglong)(uint)param_1[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_1 + 2)))
        || ((uint)(param_1[4] - (int)pbVar1) < uVar2)) ||
       (param_1[7] = param_1[7] - uVar2, param_1[7] < 1)) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
    }
    if (cVar9 != '\0') {
      pcVar6 = "OK";
    }
    uVar8 = 1;
    uVar4 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,
                          "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,pbVar1 + uVar2,
                          uVar2,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar6);
    if (cVar9 != '\0') {
      return uVar8 & 0xff;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

