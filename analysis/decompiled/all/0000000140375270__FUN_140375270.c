// Function: FUN_140375270
// Addr: 140375270
// Size: 231 bytes


undefined8 FUN_140375270(int *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pbVar1 = (byte *)(param_2 + 1);
  uVar4 = (ulonglong)(uint)param_1[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar5 = (longlong)pbVar1 - *(longlong *)(param_1 + 2);
  cVar2 = '\x01';
  if (uVar5 <= uVar4) {
    pcVar3 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
  if ((uVar5 <= uVar4) && (*param_2 == cVar2)) {
    cVar2 = FUN_1404078b0(pbVar1,param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_1403fb470(pbVar1 + ((ulonglong)(byte)param_2[2] + 1 + (ulonglong)*pbVar1 * 0x100)
                                     * 2,param_1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

