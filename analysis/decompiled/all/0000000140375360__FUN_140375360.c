// Function: FUN_140375360
// Addr: 140375360
// Size: 372 bytes


undefined1 FUN_140375360(int *param_1,byte *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 local_38 [16];
  
  cVar1 = FUN_140407340(param_2,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = 0;
  uVar7 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (uVar7 != 0) {
    do {
      pbVar6 = (byte *)(ulonglong)(uint)param_1[6];
      pcVar2 = "OUT-OF-RANGE";
      pbVar5 = param_2 + (uVar4 * 6 - *(longlong *)(param_1 + 2)) + 8;
      if (pbVar5 <= pbVar6) {
        pcVar2 = "OK";
      }
      FUN_1402fc370("SANITIZE",param_2 + uVar4 * 6 + 8,0,1,*param_1 + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",param_2 + uVar4 * 6 + 8,
                    *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
      if (((pbVar6 < pbVar5) ||
          (cVar1 = FUN_1404093d0(param_2 + uVar4 * 6 + 6,param_1,param_2), cVar1 == '\0')) ||
         ((uVar3 = (uint)param_2[uVar4 * 6 + 7] + (uint)param_2[uVar4 * 6 + 6] * 0x100, uVar3 != 0
          && (cVar1 = FUN_140405a10(param_2 + uVar3,param_1,local_38), cVar1 == '\0')))) {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar7);
  }
  return 1;
}

