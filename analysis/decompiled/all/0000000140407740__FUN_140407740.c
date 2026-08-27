// Function: FUN_140407740
// Addr: 140407740
// Size: 363 bytes


ulonglong FUN_140407740(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  
  pbVar1 = param_1 + 4;
  uVar7 = (ulonglong)(uint)param_2[6];
  pcVar5 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  pcVar2 = "OUT-OF-RANGE";
  if (uVar9 <= uVar7) {
    pcVar2 = "OK";
  }
  iVar6 = 0;
  uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar9 <= uVar7) {
    uVar3 = 0;
    uVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar4 != 0xffffffff) {
      if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_2 + 2))
           ) || ((uint)(param_2[4] - (int)pbVar1) < uVar4)) ||
         (param_2[7] = param_2[7] - uVar4, param_2[7] <= iVar6)) {
        cVar8 = '\0';
      }
      else {
        cVar8 = '\x01';
      }
      if (cVar8 != '\0') {
        pcVar5 = "OK";
      }
      uVar7 = 1;
      uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                            "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,
                            pbVar1 + uVar4,uVar4,*(longlong *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4),pcVar5);
      if (cVar8 != '\0') {
        return uVar7 & 0xff;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

