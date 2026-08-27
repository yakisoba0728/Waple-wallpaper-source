// Function: FUN_140303790
// Addr: 140303790
// Size: 872 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140303790(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_28c8 [32];
  int local_28a8;
  uint local_28a4 [3];
  undefined8 local_2898;
  longlong local_2890;
  undefined8 local_2888;
  undefined8 uStack_2880;
  undefined8 local_2878;
  undefined8 local_2870;
  undefined8 uStack_2868;
  undefined8 local_2860;
  undefined4 local_2858;
  undefined1 local_2854 [1036];
  undefined8 local_2448;
  undefined1 local_2440 [64];
  uint local_2400 [2];
  ulonglong auStack_23f8 [549];
  undefined4 local_12d0;
  undefined8 *local_12c8;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1403037b4;
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_28c8;
  FUN_1404217a0(local_2440,0,0x1180);
  local_2448 = *(undefined8 *)(param_2 + 0x98);
  uVar13 = 0;
  uVar14 = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  pcVar10 = *(char **)((&PTR_DAT_140439450)[*(int *)(*param_1 + 8)] + 0x20);
  uVar5 = FUN_1404144f0();
  cVar2 = *pcVar10;
  uVar12 = uVar13;
  while (cVar2 != '\0') {
    while (cVar2 == ' ') {
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar10;
    }
    pcVar10 = (char *)FUN_140305960(pcVar10,param_1,uVar5,local_28a4);
    if (local_28a4[0] < 2) {
      puVar6 = (uint *)FUN_1404148a0(uVar5,&local_28a8);
      FUN_1404148b0(uVar5,&local_28a8);
      uVar12 = uVar13;
      if (local_28a8 != 0) {
        uVar14 = *puVar6;
        uVar12 = (ulonglong)uVar14;
        if (uVar14 != 0) break;
      }
    }
    uVar14 = (uint)uVar12;
    cVar2 = *pcVar10;
  }
  FUN_1404145e0(uVar5);
  if (((uVar14 != 0) && (iVar4 = FUN_1402f12d0(param_2,uVar14,1), iVar4 == 0)) &&
     (lVar8 = *(longlong *)(param_2 + 0x78), *(short *)(lVar8 + 0x9a) != 0)) {
    local_2898 = 0;
    local_2860 = 0;
    local_2870 = 0;
    uStack_2868 = 0;
    FUN_1404217a0(local_2854,0,0x40c);
    local_2858 = (undefined4)param_1[8];
    local_12c8 = &local_2898;
    local_2888 = _DAT_14043b3b0;
    uStack_2880 = _UNK_14043b3b8;
    local_2878 = 0;
    local_12d0 = 0;
    local_2890 = param_2;
    iVar4 = FUN_1402ffeb0(&local_2448,lVar8 + 0x98);
    uVar12 = uVar13;
    if (iVar4 == 0) {
      do {
        local_28a8 = 0;
        iVar4 = FUN_140301ff0(&local_2448,uVar12);
        if (iVar4 != 0) break;
        FUN_140302930(&local_2448,0,0,uVar12);
        uVar7 = auStack_23f8[uVar12 * 0x113];
        if ((uVar7 != 0) &&
           (uVar1 = uVar7 + (ulonglong)local_2400[uVar12 * 0x226] * 0x48, uVar11 = uVar13,
           uVar7 < uVar1)) {
          do {
            uVar3 = *(ulonglong *)(uVar7 + 0x20);
            if ((uVar3 != 0) && ((*(ulonglong *)(uVar3 + 0x20) == uVar7 && (uVar7 < uVar3)))) {
              iVar9 = (int)*(short *)(uVar7 + 2) - (int)*(short *)(uVar3 + 2);
              iVar4 = (int)*(short *)(uVar3 + 2) - (int)*(short *)(uVar7 + 2);
              if (-1 < iVar9) {
                iVar4 = iVar9;
              }
              if ((uint)uVar11 < 0x10) {
                lVar8 = uVar11 + 1;
                uVar11 = (ulonglong)((uint)uVar11 + 1);
                *(int *)((longlong)param_1 + lVar8 * 0xc + uVar12 * 0x204 + 0x44) = iVar4;
              }
            }
            uVar7 = uVar7 + 0x48;
          } while (uVar7 < uVar1);
          local_28a8 = (int)uVar11;
        }
        FUN_140305f60(&local_28a8,(longlong)param_1 + uVar12 * 0x204 + 0x50);
        uVar14 = (int)uVar12 + 1;
        *(int *)((longlong)param_1 + uVar12 * 0x204 + 0x4c) = local_28a8;
        uVar12 = (ulonglong)uVar14;
      } while ((int)uVar14 < 2);
    }
  }
  if (*(int *)((longlong)param_1 + 0x4c) == 0) {
    iVar4 = (int)param_1[8] * 0x32;
    iVar4 = (int)((iVar4 >> 0x1f & 0x7ffU) + iVar4) >> 0xb;
  }
  else {
    iVar4 = (int)param_1[10];
  }
  *(int *)((longlong)param_1 + 0x114) = iVar4;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(int *)(param_1 + 0x22) = iVar4 / 5;
  if ((int)param_1[0x4a] == 0) {
    iVar4 = (int)param_1[8] * 0x32;
    iVar4 = (int)((iVar4 >> 0x1f & 0x7ffU) + iVar4) >> 0xb;
  }
  else {
    iVar4 = *(int *)((longlong)param_1 + 0x254);
  }
  *(int *)((longlong)param_1 + 0x314) = iVar4 / 5;
  *(int *)(param_1 + 99) = iVar4;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  FUN_1402ffd60(&local_2448);
  return;
}

