// Function: FUN_140405820
// Addr: 140405820
// Size: 486 bytes


ulonglong FUN_140405820(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  
  pcVar7 = "OUT-OF-RANGE";
  lVar1 = param_1 + 10;
  pcVar3 = "OUT-OF-RANGE";
  uVar12 = lVar1 - *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  if (uVar12 <= uVar10) {
    pcVar3 = "OK";
  }
  iVar9 = 0;
  uVar4 = FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        lVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar12 <= uVar10) {
    uVar6 = (uint)*(byte *)(param_1 + 3) * 0x10000 + (uint)*(byte *)(param_1 + 4) * 0x100 +
            (uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 5);
    if (uVar6 == 0) {
      pbVar8 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar8 = (byte *)((ulonglong)uVar6 + param_1);
    }
    pbVar2 = pbVar8 + 2;
    uVar10 = (ulonglong)(uint)param_2[6];
    uVar12 = (longlong)pbVar2 - *(longlong *)(param_2 + 2);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
    uVar4 = FUN_1402fc370("SANITIZE",pbVar2);
    if (uVar12 <= uVar10) {
      iVar5 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
      uVar6 = iVar5 * 0xc;
      if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar2 - *(longlong *)(param_2 + 2))
           ) || ((uint)(param_2[4] - (int)pbVar2) < uVar6)) ||
         (param_2[7] = param_2[7] + iVar5 * -0xc, param_2[7] <= iVar9)) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x01';
      }
      if (cVar11 != '\0') {
        pcVar7 = "OK";
      }
      uVar10 = 1;
      uVar4 = FUN_1402fc370("SANITIZE",pbVar2,0,1,*param_2 + 1,0,
                            "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar2,
                            pbVar2 + uVar6,CONCAT44(uVar13,uVar6),*(longlong *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4),pcVar7);
      if (cVar11 != '\0') {
        return uVar10 & 0xff;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

