// Function: FUN_140096ed0
// Addr: 140096ed0
// Size: 1103 bytes


ulonglong FUN_140096ed0(longlong *param_1,longlong *param_2,ulonglong param_3,char *param_4,
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
  uint local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 ***local_58 [3];
  ulonglong local_40;
  
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
  FUN_140016940(local_58,param_3,0);
  plVar9 = (longlong *)FUN_140291700(1);
  local_60 = plVar9;
  local_68 = (longlong *)FUN_140013d40(&local_68);
  if ((plVar9 != (longlong *)0x0) &&
     (puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)(puVar10,1);
  }
  local_78 = 0xfffffffe;
  uVar12 = local_40;
  ppppuVar18 = (undefined8 ****)local_58[0];
  uVar8 = 0xfffffffe;
  if (param_3 != 0) {
    local_70 = local_40;
    uVar14 = 1;
LAB_140096fc0:
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
      ppppuVar11 = local_58;
      if (0xf < uVar12) {
        ppppuVar11 = ppppuVar18;
      }
      if (*(char *)((longlong)ppppuVar11 + uVar15) == '\0') {
        lVar17 = lVar17 + uVar14;
        if ((param_4[lVar17] == *param_4) || (param_4[lVar17] == '\0')) {
          local_78 = (uint)uVar15;
        }
        else {
          if ((char)param_1[1] == '\0') {
            plVar9 = (longlong *)*param_1;
            if (plVar9 == (longlong *)0x0) {
LAB_140097071:
              *param_1 = 0;
            }
            else {
              if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                uVar8 = (**(code **)(*plVar9 + 0x30))();
              }
              else {
                uVar8 = (uint)**(byte **)plVar9[7];
              }
              if (uVar8 == 0xffffffff) goto LAB_140097071;
              *(char *)((longlong)param_1 + 9) = (char)uVar8;
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_2[1] == '\0') {
            plVar9 = (longlong *)*param_2;
            if (plVar9 == (longlong *)0x0) {
LAB_1400970b6:
              *param_2 = 0;
            }
            else {
              if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                uVar8 = (**(code **)(*plVar9 + 0x30))();
              }
              else {
                uVar8 = (uint)**(byte **)plVar9[7];
              }
              if (uVar8 == 0xffffffff) goto LAB_1400970b6;
              *(char *)((longlong)param_2 + 9) = (char)uVar8;
            }
            *(undefined1 *)(param_2 + 1) = 1;
          }
          plVar9 = (longlong *)*param_1;
          if (plVar9 == (longlong *)0x0) {
            if (*param_2 != 0) {
LAB_1400970df:
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
                      goto LAB_1400971af;
                    }
                  }
                  *param_1 = 0;
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                bVar19 = cVar6 == *(char *)((longlong)param_1 + 9);
              }
              else {
                cVar6 = (**(code **)(*local_68 + 0x20))(local_68,cVar6);
                if ((char)param_1[1] == '\0') {
                  plVar9 = (longlong *)*param_1;
                  if (plVar9 == (longlong *)0x0) {
LAB_140097190:
                    *param_1 = 0;
                  }
                  else {
                    if ((*(byte **)plVar9[7] == (byte *)0x0) || (*(int *)plVar9[10] < 1)) {
                      uVar8 = (**(code **)(*plVar9 + 0x30))(plVar9);
                    }
                    else {
                      uVar8 = (uint)**(byte **)plVar9[7];
                    }
                    if (uVar8 == 0xffffffff) goto LAB_140097190;
                    *(char *)((longlong)param_1 + 9) = (char)uVar8;
                  }
                  *(undefined1 *)(param_1 + 1) = 1;
                }
                cVar7 = (**(code **)(*local_68 + 0x20))
                                  (local_68,*(undefined1 *)((longlong)param_1 + 9));
                bVar19 = cVar6 == cVar7;
              }
LAB_1400971af:
              uVar12 = local_70;
              if (bVar19) {
                bVar4 = true;
                goto LAB_140097200;
              }
            }
          }
          else if (*param_2 == 0) goto LAB_1400970df;
        }
        ppppuVar11 = local_58;
        if (0xf < uVar12) {
          ppppuVar11 = ppppuVar18;
        }
        uVar13 = 0x7f;
        if (uVar14 < 0x7f) {
          uVar13 = (undefined1)uVar14;
        }
        *(undefined1 *)((longlong)ppppuVar11 + uVar15) = uVar13;
        local_70 = local_40;
        uVar12 = local_40;
        ppppuVar18 = (undefined8 ****)local_58[0];
      }
      else {
        ppppuVar11 = local_58;
        if (0xf < uVar12) {
          ppppuVar11 = ppppuVar18;
        }
        lVar17 = lVar17 + *(char *)((longlong)ppppuVar11 + uVar15);
      }
LAB_140097200:
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_3);
    uVar8 = local_78;
    if (bVar4) {
      if ((char)param_1[1] == '\0') {
        FUN_140097500(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_140097500(param_2);
      }
      plVar9 = (longlong *)*param_1;
      if (plVar9 == (longlong *)0x0) {
        if (*param_2 == 0) goto LAB_1400972bc;
LAB_140097246:
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        local_78 = 0xffffffff;
        uVar14 = uVar14 + 1;
      }
      else {
        if (*param_2 != 0) goto LAB_1400972bc;
        if (*(longlong *)plVar9[7] == 0) {
LAB_140097293:
          uVar8 = (**(code **)(*plVar9 + 0x38))();
        }
        else {
          iVar1 = *(int *)plVar9[10];
          if (iVar1 < 1) goto LAB_140097293;
          *(int *)plVar9[10] = iVar1 + -1;
          pbVar2 = *(byte **)plVar9[7];
          *(byte **)plVar9[7] = pbVar2 + 1;
          uVar8 = (uint)*pbVar2;
        }
        if (uVar8 == 0xffffffff) goto LAB_140097246;
        local_78 = 0xffffffff;
        *(undefined1 *)(param_1 + 1) = 0;
        uVar14 = uVar14 + 1;
      }
      goto LAB_140096fc0;
    }
  }
LAB_1400972bc:
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
    thunk_FUN_14028af80(ppppuVar11,uVar14);
  }
  return (ulonglong)uVar8;
}

