// Function: FUN_140373f40
// Addr: 140373f40
// Size: 413 bytes


undefined1 FUN_140373f40(int *param_1,byte *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_38 [2];
  byte *local_30;
  
  cVar2 = FUN_140407340(param_2,param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar7 = 0;
  uVar6 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (uVar6 != 0) {
    do {
      uVar9 = (ulonglong)(uint)param_1[6];
      lVar1 = uVar7 * 6;
      pbVar5 = param_2 + lVar1 + 8;
      uVar8 = (longlong)pbVar5 - *(longlong *)(param_1 + 2);
      local_38[0] = (uint)param_2[lVar1 + 3] * 0x10000 + (uint)param_2[lVar1 + 4] * 0x100 +
                    (uint)param_2[lVar1 + 2] * 0x1000000 + (uint)param_2[lVar1 + 5];
      pcVar3 = "OUT-OF-RANGE";
      if (uVar8 <= uVar9) {
        pcVar3 = "OK";
      }
      local_30 = param_2;
      FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar5
                    ,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
      if (((uVar9 < uVar8) ||
          (cVar2 = FUN_1404093d0(param_2 + lVar1 + 6,param_1,param_2), cVar2 == '\0')) ||
         ((uVar4 = (uint)param_2[lVar1 + 7] + (uint)param_2[lVar1 + 6] * 0x100, uVar4 != 0 &&
          (cVar2 = FUN_140403830(param_2 + uVar4,param_1,local_38), cVar2 == '\0')))) {
        return 0;
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < uVar6);
  }
  return 1;
}

