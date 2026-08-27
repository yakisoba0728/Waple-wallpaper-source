// Function: FUN_140405a10
// Addr: 140405a10
// Size: 385 bytes


undefined8 FUN_140405a10(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 local_58 [24];
  
  cVar2 = FUN_1404093d0(param_1,param_2,param_1);
  if ((cVar2 != '\0') &&
     ((uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1], uVar4 == 0 ||
      (cVar2 = FUN_1404045b0(param_1 + uVar4,param_2,0), cVar2 != '\0')))) {
    pbVar1 = param_1 + 2;
    cVar2 = FUN_140407340(pbVar1,param_2);
    if (cVar2 != '\0') {
      uVar6 = 0;
      uVar4 = (uint)*pbVar1 * 0x100 + (uint)param_1[3];
      if (uVar4 != 0) {
        do {
          pbVar8 = (byte *)(ulonglong)(uint)param_2[6];
          pcVar3 = "OUT-OF-RANGE";
          pbVar7 = pbVar1 + (uVar6 * 6 - *(longlong *)(param_2 + 2)) + 8;
          if (pbVar7 <= pbVar8) {
            pcVar3 = "OK";
          }
          FUN_1402fc370("SANITIZE",param_1 + uVar6 * 6 + 10,0,1,*param_2 + 1,0,
                        "check_point [%p] in [%p..%p] -> %s",param_1 + uVar6 * 6 + 10,
                        *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
          if (pbVar8 < pbVar7) {
            return 0;
          }
          cVar2 = FUN_1404093d0(pbVar1 + uVar6 * 6 + 6,param_2,param_1);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar5 = (uint)pbVar1[uVar6 * 6 + 7] + (uint)pbVar1[uVar6 * 6 + 6] * 0x100;
          if ((uVar5 != 0) &&
             (cVar2 = FUN_1404045b0(param_1 + uVar5,param_2,local_58), cVar2 == '\0')) {
            return 0;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < uVar4);
      }
      return 1;
    }
  }
  return 0;
}

