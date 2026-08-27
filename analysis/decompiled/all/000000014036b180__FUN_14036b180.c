// Function: FUN_14036b180
// Addr: 14036b180
// Size: 446 bytes


ulonglong FUN_14036b180(int *param_1,byte *param_2,undefined8 param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pbVar1 = param_2 + 8;
  uVar8 = (ulonglong)(uint)param_1[6];
  iVar2 = *param_4;
  uVar7 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  pcVar4 = "OUT-OF-RANGE";
  uVar6 = 1;
  if (uVar7 <= uVar8) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar4);
  if (uVar7 <= uVar8) {
    iVar5 = (uint)*param_2 * 0x100 + (uint)param_2[1];
    if (iVar5 == (int)uVar6) {
      uVar8 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
      uVar6 = (ulonglong)(uint)param_1[6];
      FUN_1402fc370("SANITIZE",pbVar1);
      if (uVar6 < uVar8) {
        return 0;
      }
      cVar3 = FUN_140409750(pbVar1,param_1,iVar2 + 1);
    }
    else {
      if (iVar5 - (int)uVar6 != 2) {
        return uVar6 & 0xff;
      }
      uVar6 = (ulonglong)(uint)param_1[6];
      uVar8 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
      FUN_1402fc370("SANITIZE",pbVar1,0);
      if (uVar6 < uVar8) {
        return 0;
      }
      cVar3 = FUN_140409660(pbVar1,param_1,iVar2 + 1);
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}

