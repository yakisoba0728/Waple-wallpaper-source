// Function: FUN_140400820
// Addr: 140400820
// Size: 1052 bytes


undefined8 FUN_140400820(byte *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulonglong uVar17;
  uint local_res20;
  undefined4 uVar19;
  undefined8 uVar18;
  uint local_68;
  uint local_64;
  
  pcVar4 = "OUT-OF-RANGE";
  pbVar6 = param_1 + 8;
  uVar9 = (ulonglong)(uint)param_2[6];
  uVar13 = (longlong)pbVar6 - *(longlong *)(param_2 + 2);
  if (uVar13 <= uVar9) {
    pcVar4 = "OK";
  }
  uVar18 = *(undefined8 *)(param_2 + 4);
  uVar5 = 0;
  FUN_1402fc370("SANITIZE",pbVar6,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar6,
                *(longlong *)(param_2 + 2),uVar18,pcVar4);
  if ((((uVar9 < uVar13) || ((uint)*param_1 * 0x100 + (uint)param_1[1] < 4)) ||
      (cVar2 = FUN_1404093d0(param_1 + 2,param_2,param_1), cVar2 == '\0')) ||
     (cVar2 = FUN_140373860(param_2), cVar2 == '\0')) {
    return 0;
  }
  pbVar15 = param_1 + (ulonglong)param_1[5] + (ulonglong)param_1[4] * 0x100;
  local_64 = 0;
  pbVar6 = param_1 + (ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100;
  uVar16 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  local_res20 = 0;
  piVar1 = param_2 + 7;
  local_68 = 0;
  uVar13 = uVar5;
  uVar9 = uVar5;
  uVar14 = uVar5;
  uVar17 = uVar5;
  do {
    uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar8 = (uint)uVar17;
    iVar11 = (int)uVar14;
    if ((int)uVar8 < (int)uVar13) {
      if ((uVar16 != 0) && ((uint)(0xffffffff / (ulonglong)uVar16) <= uVar8)) {
        return 0;
      }
      pbVar7 = pbVar15 + uVar8 * uVar16;
      cVar2 = FUN_14036f0c0(param_2,pbVar7,-uVar8,uVar16);
      if (cVar2 == '\0') {
        return 0;
      }
      *piVar1 = *piVar1 + (uVar8 - local_68);
      if (*piVar1 < 1) {
        return 0;
      }
      pbVar12 = pbVar15;
      if (pbVar15 < pbVar7) {
        return 0;
      }
      while (pbVar7 < pbVar12) {
        uVar10 = pbVar12[-1] + 1;
        if (pbVar12[-1] + 1 <= (uint)uVar9) {
          uVar10 = (uint)uVar9;
        }
        uVar9 = (ulonglong)uVar10;
        pbVar12 = pbVar12 + -1;
      }
      uVar10 = local_res20;
      local_68 = uVar8;
      if (iVar11 <= (int)local_res20) goto LAB_140400a2a;
    }
    else {
      uVar10 = (uint)uVar5;
      if ((int)(uint)uVar5 < iVar11) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar9;
        }
        return 1;
      }
LAB_140400a2a:
      uVar10 = uVar10 + 1;
      cVar2 = FUN_14036f0c0(param_2,pbVar15,uVar10,uVar16);
      if (cVar2 == '\0') {
        return 0;
      }
      *piVar1 = *piVar1 + (iVar11 - local_res20) + -1;
      if (*piVar1 < 1) {
        return 0;
      }
      if ((uVar16 != 0) && ((uint)(0xffffffff / (ulonglong)uVar16) <= uVar10)) {
        return 0;
      }
      if (pbVar15 + uVar10 * uVar16 < pbVar15) {
        return 0;
      }
      for (pbVar7 = pbVar15 + iVar11 * uVar16; pbVar7 < pbVar15 + uVar10 * uVar16;
          pbVar7 = pbVar7 + 1) {
        uVar13 = (ulonglong)(*pbVar7 + 1);
        if (*pbVar7 + 1 <= (uint)uVar9) {
          uVar13 = uVar9;
        }
        uVar9 = uVar13;
      }
      uVar14 = (ulonglong)uVar10;
    }
    uVar8 = (uint)uVar9;
    if (0x1ffffffe < uVar8) {
      return 0;
    }
    uVar10 = uVar8 * 8;
    if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar6 - *(longlong *)(param_2 + 2)))
        || ((uint)(param_2[4] - (int)pbVar6) < uVar10)) ||
       (*piVar1 = *piVar1 + uVar8 * -8, *piVar1 < 1)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    pcVar4 = "OUT-OF-RANGE";
    if (cVar2 != '\0') {
      pcVar4 = "OK";
    }
    uVar18 = CONCAT44(uVar19,uVar10);
    iVar11 = 0;
    pbVar7 = pbVar6;
    FUN_1402fc370("SANITIZE",pbVar6,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar6,pbVar6 + uVar10,uVar18,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
    if (cVar2 == '\0') {
      return 0;
    }
    *piVar1 = *piVar1 + (local_64 - uVar8);
    if (*piVar1 <= iVar11) {
      return 0;
    }
    pbVar12 = pbVar7 + (ulonglong)local_64 * 8;
    if (pbVar12 < pbVar7 + uVar9 * 8) {
      do {
        uVar3 = (int)((((uint)*pbVar12 - (uint)param_1[4]) * 0x100 + (uint)pbVar12[1]) -
                     (uint)param_1[5]) / (int)((uint)*param_1 * 0x100 + (uint)param_1[1]);
        uVar10 = uVar3;
        if ((int)(uint)uVar17 <= (int)uVar3) {
          uVar10 = (uint)uVar17;
        }
        uVar17 = (ulonglong)uVar10;
        if ((int)uVar3 <= (int)local_res20) {
          uVar3 = local_res20;
        }
        local_res20 = uVar3;
        pbVar12 = pbVar12 + 8;
      } while (pbVar12 < pbVar7 + uVar9 * 8);
    }
    uVar5 = (ulonglong)local_res20;
    uVar13 = (ulonglong)local_68;
    local_64 = uVar8;
  } while( true );
}

