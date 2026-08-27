// Function: FUN_1404093d0
// Addr: 1404093d0
// Size: 202 bytes


ulonglong FUN_1404093d0(byte *param_1,int *param_2,ulonglong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar1 = param_1 + 2;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar2 = "OUT-OF-RANGE";
  uVar5 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar5 <= uVar6) {
    pcVar2 = "OK";
  }
  uVar3 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
  if (uVar5 <= uVar6) {
    lVar4 = (ulonglong)*param_1 * 0x100 + param_3;
    return CONCAT71((int7)((ulonglong)lVar4 >> 8),param_3 <= (ulonglong)param_1[1] + lVar4);
  }
  return uVar3 & 0xffffffffffffff00;
}

