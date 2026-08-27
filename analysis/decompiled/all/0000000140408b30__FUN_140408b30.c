// Function: FUN_140408b30
// Addr: 140408b30
// Size: 369 bytes


ulonglong FUN_140408b30(byte *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  
  pcVar6 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 8;
  pcVar3 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar8 = (ulonglong)(uint)param_2[6];
  if (uVar10 <= uVar8) {
    pcVar3 = "OK";
  }
  iVar7 = 0;
  uVar4 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar10 <= uVar8) {
    uVar4 = 0;
    uVar5 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar5 < 0x2aaaaaaa) {
      param_1 = param_1 + 0x10;
      uVar2 = uVar5 * 6;
      if ((((ulonglong)(uint)param_2[6] <
            (ulonglong)((longlong)param_1 - *(longlong *)(param_2 + 2))) ||
          ((uint)(param_2[4] - (int)param_1) < uVar2)) ||
         (param_2[7] = param_2[7] + uVar5 * -6, param_2[7] <= iVar7)) {
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x01';
      }
      if (cVar9 != '\0') {
        pcVar6 = "OK";
      }
      uVar8 = 1;
      uVar4 = FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                            "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                            param_1 + uVar2,uVar2,*(longlong *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4),pcVar6);
      if (cVar9 != '\0') {
        return uVar8 & 0xff;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

