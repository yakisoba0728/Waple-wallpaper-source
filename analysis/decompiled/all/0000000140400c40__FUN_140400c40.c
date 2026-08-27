// Function: FUN_140400c40
// Addr: 140400c40
// Size: 878 bytes


undefined8 FUN_140400c40(byte *param_1,int *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  byte *pbVar15;
  int *piVar16;
  uint local_res20;
  uint local_68;
  uint local_64;
  
  pcVar3 = "OUT-OF-RANGE";
  pbVar5 = param_1 + 8;
  uVar12 = (longlong)pbVar5 - *(longlong *)(param_2 + 2);
  uVar7 = (ulonglong)(uint)param_2[6];
  if (uVar12 <= uVar7) {
    pcVar3 = "OK";
  }
  uVar4 = 0;
  FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar5,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
  if ((((uVar7 < uVar12) || ((uint)*param_1 * 0x100 + (uint)param_1[1] < 4)) ||
      (cVar2 = FUN_1404093d0(param_1 + 2,param_2,param_1), cVar2 == '\0')) ||
     (cVar2 = FUN_140373860(param_2), cVar2 == '\0')) {
    return 0;
  }
  pbVar15 = param_1 + (ulonglong)param_1[5] + (ulonglong)param_1[4] * 0x100;
  local_res20 = 0;
  local_64 = 0;
  pbVar5 = param_1 + (ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100;
  uVar9 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  piVar16 = param_2 + 7;
  local_68 = 0;
  uVar7 = uVar4;
  uVar12 = uVar4;
  uVar11 = uVar4;
  uVar14 = uVar4;
  do {
    uVar8 = (uint)uVar12;
    iVar13 = (int)uVar14;
    if ((int)uVar8 < (int)uVar4) {
      if ((uVar9 != 0) && ((uint)(0xffffffff / (ulonglong)uVar9) <= uVar8)) {
        return 0;
      }
      pbVar6 = pbVar15 + uVar8 * uVar9;
      cVar2 = FUN_14036f0c0(param_2,pbVar6,-uVar8,uVar9);
      if (cVar2 == '\0') {
        return 0;
      }
      *piVar16 = *piVar16 + (uVar8 - local_68);
      if (*piVar16 < 1) {
        return 0;
      }
      pbVar1 = pbVar15;
      if (pbVar15 < pbVar6) {
        return 0;
      }
      while (pbVar6 < pbVar1) {
        uVar10 = pbVar1[-1] + 1;
        if (pbVar1[-1] + 1 <= (uint)uVar7) {
          uVar10 = (uint)uVar7;
        }
        uVar7 = (ulonglong)uVar10;
        pbVar1 = pbVar1 + -1;
      }
      uVar10 = local_res20;
      local_68 = uVar8;
      if (iVar13 <= (int)local_res20) goto LAB_140400e49;
    }
    else {
      uVar10 = (uint)uVar11;
      if ((int)(uint)uVar11 < iVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar7;
        }
        return 1;
      }
LAB_140400e49:
      uVar10 = uVar10 + 1;
      cVar2 = FUN_14036f0c0(param_2,pbVar15,uVar10,uVar9);
      if (cVar2 == '\0') {
        return 0;
      }
      *piVar16 = *piVar16 + (iVar13 - local_res20) + -1;
      if (*piVar16 < 1) {
        return 0;
      }
      if ((uVar9 != 0) && ((uint)(0xffffffff / (ulonglong)uVar9) <= uVar10)) {
        return 0;
      }
      if (pbVar15 + uVar10 * uVar9 < pbVar15) {
        return 0;
      }
      for (pbVar6 = pbVar15 + iVar13 * uVar9; pbVar6 < pbVar15 + uVar10 * uVar9; pbVar6 = pbVar6 + 1
          ) {
        uVar8 = *pbVar6 + 1;
        if (*pbVar6 + 1 <= (uint)uVar7) {
          uVar8 = (uint)uVar7;
        }
        uVar7 = (ulonglong)uVar8;
      }
      uVar14 = (ulonglong)uVar10;
    }
    uVar11 = (ulonglong)local_res20;
    cVar2 = FUN_14036edf0(param_2,pbVar5,uVar7);
    if (cVar2 == '\0') {
      return 0;
    }
    *piVar16 = *piVar16 + (local_64 - (uint)uVar7);
    if (*piVar16 < 1) {
      return 0;
    }
    pbVar6 = pbVar5 + (ulonglong)local_64 * 4;
    if (pbVar6 < pbVar5 + uVar7 * 4) {
      do {
        local_res20 = (int)((((uint)*pbVar6 - (uint)param_1[4]) * 0x100 + (uint)pbVar6[1]) -
                           (uint)param_1[5]) / (int)((uint)*param_1 * 0x100 + (uint)param_1[1]);
        uVar8 = local_res20;
        if ((int)(uint)uVar12 <= (int)local_res20) {
          uVar8 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar8;
        if ((int)local_res20 <= (int)(uint)uVar11) {
          local_res20 = (uint)uVar11;
        }
        pbVar6 = pbVar6 + 4;
        uVar11 = (ulonglong)local_res20;
      } while (pbVar6 < pbVar5 + uVar7 * 4);
    }
    uVar4 = (ulonglong)local_68;
    local_64 = (uint)uVar7;
  } while( true );
}

