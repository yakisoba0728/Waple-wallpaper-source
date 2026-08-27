// Function: FUN_1403fbe20
// Addr: 1403fbe20
// Size: 352 bytes


ulonglong FUN_1403fbe20(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  ulonglong uVar9;
  
  pcVar5 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 2;
  pcVar2 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar4 = (ulonglong)(uint)param_2[6];
  if (uVar9 <= uVar4) {
    pcVar2 = "OK";
  }
  iVar6 = 0;
  uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar9 <= uVar4) {
    uVar3 = 0;
    uVar7 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (7 < uVar7) {
      if ((((ulonglong)(uint)param_2[6] <
            (ulonglong)((longlong)param_1 - *(longlong *)(param_2 + 2))) ||
          ((uint)(param_2[4] - (int)param_1) < uVar7)) ||
         (param_2[7] = param_2[7] - uVar7, param_2[7] <= iVar6)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x01';
      }
      if (cVar8 != '\0') {
        pcVar5 = "OK";
      }
      uVar3 = FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                            "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                            param_1 + uVar7,uVar7,*(longlong *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4),pcVar5);
      if (cVar8 != '\0') {
        uVar4 = FUN_1403790f0(param_1,param_2);
        return uVar4;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

