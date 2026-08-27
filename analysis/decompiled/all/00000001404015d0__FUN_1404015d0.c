// Function: FUN_1404015d0
// Addr: 1404015d0
// Size: 409 bytes


undefined1 FUN_1404015d0(byte *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  cVar1 = FUN_1404071c0();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar5 = 0;
  uVar8 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar8 != 0) {
    do {
      pbVar7 = (byte *)(ulonglong)(uint)param_2[6];
      pcVar3 = "OUT-OF-RANGE";
      pbVar6 = param_1 + (uVar5 * 6 - *(longlong *)(param_2 + 2)) + 10;
      if (pbVar6 <= pbVar7) {
        pcVar3 = "OK";
      }
      FUN_1402fc370("SANITIZE",param_1 + uVar5 * 6 + 10,0,1,*param_2 + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",param_1 + uVar5 * 6 + 10,
                    *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (pbVar7 < pbVar6) {
        return 0;
      }
      cVar1 = FUN_140409580(param_1 + uVar5 * 6 + 6,param_2,param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar4 = (uint)param_1[uVar5 * 6 + 7] * 0x10000 + (uint)param_1[uVar5 * 6 + 8] * 0x100 +
              (uint)param_1[uVar5 * 6 + 6] * 0x1000000 + (uint)param_1[uVar5 * 6 + 9];
      if (uVar4 != 0) {
        if ((0x3f < param_2[9]) || (iVar2 = param_2[9] + 1, param_2[9] = iVar2, iVar2 == 0)) {
          return 0;
        }
        cVar1 = FUN_14037a0b0(param_1 + uVar4,param_2);
        param_2[9] = param_2[9] + -1;
        if (cVar1 == '\0') {
          return 0;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar8);
  }
  return 1;
}

