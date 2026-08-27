// Function: FUN_1404013e0
// Addr: 1404013e0
// Size: 484 bytes


ulonglong FUN_1404013e0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  pbVar1 = param_1 + 2;
  uVar9 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar8 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar7 = 1;
  if (uVar8 <= uVar9) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar9 < uVar8) {
    return 0;
  }
  iVar6 = (int)uVar7;
  iVar4 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) - iVar6;
  if (iVar4 == 0) {
    param_1 = param_1 + 0xc;
  }
  else {
    iVar4 = iVar4 - iVar6;
    if (iVar4 == 0) {
      param_1 = param_1 + 0x14;
    }
    else {
      if (iVar4 != iVar6) {
        if (iVar4 - iVar6 != iVar6) {
          return uVar7 & 0xff;
        }
        pbVar5 = param_1 + 8;
        uVar7 = (ulonglong)(uint)param_2[6];
        uVar9 = (longlong)pbVar5 - *(longlong *)(param_2 + 2);
        FUN_1402fc370("SANITIZE",pbVar5,0);
        if (uVar7 < uVar9) {
          return 0;
        }
        cVar2 = FUN_140409840(pbVar5,param_2,(uint)param_1[3] + (uint)*pbVar1 * 0x100);
        if (cVar2 == '\0') {
          return 0;
        }
        return 1;
      }
      param_1 = param_1 + 0x10;
    }
  }
  uVar9 = (longlong)param_1 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  FUN_1402fc370("SANITIZE",param_1,0);
  return (ulonglong)(uVar9 <= uVar7);
}

