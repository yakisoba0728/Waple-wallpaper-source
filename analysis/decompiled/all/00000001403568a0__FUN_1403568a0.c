// Function: FUN_1403568a0
// Addr: 1403568a0
// Size: 734 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1403568a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined4 *local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
    return 6;
  }
  local_res20 = (undefined4 *)0x0;
  lVar11 = param_1[1];
  do {
    if (lVar11 == 0) {
      param_1[1] = (longlong)local_res20;
      return 0;
    }
    puVar4 = *(undefined8 **)(lVar11 + 8);
    plVar1 = (longlong *)(lVar11 + 8);
    local_res18 = (undefined8 *)0x0;
    puVar12 = local_res20;
    for (; local_res20 = puVar12, puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[5]) {
      iVar2 = *(int *)(puVar4 + 4);
      if (iVar2 == 1) {
        local_res10[0] = 0;
        puVar18 = (undefined8 *)FUN_1402f7fa0(lVar3,0x30,local_res10);
        uVar14 = _UNK_140451af0;
        uVar13 = _DAT_140451ae8;
        uVar10 = _UNK_140451ae0;
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        *puVar18 = _DAT_140451ad8;
        puVar18[1] = uVar10;
        uVar15 = _UNK_140451b00;
        uVar10 = _DAT_140451af8;
        puVar18[2] = uVar13;
        puVar18[3] = uVar14;
        puVar18[4] = uVar10;
        puVar18[5] = uVar15;
        uVar10 = puVar4[1];
        *puVar18 = *puVar4;
        puVar18[1] = uVar10;
        uVar10 = puVar4[3];
        puVar18[2] = puVar4[2];
        puVar18[3] = uVar10;
        uVar7 = *(undefined4 *)((longlong)puVar4 + 0x24);
        uVar8 = *(undefined4 *)(puVar4 + 5);
        uVar9 = *(undefined4 *)((longlong)puVar4 + 0x2c);
        *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar4 + 4);
        *(undefined4 *)((longlong)puVar18 + 0x24) = uVar7;
        *(undefined4 *)(puVar18 + 5) = uVar8;
        *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar9;
        puVar18[5] = local_res18;
        local_res18 = puVar18;
      }
      else {
        if (iVar2 == 2) {
          local_58 = puVar4[1];
          local_68 = *puVar4;
          local_60 = puVar4[2];
          iVar2 = (int)((ulonglong)local_60 >> 0x20);
          uVar22 = (int)local_58 + (int)local_60 * -2 + (int)local_68;
          iVar19 = (int)((ulonglong)local_68 >> 0x20);
          iVar20 = 1;
          if ((int)uVar22 < 0) {
            uVar22 = ((int)local_60 * 2 - (int)local_58) - (int)local_68;
          }
          iVar21 = (int)((ulonglong)local_58 >> 0x20);
          uVar16 = iVar19 + iVar2 * -2 + iVar21;
          if ((int)uVar16 < 0) {
            uVar16 = (iVar2 * 2 - iVar19) - iVar21;
          }
          if ((int)uVar16 <= (int)uVar22) {
            uVar16 = uVar22;
          }
          uVar17 = (ulonglong)uVar16;
          if (8 < (int)uVar16) {
            do {
              uVar17 = uVar17 >> 2;
              iVar20 = iVar20 * 2;
            } while (8 < (uint)uVar17);
          }
          uVar17 = FUN_140356450(lVar3,&local_68,iVar20,&local_res18);
        }
        else {
          if (iVar2 != 3) {
            return 6;
          }
          local_68 = *puVar4;
          local_60 = puVar4[2];
          local_58 = puVar4[3];
          local_50 = puVar4[1];
          uVar17 = FUN_140356630(lVar3,&local_68,0x20,&local_res18);
        }
        if ((int)uVar17 != 0) {
          return uVar17;
        }
      }
      puVar12 = local_res20;
    }
    local_res10[0] = 0;
    local_res20 = (undefined4 *)FUN_1402f7fa0(lVar3,0x18,local_res10);
    uVar10 = DAT_140451b18;
    uVar9 = _UNK_140451b14;
    uVar8 = _UNK_140451b10;
    uVar7 = _UNK_140451b0c;
    if (local_res10[0] != 0) {
      return (ulonglong)local_res10[0];
    }
    *local_res20 = _DAT_140451b08;
    local_res20[1] = uVar7;
    local_res20[2] = uVar8;
    local_res20[3] = uVar9;
    *(undefined8 *)(local_res20 + 4) = uVar10;
    *(undefined4 **)(local_res20 + 4) = puVar12;
    *(undefined8 **)(local_res20 + 2) = local_res18;
    local_res18 = (undefined8 *)0x0;
    lVar5 = *(longlong *)(lVar11 + 0x10);
    bVar23 = lVar11 != 0;
    local_res10[0] = 0;
    lVar11 = lVar5;
    if (bVar23) {
      lVar5 = *plVar1;
      while (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x28);
        FUN_1402f7f90(lVar3,lVar5);
        lVar5 = lVar6;
      }
      FUN_1402f7f90(lVar3);
    }
  } while( true );
}

