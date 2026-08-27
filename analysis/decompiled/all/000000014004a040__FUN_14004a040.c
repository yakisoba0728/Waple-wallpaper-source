// Function: FUN_14004a040
// Addr: 14004a040
// Size: 1033 bytes


uint FUN_14004a040(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  char *****pppppcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  char ******ppppppcVar17;
  char ******ppppppcVar18;
  char cVar19;
  longlong local_res8;
  byte *local_res10;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  longlong *local_88;
  byte *local_80;
  undefined1 *local_78;
  byte **local_70;
  byte local_68;
  undefined1 local_67 [7];
  char *****local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  puVar16 = auStack_a8;
  uVar11 = **(ulonglong **)(param_1 + 0x38);
  if (uVar11 != 0) {
    iVar7 = **(int **)(param_1 + 0x50);
    if (uVar11 < uVar11 + (longlong)iVar7) {
      **(int **)(param_1 + 0x50) = iVar7 + -1;
      pbVar3 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar3 + 1);
      return (uint)*pbVar3;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0xffffffff;
  }
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar4;
    **(longlong **)(param_1 + 0x38) = lVar4;
    **(int **)(param_1 + 0x50) = (int)uVar9 - (int)lVar4;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar6 = FUN_1402ccccc(uVar9);
    uVar12 = 0xffffffff;
    if (uVar6 != 0xffffffff) {
      uVar12 = uVar6 & 0xff;
    }
  }
  else {
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0xf;
    local_60 = (char *****)0x0;
LAB_14004a14e:
    iVar7 = FUN_1402ccccc(uVar9);
    uVar14 = local_48;
    uVar11 = local_50;
    if (iVar7 != -1) {
      cVar19 = (char)iVar7;
      if (local_50 < local_48) {
        ppppppcVar17 = &local_60;
        if (0xf < local_48) {
          ppppppcVar17 = (char ******)local_60;
        }
        pcVar15 = (char *)((longlong)ppppppcVar17 + local_50);
        local_50 = local_50 + 1;
        *pcVar15 = cVar19;
        *(char *)((longlong)ppppppcVar17 + uVar11 + 1) = '\0';
      }
      else {
        if (local_50 == 0x7fffffffffffffff) goto LAB_14004a43f;
        uVar1 = local_50 + 1;
        uVar13 = uVar1 | 0xf;
        if (uVar13 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (local_48 >> 1) < local_48) {
            uVar13 = 0x7fffffffffffffff;
            uVar10 = 0x8000000000000027;
            goto LAB_14004a20d;
          }
          uVar10 = (local_48 >> 1) + local_48;
          if (uVar13 < uVar10) {
            uVar13 = uVar10;
          }
          uVar2 = uVar13 + 1;
          if (uVar2 == 0) {
            ppppppcVar17 = (char ******)0x0;
          }
          else {
            if (0xfff < uVar2) {
              uVar10 = uVar13 + 0x28;
              if (uVar10 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14004a20d;
            }
            ppppppcVar17 = (char ******)FUN_14028af20(uVar2);
          }
        }
        else {
          uVar13 = 0x7fffffffffffffff;
          uVar10 = 0x8000000000000027;
LAB_14004a20d:
          pppppcVar8 = (char *****)FUN_14028af20(uVar10);
          if (pppppcVar8 == (char *****)0x0) goto LAB_14004a438;
          ppppppcVar17 = (char ******)((longlong)pppppcVar8 + 0x27U & 0xffffffffffffffe0);
          ppppppcVar17[-1] = pppppcVar8;
        }
        pppppcVar8 = local_60;
        local_50 = uVar1;
        local_48 = uVar13;
        if (uVar14 < 0x10) {
          FUN_1404210f0(ppppppcVar17,&local_60,uVar11);
          *(char *)((longlong)ppppppcVar17 + uVar11) = cVar19;
          *(char *)((longlong)ppppppcVar17 + uVar11 + 1) = '\0';
          local_60 = (char *****)ppppppcVar17;
        }
        else {
          FUN_1404210f0(ppppppcVar17,local_60,uVar11);
          *(char *)((longlong)ppppppcVar17 + uVar11) = cVar19;
          *(char *)((longlong)ppppppcVar17 + uVar11 + 1) = '\0';
          if (uVar14 + 1 < 0x1000) {
            thunk_FUN_14028af80(pppppcVar8);
            local_60 = (char *****)ppppppcVar17;
          }
          else {
            if ((char *)0x1f < (char *)((longlong)pppppcVar8 + (-8 - (longlong)pppppcVar8[-1])))
            goto LAB_14004a438;
            thunk_FUN_14028af80(pppppcVar8[-1],uVar14 + 0x28);
            local_60 = (char *****)ppppppcVar17;
          }
        }
      }
      ppppppcVar17 = &local_60;
      if (0xf < local_48) {
        ppppppcVar17 = (char ******)local_60;
      }
      local_70 = &local_res10;
      local_78 = local_67;
      ppppppcVar18 = &local_60;
      if (0xf < local_48) {
        ppppppcVar18 = (char ******)local_60;
      }
      local_80 = &local_68;
      local_88 = &local_res8;
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),param_1 + 0x74,ppppppcVar18,
                         (char *)((longlong)ppppppcVar17 + local_50));
      if ((iVar7 == 0) || (iVar7 == 1)) {
        if (local_res10 == &local_68) goto code_r0x00014004a31d;
        ppppppcVar17 = &local_60;
        if (0xf < local_48) {
          ppppppcVar17 = (char ******)local_60;
        }
        for (pcVar15 = (char *)((longlong)ppppppcVar17 + (local_50 - local_res8));
            0 < (longlong)pcVar15; pcVar15 = pcVar15 + -1) {
          ungetc((int)pcVar15[local_res8 + -1],*(FILE **)(param_1 + 0x80));
        }
        uVar12 = (uint)local_68;
        goto LAB_14004a3ca;
      }
      if (iVar7 == 3) {
        ppppppcVar17 = &local_60;
        if (0xf < local_48) {
          ppppppcVar17 = (char ******)local_60;
        }
        uVar12 = (uint)*(char *)ppppppcVar17;
        goto LAB_14004a3ca;
      }
    }
    uVar12 = 0xffffffff;
LAB_14004a3ca:
    if (0xf < local_48) {
      uVar11 = local_48 + 1;
      ppppppcVar17 = (char ******)local_60;
      if (0xfff < uVar11) {
        ppppppcVar17 = (char ******)local_60[-1];
        if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppppcVar17))) {
LAB_14004a438:
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar16 = auStack_a0;
LAB_14004a43f:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_14004a444;
          FUN_1400172e0();
        }
        uVar11 = local_48 + 0x28;
      }
      thunk_FUN_14028af80(ppppppcVar17,uVar11);
    }
  }
  return uVar12;
code_r0x00014004a31d:
  ppppppcVar17 = &local_60;
  if (0xf < local_48) {
    ppppppcVar17 = (char ******)local_60;
  }
  uVar11 = local_res8 - (longlong)ppppppcVar17;
  if (local_50 < (ulonglong)(local_res8 - (longlong)ppppppcVar17)) {
    uVar11 = local_50;
  }
  ppppppcVar17 = &local_60;
  if (0xf < local_48) {
    ppppppcVar17 = (char ******)local_60;
  }
  uVar14 = local_50 - uVar11;
  FUN_1404210f0(ppppppcVar17,(char *)((longlong)ppppppcVar17 + uVar11),uVar14 + 1);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  local_50 = uVar14;
  goto LAB_14004a14e;
}

