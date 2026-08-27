// Function: FUN_140403500
// Addr: 140403500
// Size: 650 bytes


ulonglong FUN_140403500(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  
  pbVar1 = param_1 + 6;
  uVar12 = (ulonglong)(uint)param_2[6];
  pcVar6 = "OUT-OF-RANGE";
  pcVar3 = "OUT-OF-RANGE";
  uVar11 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar9 = 1;
  if (uVar11 <= uVar12) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar12 < uVar11) {
    return 0;
  }
  iVar7 = (int)uVar9;
  iVar4 = ((uint)param_1[4] * 0x100 + (uint)param_1[5]) - iVar7;
  if (((iVar4 != 0) && (iVar4 = iVar4 - iVar7, iVar4 != 0)) && (iVar4 != iVar7)) {
    if (iVar4 - iVar7 == 0x7ffd) {
      lVar2 = *(longlong *)(param_2 + 2);
      uVar9 = (ulonglong)(uint)param_2[6];
      FUN_1402fc370("SANITIZE");
      return (ulonglong)((ulonglong)((longlong)pbVar1 - lVar2) <= uVar9);
    }
    goto LAB_140403766;
  }
  uVar12 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar9 = (ulonglong)(uint)param_2[6];
  uVar13 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  FUN_1402fc370("SANITIZE",pbVar1);
  if (uVar9 < uVar12) {
    return 0;
  }
  iVar4 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (iVar4 - 1U < 3) {
    uVar5 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    uVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar5 < uVar8) goto LAB_1404036cd;
    uVar5 = (uVar5 - uVar8 >> (4U - (char)iVar4 & 0x1f)) * 2 + 8;
  }
  else {
LAB_1404036cd:
    uVar5 = 6;
  }
  if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)param_1 - *(longlong *)(param_2 + 2)))
      || ((uint)(param_2[4] - (int)param_1) < uVar5)) ||
     (param_2[7] = param_2[7] - uVar5, param_2[7] < 1)) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  if (cVar10 != '\0') {
    pcVar6 = "OK";
  }
  uVar9 = 1;
  FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,param_1 + uVar5,
                CONCAT44(uVar13,uVar5),*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),
                pcVar6);
  if (cVar10 == '\0') {
    return 0;
  }
LAB_140403766:
  return uVar9 & 0xff;
}

