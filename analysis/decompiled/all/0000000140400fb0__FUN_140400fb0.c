// Function: FUN_140400fb0
// Addr: 140400fb0
// Size: 565 bytes


ulonglong FUN_140400fb0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  pbVar1 = param_1 + 2;
  pcVar4 = "OUT-OF-RANGE";
  uVar8 = 1;
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  if (uVar9 <= uVar10) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if (uVar10 < uVar9) {
    return 0;
  }
  iVar7 = (int)uVar8;
  iVar5 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) - iVar7;
  if (iVar5 == 0) {
    param_1 = param_1 + 6;
  }
  else {
    if (iVar5 != iVar7) {
      if (iVar5 - iVar7 != iVar7) {
        return uVar8 & 0xff;
      }
      lVar2 = *(longlong *)(param_2 + 2);
      uVar8 = (ulonglong)(uint)param_2[6];
      FUN_1402fc370("SANITIZE",param_1 + 10,0);
      if ((((((ulonglong)((longlong)(param_1 + 10) - lVar2) <= uVar8) &&
            (cVar3 = FUN_1404093d0(param_1 + 6,param_2,param_1), cVar3 != '\0')) &&
           ((uVar6 = (uint)param_1[7] + (uint)param_1[6] * 0x100, uVar6 == 0 ||
            (cVar3 = FUN_140403500(param_1 + uVar6,param_2), cVar3 != '\0')))) &&
          (cVar3 = FUN_1404093d0(param_1 + 8,param_2,param_1), cVar3 != '\0')) &&
         ((uVar6 = (uint)param_1[9] + (uint)param_1[8] * 0x100, uVar6 == 0 ||
          (cVar3 = FUN_140403500(param_1 + uVar6,param_2), cVar3 != '\0')))) {
        return 1;
      }
      return 0;
    }
    param_1 = param_1 + 8;
  }
  uVar10 = (longlong)param_1 - *(longlong *)(param_2 + 2);
  uVar8 = (ulonglong)(uint)param_2[6];
  FUN_1402fc370("SANITIZE",param_1,0);
  return (ulonglong)(uVar10 <= uVar8);
}

