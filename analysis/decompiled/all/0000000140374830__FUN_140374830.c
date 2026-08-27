// Function: FUN_140374830
// Addr: 140374830
// Size: 349 bytes


ulonglong FUN_140374830(int *param_1,byte *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  pbVar1 = param_2 + 2;
  uVar8 = (ulonglong)(uint)param_1[6];
  pcVar4 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  uVar7 = 1;
  if (uVar9 <= uVar8) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar4);
  if (uVar9 <= uVar8) {
    iVar5 = (uint)*param_2 * 0x100 + (uint)param_2[1];
    iVar6 = (int)uVar7;
    if (iVar5 != iVar6) {
      if (iVar5 - iVar6 != iVar6) {
        return uVar7 & 0xff;
      }
      uVar7 = FUN_140407340(pbVar1,param_1);
      return uVar7;
    }
    lVar2 = *(longlong *)(param_1 + 2);
    uVar7 = (ulonglong)(uint)param_1[6];
    FUN_1402fc370("SANITIZE",param_2 + 6,0);
    if (((ulonglong)((longlong)(param_2 + 6) - lVar2) <= uVar7) &&
       (cVar3 = FUN_1404078b0(param_2 + 4,param_1), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}

