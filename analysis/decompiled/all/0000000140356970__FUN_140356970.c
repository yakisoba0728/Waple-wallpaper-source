// Function: FUN_140356970
// Addr: 140356970
// Size: 372 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140356970(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined4 *local_res20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    return 6;
  }
  local_res20 = (undefined4 *)0x0;
  lVar8 = param_1[1];
  while( true ) {
    if (lVar8 == 0) {
      param_1[1] = (longlong)local_res20;
      return 0;
    }
    puVar3 = *(undefined8 **)(lVar8 + 8);
    local_res18 = (undefined8 *)0x0;
    puVar9 = local_res20;
    for (; local_res20 = puVar9, puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[5]) {
      iVar1 = *(int *)(puVar3 + 4);
      if (iVar1 == 1) {
        local_res10[0] = 0;
        puVar15 = (undefined8 *)FUN_1402f8070(lVar2,0x30,local_res10);
        uVar11 = _UNK_140451bc0;
        uVar10 = _DAT_140451bb8;
        uVar7 = _DAT_140451bb0;
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        *puVar15 = _DAT_140451ba8;
        puVar15[1] = uVar7;
        uVar12 = _UNK_140451bd0;
        uVar7 = _DAT_140451bc8;
        puVar15[2] = uVar10;
        puVar15[3] = uVar11;
        puVar15[4] = uVar7;
        puVar15[5] = uVar12;
        uVar7 = puVar3[1];
        *puVar15 = *puVar3;
        puVar15[1] = uVar7;
        uVar7 = puVar3[3];
        puVar15[2] = puVar3[2];
        puVar15[3] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar3 + 0x24);
        uVar5 = *(undefined4 *)(puVar3 + 5);
        uVar6 = *(undefined4 *)((longlong)puVar3 + 0x2c);
        *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar3 + 4);
        *(undefined4 *)((longlong)puVar15 + 0x24) = uVar4;
        *(undefined4 *)(puVar15 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar6;
        puVar15[5] = local_res18;
        local_res18 = puVar15;
      }
      else {
        if (iVar1 == 2) {
          uStack_58 = puVar3[1];
          local_68 = *puVar3;
          uStack_60 = puVar3[2];
          iVar1 = (int)((ulonglong)uStack_60 >> 0x20);
          uVar19 = (int)uStack_58 + (int)uStack_60 * -2 + (int)local_68;
          iVar16 = (int)((ulonglong)local_68 >> 0x20);
          iVar17 = 1;
          if ((int)uVar19 < 0) {
            uVar19 = ((int)uStack_60 * 2 - (int)uStack_58) - (int)local_68;
          }
          iVar18 = (int)((ulonglong)uStack_58 >> 0x20);
          uVar13 = iVar16 + iVar1 * -2 + iVar18;
          if ((int)uVar13 < 0) {
            uVar13 = (iVar1 * 2 - iVar16) - iVar18;
          }
          if ((int)uVar13 <= (int)uVar19) {
            uVar13 = uVar19;
          }
          uVar14 = (ulonglong)uVar13;
          if (8 < (int)uVar13) {
            do {
              uVar14 = uVar14 >> 2;
              iVar17 = iVar17 * 2;
            } while (8 < (uint)uVar14);
          }
          uVar14 = FUN_140356520(lVar2,&local_68,iVar17,&local_res18);
        }
        else {
          if (iVar1 != 3) {
            return 6;
          }
          local_68 = *puVar3;
          uStack_60 = puVar3[2];
          uStack_58 = puVar3[3];
          uStack_50 = puVar3[1];
          uVar14 = func_0x000140356700(lVar2,&local_68,0x20,&local_res18);
        }
        if ((int)uVar14 != 0) {
          return uVar14;
        }
      }
      puVar9 = local_res20;
    }
    local_res10[0] = 0;
    local_res20 = (undefined4 *)FUN_1402f8070(lVar2,0x18,local_res10);
    uVar7 = _UNK_140451be8;
    uVar6 = _UNK_140451be4;
    uVar5 = _UNK_140451be0;
    uVar4 = _UNK_140451bdc;
    if (local_res10[0] != 0) {
      return (ulonglong)local_res10[0];
    }
    *local_res20 = _UNK_140451bd8;
    local_res20[1] = uVar4;
    local_res20[2] = uVar5;
    local_res20[3] = uVar6;
    *(undefined8 *)(local_res20 + 4) = uVar7;
    *(undefined4 **)(local_res20 + 4) = puVar9;
    *(undefined8 **)(local_res20 + 2) = local_res18;
    local_res18 = (undefined8 *)0x0;
    if (lVar8 != 0) break;
    local_res10[0] = 0;
    lVar8 = *(longlong *)(lVar8 + 0x10);
  }
  if (*(longlong *)(lVar8 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(lVar2,*(longlong *)(lVar8 + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(lVar2,lVar8);
}

