// Function: FUN_140375bd0
// Addr: 140375bd0
// Size: 225 bytes


undefined8 FUN_140375bd0(int *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pbVar1 = param_2 + 4;
  uVar4 = (ulonglong)(uint)param_1[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar5 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  if (uVar5 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
  if (uVar5 <= uVar4) {
    cVar2 = FUN_140409840(pbVar1,param_1,
                          ((uint)param_2[2] * 0x100 + (uint)param_2[3]) *
                          ((uint)*param_2 * 0x100 + (uint)param_2[1]));
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

