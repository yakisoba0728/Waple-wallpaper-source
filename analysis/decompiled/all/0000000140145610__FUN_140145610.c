// Function: FUN_140145610
// Addr: 140145610
// Size: 739 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140145610(ulonglong param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong *local_res10;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98 [14];
  
  uVar11 = param_1 >> 3;
  uVar2 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  iVar14 = (int)uVar2;
  local_res10 = param_2;
  plVar7 = (longlong *)_malloc_base(param_1 * 8);
  if (plVar7 != (longlong *)0x0) {
    iVar10 = 0;
    iVar13 = (int)(uVar11 / 3);
    iVar12 = iVar13 + 1;
    local_res10 = plVar7;
    if (0 < iVar12) {
      do {
        FUN_1401454b0(&local_res10,param_1 & 0xffffffff,iVar10,uVar2 & 0xffffffff);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar12);
    }
    uVar5 = _UNK_140492c18;
    uVar4 = _DAT_140492c10;
    iVar3 = DAT_140492bf0._4_4_;
    iVar10 = (int)DAT_140492bf0;
    uVar9 = iVar13 * 2 | 1;
    if (uVar11 % 3 < 2) {
      uVar9 = iVar13 * 2;
    }
    if (iVar12 < (int)(uVar9 + 1)) {
      iVar6 = iVar14 + 1;
      iVar17 = (int)param_1;
      do {
        lVar8 = 0;
        local_98[0] = uVar4;
        local_98[1] = uVar5;
        do {
          uVar1 = *(undefined8 *)((longlong)local_98 + lVar8 * 4);
          uVar15 = ((int)uVar1 << iVar6) + iVar12;
          uVar16 = ((int)((ulonglong)uVar1 >> 0x20) << iVar6) + iVar12;
          *(ulonglong *)(&local_b8 + lVar8) =
               CONCAT44(iVar17 + uVar16 & -(uint)((int)uVar16 < 0),
                        iVar17 + uVar15 & -(uint)((int)uVar15 < 0)) |
               CONCAT44(~-(uint)((int)uVar16 < 0) & uVar16,~-(uint)((int)uVar15 < 0) & uVar15);
          lVar8 = lVar8 + 2;
        } while (lVar8 != 4);
        *local_res10 = (longlong)(local_b8 * 2);
        local_res10[1] = (longlong)(local_b4 * 2);
        local_res10[2] = (longlong)(local_b0 * 2);
        lVar8 = 0;
        local_res10[3] = (longlong)(local_ac * 2);
        do {
          uVar1 = *(undefined8 *)((longlong)local_98 + lVar8 * 4);
          uVar15 = (((int)uVar1 << iVar6) - (iVar10 << iVar14)) + iVar12;
          uVar16 = (((int)((ulonglong)uVar1 >> 0x20) << iVar6) - (iVar3 << iVar14)) + iVar12;
          *(ulonglong *)(&local_a8 + lVar8) =
               CONCAT44(iVar17 + uVar16 & -(uint)((int)uVar16 < 0),
                        iVar17 + uVar15 & -(uint)((int)uVar15 < 0)) |
               CONCAT44(~-(uint)((int)uVar16 < 0) & uVar16,~-(uint)((int)uVar15 < 0) & uVar15);
          lVar8 = lVar8 + 2;
        } while (lVar8 != 4);
        iVar12 = iVar12 + 1;
        local_res10[4] = (longlong)(local_a8 * 2);
        local_res10[5] = (longlong)(local_a4 * 2);
        local_res10[6] = (longlong)(local_a0 * 2);
        local_res10[7] = (longlong)(local_9c * 2);
        local_res10 = local_res10 + 8;
      } while (iVar12 < (int)(uVar9 + 1));
    }
    for (iVar13 = -iVar13; iVar13 < 0; iVar13 = iVar13 + 1) {
      FUN_1401454b0(&local_res10,param_1 & 0xffffffff,iVar13,uVar2 & 0xffffffff);
    }
  }
  return plVar7;
}

