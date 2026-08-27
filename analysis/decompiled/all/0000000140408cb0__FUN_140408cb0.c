// Function: FUN_140408cb0
// Addr: 140408cb0
// Size: 339 bytes


ulonglong FUN_140408cb0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  
  pbVar1 = param_1 + 8;
  uVar8 = (ulonglong)(uint)param_2[6];
  pcVar6 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar2 = "OUT-OF-RANGE";
  if (uVar10 <= uVar8) {
    pcVar2 = "OK";
  }
  iVar7 = 0;
  uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar10 <= uVar8) {
    iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    uVar5 = iVar4 * 0x10;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar1) < uVar5)) ||
       (param_2[7] = param_2[7] + iVar4 * -0x10, param_2[7] <= iVar7)) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
    }
    if (cVar9 != '\0') {
      pcVar6 = "OK";
    }
    uVar8 = 1;
    uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                          "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,pbVar1 + uVar5,
                          uVar5,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
    if (cVar9 != '\0') {
      return uVar8 & 0xff;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

