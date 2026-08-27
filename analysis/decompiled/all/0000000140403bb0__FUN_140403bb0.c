// Function: FUN_140403bb0
// Addr: 140403bb0
// Size: 463 bytes


undefined8 FUN_140403bb0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  
  pbVar1 = param_1 + 4;
  uVar8 = (ulonglong)(uint)param_2[6];
  pcVar3 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  iVar7 = 1;
  if (uVar10 <= uVar8) {
    pcVar3 = "OK";
  }
  uVar6 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if (((uVar8 < uVar10) || ((uint)*param_1 * 0x100 + (uint)param_1[1] != iVar7)) ||
     (cVar2 = FUN_140407340(pbVar1,param_2), cVar2 == '\0')) {
LAB_140403d6c:
    uVar4 = 0;
  }
  else {
    uVar12 = (uint)*pbVar1 * 0x100 + (uint)param_1[5];
    if (uVar12 != 0) {
      do {
        pbVar11 = (byte *)(ulonglong)(uint)param_2[6];
        pcVar3 = "OUT-OF-RANGE";
        pbVar9 = pbVar1 + (uVar6 * 6 - *(longlong *)(param_2 + 2)) + 8;
        if (pbVar9 <= pbVar11) {
          pcVar3 = "OK";
        }
        FUN_1402fc370("SANITIZE",param_1 + uVar6 * 6 + 0xc,0,1,*param_2 + 1,0,
                      "check_point [%p] in [%p..%p] -> %s",param_1 + uVar6 * 6 + 0xc,
                      *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
        if ((pbVar11 < pbVar9) ||
           (cVar2 = FUN_140409580(pbVar1 + uVar6 * 6 + 4,param_2,param_1), cVar2 == '\0'))
        goto LAB_140403d6c;
        uVar5 = (uint)pbVar1[uVar6 * 6 + 5] * 0x10000 + (uint)pbVar1[uVar6 * 6 + 6] * 0x100 +
                (uint)pbVar1[uVar6 * 6 + 4] * 0x1000000 + (uint)pbVar1[uVar6 * 6 + 7];
        if ((uVar5 != 0) && (cVar2 = FUN_140403830(param_1 + uVar5,param_2,0), cVar2 == '\0'))
        goto LAB_140403d6c;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar12);
    }
    uVar4 = 1;
  }
  return uVar4;
}

