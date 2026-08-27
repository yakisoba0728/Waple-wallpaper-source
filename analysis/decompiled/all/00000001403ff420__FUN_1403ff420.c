// Function: FUN_1403ff420
// Addr: 1403ff420
// Size: 483 bytes


undefined8 FUN_1403ff420(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  pcVar4 = "OUT-OF-RANGE";
  lVar1 = param_1 + 10;
  uVar8 = lVar1 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  if (uVar8 <= uVar7) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if (uVar7 < uVar8) {
    return 0;
  }
  local_38 = param_1 + 4;
  local_30 = (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) & 0xf] +
             (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) >> 4];
  local_28 = (ulonglong)
             (((uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) >> 4] +
              (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) & 0xf] + local_30) * 2 + 2);
  cVar3 = FUN_1404093d0(param_1 + 2,param_2,param_1);
  if ((cVar3 == '\0') ||
     (((uVar5 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100, uVar5 != 0 &&
       (cVar3 = FUN_140374b40(param_2,(ulonglong)uVar5 + param_1), cVar3 == '\0')) ||
      (cVar3 = FUN_1404078b0(param_1 + 8,param_2), cVar3 == '\0')))) {
    return 0;
  }
  uVar7 = 0;
  uVar5 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
  if (uVar5 != 0) {
    do {
      pbVar2 = (byte *)(param_1 + 10 + uVar7 * 2);
      cVar3 = FUN_1404093d0(pbVar2,param_2,param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar6 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
      if ((uVar6 != 0) &&
         (cVar3 = FUN_1403ff910((ulonglong)uVar6 + param_1,param_2,&local_38), cVar3 == '\0')) {
        return 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar5);
  }
  return 1;
}

