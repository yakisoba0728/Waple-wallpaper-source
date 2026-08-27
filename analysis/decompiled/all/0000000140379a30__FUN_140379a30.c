// Function: FUN_140379a30
// Addr: 140379a30
// Size: 476 bytes


ulonglong FUN_140379a30(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pbVar1 = param_1 + 1;
  pcVar3 = "OUT-OF-RANGE";
  uVar5 = 1;
  uVar6 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar7) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar6 <= uVar7) {
    uVar4 = (uint)uVar5;
    if (*param_1 == uVar4) {
      uVar5 = (ulonglong)(uint)param_2[6];
      uVar7 = (longlong)(param_1 + 9) - *(longlong *)(param_2 + 2);
      FUN_1402fc370("SANITIZE",param_1 + 9,0);
      return (ulonglong)(uVar7 <= uVar5);
    }
    if (*param_1 - uVar4 != uVar4) {
LAB_140379b96:
      return uVar5 & 0xff;
    }
    uVar7 = (ulonglong)(uint)param_2[6];
    uVar6 = (longlong)(param_1 + 0xd) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 0xd,0);
    if (uVar6 <= uVar7) {
      lVar2 = *(longlong *)(param_2 + 2);
      uVar7 = (ulonglong)(uint)param_2[6];
      FUN_1402fc370("SANITIZE",param_1 + 9,0);
      if ((ulonglong)((longlong)(param_1 + 9) - lVar2) <= uVar7) goto LAB_140379b96;
    }
  }
  return 0;
}

