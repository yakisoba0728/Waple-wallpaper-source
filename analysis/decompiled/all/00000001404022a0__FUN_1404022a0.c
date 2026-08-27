// Function: FUN_1404022a0
// Addr: 1404022a0
// Size: 651 bytes


ulonglong FUN_1404022a0(byte *param_1,int *param_2,uint *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar11;
  
  pbVar1 = param_1 + 1;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar4 = "OUT-OF-RANGE";
  uVar12 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  if (uVar12 <= uVar6) {
    pcVar4 = "OK";
  }
  uVar11 = 0;
  uVar9 = 1;
  uVar5 = FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        pbVar1,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if (uVar6 < uVar12) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else if (*param_1 == 0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = param_2[0xe];
    }
    uVar5 = FUN_14036f0c0(param_2);
  }
  else {
    uVar3 = *param_1 - uVar9;
    uVar6 = (ulonglong)uVar3;
    uVar10 = 0;
    if (uVar3 == 0) {
      for (uVar9 = param_2[0xe] - uVar9; uVar9 != 0; uVar9 = uVar9 + uVar3) {
        uVar5 = (ulonglong)(uint)param_2[6];
        lVar2 = uVar11 * 3;
        pbVar8 = param_1 + lVar2 + 4;
        pcVar4 = "OUT-OF-RANGE";
        uVar12 = (longlong)pbVar8 - *(longlong *)(param_2 + 2);
        if (uVar12 <= uVar5) {
          pcVar4 = "OK";
        }
        uVar6 = FUN_1402fc370("SANITIZE",pbVar8,0,1,*param_2 + 1,0,
                              "check_point [%p] in [%p..%p] -> %s",pbVar8,*(longlong *)(param_2 + 2)
                              ,*(undefined8 *)(param_2 + 4),pcVar4);
        if (uVar5 < uVar12) goto LAB_14040235f;
        uVar10 = pbVar1[lVar2 + 2] + 1;
        uVar6 = (ulonglong)uVar10;
        if (uVar9 < uVar10) goto LAB_14040235f;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar3 = -(uint)pbVar1[lVar2 + 2] - 1;
        uVar6 = (ulonglong)uVar3;
      }
    }
    else {
      if (uVar3 != uVar9) {
LAB_14040235f:
        return uVar6 & 0xffffffffffffff00;
      }
      for (uVar9 = param_2[0xe] - uVar9; uVar9 != 0; uVar9 = uVar9 + uVar3) {
        uVar5 = (ulonglong)(uint)param_2[6];
        lVar2 = uVar11 * 4;
        pbVar8 = param_1 + lVar2 + 5;
        pcVar4 = "OUT-OF-RANGE";
        uVar12 = (longlong)pbVar8 - *(longlong *)(param_2 + 2);
        if (uVar12 <= uVar5) {
          pcVar4 = "OK";
        }
        uVar6 = FUN_1402fc370("SANITIZE",pbVar8,0,1,*param_2 + 1,0,
                              "check_point [%p] in [%p..%p] -> %s",pbVar8,*(longlong *)(param_2 + 2)
                              ,*(undefined8 *)(param_2 + 4),pcVar4);
        if (uVar5 < uVar12) goto LAB_14040235f;
        iVar7 = (uint)pbVar1[lVar2 + 3] + (uint)pbVar1[lVar2 + 2] * 0x100;
        uVar10 = iVar7 + 1;
        uVar6 = (ulonglong)uVar10;
        if (uVar9 < uVar10) goto LAB_14040235f;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar3 = -iVar7 - 1;
        uVar6 = (ulonglong)uVar3;
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar10;
    }
    uVar5 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  return uVar5;
}

