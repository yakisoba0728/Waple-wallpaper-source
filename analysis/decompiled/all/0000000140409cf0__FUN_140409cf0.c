// Function: FUN_140409cf0
// Addr: 140409cf0
// Size: 226 bytes


undefined8 FUN_140409cf0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pbVar1 = param_1 + 10;
  uVar4 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar5 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar5 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (uVar5 <= uVar4) {
    if (3 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
      cVar2 = FUN_14036f0c0(param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

