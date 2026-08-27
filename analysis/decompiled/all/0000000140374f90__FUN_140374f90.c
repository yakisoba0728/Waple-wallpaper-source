// Function: FUN_140374f90
// Addr: 140374f90
// Size: 355 bytes


undefined1 FUN_140374f90(int *param_1,byte *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  cVar2 = FUN_140407b60(param_2,param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar5 = 0;
  uVar8 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (uVar8 != 0) {
    do {
      pbVar7 = (byte *)(ulonglong)(uint)param_1[6];
      lVar1 = uVar5 * 4;
      pcVar3 = "OUT-OF-RANGE";
      pbVar6 = param_2 + (lVar1 - *(longlong *)(param_1 + 2)) + 6;
      if (pbVar6 <= pbVar7) {
        pcVar3 = "OK";
      }
      FUN_1402fc370("SANITIZE",param_2 + lVar1 + 6,0,1,*param_1 + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",param_2 + lVar1 + 6,
                    *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
      if (((pbVar7 < pbVar6) ||
          (cVar2 = FUN_1404093d0(param_2 + lVar1 + 4,param_1,param_2), cVar2 == '\0')) ||
         ((uVar4 = (uint)param_2[lVar1 + 5] + (uint)param_2[lVar1 + 4] * 0x100, uVar4 != 0 &&
          (cVar2 = FUN_140400fb0(param_2 + uVar4,param_1), cVar2 == '\0')))) {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar8);
  }
  return 1;
}

