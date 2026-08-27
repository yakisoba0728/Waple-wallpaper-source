// Function: FUN_1403625d0
// Addr: 1403625d0
// Size: 461 bytes


byte * FUN_1403625d0(longlong param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  
  if (param_2 != 0) {
    uVar7 = (ulonglong)(uint)param_3[6];
    pcVar3 = "OUT-OF-RANGE";
    pbVar4 = (byte *)(param_2 + param_1);
    pcVar2 = "OUT-OF-RANGE";
    uVar9 = (longlong)pbVar4 - *(longlong *)(param_3 + 2);
    if (uVar9 <= uVar7) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar4,0,1,*param_3 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar4,
                  *(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4),pcVar2);
    if (uVar9 <= uVar7) {
      pbVar8 = (byte *)(ulonglong)(uint)param_3[6];
      pbVar10 = pbVar4 + (10 - *(longlong *)(param_3 + 2));
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
      iVar5 = 0;
      FUN_1402fc370("SANITIZE");
      if (pbVar10 <= pbVar8) {
        pbVar8 = pbVar4 + 2;
        uVar6 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
        if ((((ulonglong)(uint)param_3[6] <
              (ulonglong)((longlong)pbVar8 - *(longlong *)(param_3 + 2))) ||
            ((uint)(param_3[4] - (int)pbVar8) < uVar6)) ||
           (param_3[7] = param_3[7] - uVar6, param_3[7] <= iVar5)) {
          cVar1 = '\0';
        }
        else {
          cVar1 = '\x01';
        }
        if (cVar1 != '\0') {
          pcVar3 = "OK";
        }
        FUN_1402fc370("SANITIZE",pbVar8,0,1,*param_3 + 1,0,
                      "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar8,pbVar8 + uVar6,
                      CONCAT44(uVar11,uVar6),*(longlong *)(param_3 + 2),*(undefined8 *)(param_3 + 4)
                      ,pcVar3);
        if ((cVar1 != '\0') && (cVar1 = FUN_140404130(pbVar8,param_3), cVar1 != '\0')) {
          return pbVar4;
        }
      }
    }
  }
  return (byte *)&DAT_14045dd10;
}

