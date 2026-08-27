// Function: FUN_1404049a0
// Addr: 1404049a0
// Size: 527 bytes


bool FUN_1404049a0(byte *param_1,int *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong uVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  
  pcVar4 = "OUT-OF-RANGE";
  pbVar2 = param_1 + 0x4e;
  pcVar1 = "OUT-OF-RANGE";
  uVar5 = 1;
  uVar6 = (longlong)pbVar2 - *(longlong *)(param_2 + 2);
  uVar3 = (ulonglong)(uint)param_2[6];
  if (uVar6 <= uVar3) {
    pcVar1 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar2,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar2,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
  if (uVar3 < uVar6) {
    return false;
  }
  if (uVar5 <= (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    uVar3 = (ulonglong)(uint)param_2[6];
    uVar6 = (longlong)(pbVar2 + 8) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",pbVar2 + 8,0);
    if (uVar3 < uVar6) {
      return false;
    }
  }
  if (1 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    pbVar2 = param_1 + 0x60;
    uVar3 = (ulonglong)(uint)param_2[6];
    uVar6 = (longlong)pbVar2 - *(longlong *)(param_2 + 2);
    pcVar1 = "OUT-OF-RANGE";
    if (uVar6 <= uVar3) {
      pcVar1 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar2,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar2,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar1);
    if (uVar3 < uVar6) {
      return false;
    }
  }
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] < 5) {
    return true;
  }
  param_1 = param_1 + 100;
  uVar6 = (ulonglong)(uint)param_2[6];
  uVar3 = (longlong)param_1 - *(longlong *)(param_2 + 2);
  if (uVar3 <= uVar6) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  return uVar3 <= uVar6;
}

