// Function: FUN_140096fa0
// Addr: 140096fa0
// Size: 9 bytes


ulonglong FUN_140096fa0(longlong *param_1,longlong *param_2,ulonglong param_3,char *param_4,
                       char param_5)

{
  int iVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 ****ppppuVar18;
  bool bVar19;
  uint uStack_78;
  ulonglong uStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  undefined8 ***apppuStack_58 [3];
  ulonglong uStack_40;
  
  lVar17 = 0;
  cVar6 = *param_4;
  while (cVar6 != '\0') {
    uVar12 = param_3 + 1;
    if (param_4[lVar17] != *param_4) {
      uVar12 = param_3;
    }
    cVar6 = param_4[lVar17 + 1];
    lVar17 = lVar17 + 1;
    param_3 = uVar12;
  }
  FUN_140016a10(apppuStack_58,param_3,0);
  plVar9 = (longlong *)FUN_1402917d0(1);
  plStack_60 = plVar9;
  plStack_68 = (longlong *)FUN_140013e10(&plStack_68);
  if ((plVar9 != (longlong *)0x0) &&
     (puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)(puVar10,1);
  }
  uStack_78 = 0xfffffffe;
  uVar12 = uStack_40;
  ppppuVar18 = (undefined8 ****)apppuStack_58[0];
  uVar8 = 0xfffffffe;
  if (param_3 != 0) {
    uStack_70 = uStack_40;
    uVar14 = 1;
code_r0x000140097090:
    lVar17 = 0;
    bVar4 = false;
    uVar15 = 0;
    do {
      if (param_4[lVar17] != '\0') {
        lVar16 = lVar17;
        do {
          lVar17 = lVar16;
          if (param_4[lVar16] == *param_4) break;
          lVar17 = lVar16 + 1;
          lVar5 = lVar16 + 1;
          lVar16 = lVar17;
        } while (param_4[lVar5] != '\0');
      }
      ppppuVar11 = apppuStack_58;
      if (0xf < uVar12) {
        ppppuVar11 = ppppuVar18;
      }
      if (*(char *)((longlong)ppppuVar11 + uVar15) == '\0') {
        lVar17 = lVar17 + uVar14;
        if ((param_4[lVar17] == *param_4) || (param_4[lVar17] == '\0')) {
          uStack_78 = (uint)uVar15;
        }
        else {
          if ((char)param_1[1] == '\0') {
            plVar9 = (longlong *)*param_1;
            if (plVar9 == (longlong *)0x0) {
code_r0x000140097141:
              *param_1 = 0;
            }
            else {
              if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                uVar8 = (**(code **)(*plVar9 + 0x30))();
              }
              else {
                uVar8 = (uint)**(byte **)plVar9[7];
              }
              if (uVar8 == 0xffffffff) goto code_r0x000140097141;
              *(char *)((longlong)param_1 + 9) = (char)uVar8;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            plVar9 = (longlong *)*param_2;
            if (plVar9 == (longlong *)0x0) {
code_r0x000140097186:
              *param_2 = 0;
            }
            else {
              if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                uVar8 = (**(code **)(*plVar9 + 0x30))();
              }
              else {
                uVar8 = (uint)**(byte **)plVar9[7];
              }
              if (uVar8 == 0xffffffff) goto code_r0x000140097186;
              *(char *)((longlong)param_2 + 9) = (char)uVar8;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          plVar9 = (longlong *)*param_1;
          if (plVar9 == (longlong *)0x0) {
            if (*param_2 != 0) {
code_r0x0001400971af:
              cVar6 = param_4[lVar17];
              if (param_5 == '\x01') {
                if ((char)param_1[1] == '\0') {
                  if (plVar9 != (longlong *)0x0) {
                    if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                      uVar8 = (**(code **)(*plVar9 + 0x30))();
                    }
                    else {
                      uVar8 = (uint)**(byte **)plVar9[7];
                    }
                    if (uVar8 != 0xffffffff) {
                      *(char *)((longlong)param_1 + 9) = (char)uVar8;
                      bVar19 = cVar6 == (char)uVar8;
                      *(undefined1 *)(param_1 + 1) = 1;
                      goto code_r0x00014009727f;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar19 = cVar6 == *(char *)((longlong)param_1 + 9);
              }
              else {
                cVar6 = (**(code **)(*plStack_68 + 0x20))(plStack_68,cVar6);
                if ((char)param_1[1] == '\0') {
                  plVar9 = (longlong *)*param_1;
                  if (plVar9 == (longlong *)0x0) {
code_r0x000140097260:
                    *param_1 = 0;
                  }
                  else {
                    if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                      uVar8 = (**(code **)(*plVar9 + 0x30))(plVar9);
                    }
                    else {
                      uVar8 = (uint)**(byte **)plVar9[7];
                    }
                    if (uVar8 == 0xffffffff) goto code_r0x000140097260;
                    *(char *)((longlong)param_1 + 9) = (char)uVar8;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                cVar7 = (**(code **)(*plStack_68 + 0x20))
                                  (plStack_68,*(undefined1 *)((longlong)param_1 + 9));
                bVar19 = cVar6 == cVar7;
              }
code_r0x00014009727f:
              uVar12 = uStack_70;
              if (bVar19) {
                bVar4 = true;
                goto code_r0x0001400972d0;
              }
            }
          }
          else if (*param_2 == 0) goto code_r0x0001400971af;
        }
        ppppuVar11 = apppuStack_58;
        if (0xf < uVar12) {
          ppppuVar11 = ppppuVar18;
        }
        uVar13 = 0x7f;
        if (uVar14 < 0x7f) {
          uVar13 = (undefined1)uVar14;
        }
        *(undefined1 *)((longlong)ppppuVar11 + uVar15) = uVar13;
        uStack_70 = uStack_40;
        uVar12 = uStack_40;
        ppppuVar18 = (undefined8 ****)apppuStack_58[0];
      }
      else {
        ppppuVar11 = apppuStack_58;
        if (0xf < uVar12) {
          ppppuVar11 = ppppuVar18;
        }
        lVar17 = lVar17 + *(char *)((longlong)ppppuVar11 + uVar15);
      }
code_r0x0001400972d0:
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_3);
    uVar8 = uStack_78;
    if (bVar4) {
      if ((char)param_1[1] == '\0') {
        FUN_1400975d0(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1400975d0(param_2);
      }
      plVar9 = (longlong *)*param_1;
      if (plVar9 == (longlong *)0x0) {
        if (*param_2 == 0) goto code_r0x00014009738c;
code_r0x000140097316:
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_78 = 0xffffffff;
        uVar14 = uVar14 + 1;
      }
      else {
        if (*param_2 != 0) goto code_r0x00014009738c;
        if (*(longlong *)plVar9[7] == 0) {
code_r0x000140097363:
          uVar8 = (**(code **)(*plVar9 + 0x38))();
        }
        else {
          iVar1 = *(int *)plVar9[10];
          if (iVar1 < 1) goto code_r0x000140097363;
          *(int *)plVar9[10] = iVar1 + -1;
          pbVar2 = *(byte **)plVar9[7];
          *(byte **)plVar9[7] = pbVar2 + 1;
          uVar8 = (uint)*pbVar2;
        }
        if (uVar8 == 0xffffffff) goto code_r0x000140097316;
        uStack_78 = 0xffffffff;
        *(undefined1 *)(param_1 + 1) = 0;
        uVar14 = uVar14 + 1;
      }
      goto code_r0x000140097090;
    }
  }
code_r0x00014009738c:
  if (0xf < uVar12) {
    uVar14 = uVar12 + 1;
    ppppuVar11 = ppppuVar18;
    if (0xfff < uVar14) {
      ppppuVar11 = (undefined8 ****)ppppuVar18[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar18 + (-8 - (longlong)ppppuVar11))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return uVar12;
      }
      uVar14 = uVar12 + 0x28;
    }
    func_0x00014028b040(ppppuVar11,uVar14);
  }
  return (ulonglong)uVar8;
}

