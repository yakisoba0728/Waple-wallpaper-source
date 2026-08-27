// Function: FUN_1401a8ce0
// Addr: 1401a8ce0
// Size: 1834 bytes


/* WARNING: Removing unreachable block (ram,0x0001401a8d37) */

ulonglong FUN_1401a8ce0(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int local_res20;
  
  uVar23 = *param_2;
  if (uVar23 != param_2[1]) {
    param_2[1] = uVar23;
  }
  if ((*(uint *)(param_1 + 1) & 0xff) != 6) {
    return uVar23 & 0xffffffffffffff00;
  }
  local_res20 = -1;
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar20 = *(longlong **)*puVar1;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    plVar22 = (longlong *)0x0;
  }
  else {
    plVar22 = (longlong *)*puVar2;
  }
  do {
    bVar7 = puVar2 == (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      bVar7 = plVar20 == plVar22;
    }
    puVar21 = param_2;
    if (bVar7) goto LAB_1401a9398;
    lVar12 = FUN_140087490(plVar20 + 6,"value","");
    if (lVar12 == 0) {
      lVar12 = FUN_140084ac0();
    }
    lVar13 = FUN_140087490(plVar20 + 6,"frame","");
    if (lVar13 == 0) {
      lVar13 = FUN_140084ac0();
    }
    lVar14 = FUN_140087490(plVar20 + 6,&DAT_14048eee4,&DAT_14048eee8);
    if (lVar14 == 0) {
      lVar14 = FUN_140084ac0();
    }
    lVar15 = FUN_140087490(plVar20 + 6,"front","");
    if (lVar15 == 0) {
      lVar15 = FUN_140084ac0();
    }
    if ((*(byte *)(lVar12 + 8) - 1 < 3) && (*(byte *)(lVar13 + 8) - 1 < 3)) {
      if (*(char *)(lVar14 + 8) == '\a') {
        lVar16 = FUN_140087490(lVar14,"enabled","");
        if (lVar16 == 0) {
          lVar16 = FUN_140084ac0();
        }
        if (*(char *)(lVar16 + 8) == '\x05') {
          lVar16 = FUN_140087490(lVar14,"enabled","");
          if (lVar16 == 0) {
            lVar16 = FUN_140084ac0();
          }
          cVar10 = FUN_140086300(lVar16);
          if (cVar10 == '\0') goto LAB_1401a8ef2;
        }
        bVar7 = true;
      }
      else {
LAB_1401a8ef2:
        bVar7 = false;
      }
      if (*(char *)(lVar15 + 8) == '\a') {
        lVar16 = FUN_140087490(lVar15,"enabled","");
        if (lVar16 == 0) {
          lVar16 = FUN_140084ac0();
        }
        if (*(char *)(lVar16 + 8) == '\x05') {
          lVar16 = FUN_140087490(lVar15,"enabled","");
          if (lVar16 == 0) {
            lVar16 = FUN_140084ac0();
          }
          cVar10 = FUN_140086300(lVar16);
          if (cVar10 == '\0') goto LAB_1401a8f53;
        }
        bVar8 = true;
      }
      else {
LAB_1401a8f53:
        bVar8 = false;
      }
      lVar16 = FUN_140087490(plVar20 + 6,&DAT_14048eea8,&DAT_14048eeac);
      if (lVar16 == 0) {
        lVar16 = FUN_140084ac0();
      }
      if (*(char *)(lVar16 + 8) == '\x05') {
        lVar16 = FUN_140087490(plVar20 + 6,&DAT_14048eea8,&DAT_14048eeac);
        if (lVar16 == 0) {
          lVar16 = FUN_140084ac0();
        }
        cVar10 = FUN_140086300(lVar16);
        if (cVar10 == '\0') goto LAB_1401a8faf;
        bVar6 = true;
      }
      else {
LAB_1401a8faf:
        bVar6 = false;
      }
      iVar11 = FUN_140085ee0(lVar13);
      if (local_res20 < iVar11) {
        iVar30 = 0;
        iVar28 = 0;
        iVar29 = 0;
        iVar27 = 0;
        iVar26 = FUN_140086220(lVar12);
        if (bVar6) {
          uVar24 = 4;
        }
        else {
          uVar24 = 0;
          if (bVar7) {
            lVar12 = FUN_140087490(lVar14,&DAT_140473c0c,&DAT_140473c0d);
            if (lVar12 == 0) {
              lVar12 = FUN_140084ac0();
            }
            lVar13 = FUN_140087490(lVar14,&DAT_140473c14,&DAT_140473c15);
            if (lVar13 == 0) {
              lVar13 = FUN_140084ac0();
            }
            uVar24 = 1;
            if (*(byte *)(lVar12 + 8) - 1 < 3) {
              iVar30 = FUN_140086220(lVar12);
            }
            if (*(byte *)(lVar13 + 8) - 1 < 3) {
              iVar28 = FUN_140086220(lVar13);
            }
          }
          if (bVar8) {
            lVar12 = FUN_140087490(lVar15,&DAT_140473c0c,&DAT_140473c0d);
            if (lVar12 == 0) {
              lVar12 = FUN_140084ac0();
            }
            lVar13 = FUN_140087490(lVar15,&DAT_140473c14,&DAT_140473c15);
            if (lVar13 == 0) {
              lVar13 = FUN_140084ac0();
            }
            uVar24 = uVar24 | 2;
            if (*(byte *)(lVar12 + 8) - 1 < 3) {
              iVar29 = FUN_140086220(lVar12);
            }
            if (*(byte *)(lVar13 + 8) - 1 < 3) {
              iVar27 = FUN_140086220(lVar13);
            }
          }
        }
        piVar3 = (int *)param_2[1];
        local_res20 = iVar11;
        if (piVar3 == (int *)param_2[2]) {
          puVar21 = (ulonglong *)((longlong)((longlong)piVar3 - *param_2) / 0x1c);
          if (puVar21 == (ulonglong *)0x924924924924924) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar23 = ((longlong)((longlong)param_2[2] - *param_2) >> 2) * 0x6db6db6db6db6db7;
          uVar17 = 0x924924924924924 - (uVar23 >> 1);
          if (uVar17 <= uVar23 && uVar23 - uVar17 != 0) {
LAB_1401a9406:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          uVar23 = (uVar23 >> 1) + uVar23;
          uVar17 = (longlong)puVar21 + 1;
          uVar25 = uVar17;
          if (uVar17 <= uVar23) {
            uVar25 = uVar23;
          }
          if (0x924924924924924 < uVar25) goto LAB_1401a9406;
          uVar25 = uVar25 * 0x1c;
          if (uVar25 == 0) {
            uVar23 = 0;
          }
          else if (uVar25 < 0x1000) {
            uVar23 = FUN_14028af20(uVar25);
          }
          else {
            if (uVar25 + 0x27 <= uVar25) goto LAB_1401a9406;
            lVar12 = FUN_14028af20();
            if (lVar12 == 0) {
LAB_1401a9391:
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
LAB_1401a9398:
              return CONCAT71((int7)(puVar21[1] >> 8),*puVar21 != puVar21[1]);
            }
            uVar23 = lVar12 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar23 - 8) = lVar12;
          }
          lVar12 = (longlong)puVar21 * 0x1c;
          *(int *)(uVar23 + 4 + lVar12) = iVar26;
          *(int *)(uVar23 + 0xc + lVar12) = iVar30;
          *(int *)(uVar23 + 0x10 + lVar12) = iVar28;
          *(int *)(uVar23 + 0x14 + lVar12) = iVar29;
          *(int *)(uVar23 + 0x18 + lVar12) = iVar27;
          *(int *)(uVar23 + lVar12) = iVar11;
          *(uint *)(uVar23 + 8 + lVar12) = uVar24;
          uVar18 = *param_2;
          if (piVar3 == (int *)param_2[1]) {
            FUN_1404210f0(uVar23,uVar18,(longlong)param_2[1] - uVar18);
          }
          else {
            FUN_1404210f0(uVar23,uVar18,(longlong)piVar3 - uVar18);
            FUN_1404210f0(lVar12 + 0x1c + uVar23,piVar3,param_2[1] - (longlong)piVar3);
          }
          uVar18 = *param_2;
          if (uVar18 != 0) {
            uVar19 = ((longlong)(param_2[2] - uVar18) >> 2) * 4;
            if (0xfff < uVar19) {
              puVar21 = param_2;
              if (0x1f < (uVar18 - *(ulonglong *)(uVar18 - 8)) - 8) goto LAB_1401a9391;
              uVar19 = uVar19 + 0x27;
              uVar18 = *(ulonglong *)(uVar18 - 8);
            }
            thunk_FUN_14028af80(uVar18,uVar19);
          }
          *param_2 = uVar23;
          param_2[1] = uVar17 * 0x1c + uVar23;
          param_2[2] = uVar25 + uVar23;
        }
        else {
          piVar3[1] = iVar26;
          piVar3[3] = iVar30;
          piVar3[4] = iVar28;
          piVar3[5] = iVar29;
          piVar3[6] = iVar27;
          *piVar3 = iVar11;
          piVar3[2] = uVar24;
          param_2[1] = param_2[1] + 0x1c;
        }
      }
    }
    plVar4 = (longlong *)plVar20[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar10 = *(char *)(*plVar4 + 0x19);
      plVar20 = plVar4;
      while (cVar10 == '\0') {
        plVar20 = (longlong *)*plVar20;
        cVar10 = *(char *)(*plVar20 + 0x19);
      }
    }
    else {
      cVar10 = *(char *)(plVar20[1] + 0x19);
      plVar9 = (longlong *)plVar20[1];
      plVar4 = plVar20;
      while ((plVar20 = plVar9, cVar10 == '\0' && (plVar4 == (longlong *)plVar20[2]))) {
        cVar10 = *(char *)(plVar20[1] + 0x19);
        plVar9 = (longlong *)plVar20[1];
        plVar4 = plVar20;
      }
    }
  } while( true );
}

