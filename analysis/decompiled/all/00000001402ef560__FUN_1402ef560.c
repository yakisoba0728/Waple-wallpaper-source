// Function: FUN_1402ef560
// Addr: 1402ef560
// Size: 781 bytes


/* WARNING: Removing unreachable block (ram,0x0001402ef6ff) */

int FUN_1402ef560(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char *_Str2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (0x2000e < *(int *)(param_2 + 0x14)) {
    return 4;
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar2 != 0) {
    _Str2 = *(char **)(param_2 + 8);
    uVar12 = 0;
    do {
      plVar8 = (longlong *)param_1[uVar12 + 3];
      lVar3 = *plVar8;
      iVar7 = strcmp(*(char **)(lVar3 + 8),_Str2);
      if (iVar7 == 0) {
        if (*(int *)(param_2 + 0x10) <= *(int *)(lVar3 + 0x10)) {
          return 5;
        }
        plVar9 = param_1 + 3;
        plVar1 = plVar9 + uVar2;
        if (plVar9 < plVar1) goto LAB_1402ef621;
        break;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < uVar2);
  }
LAB_1402ef662:
  if (0x1f < *(uint *)((longlong)param_1 + 0x14)) {
    return 0x30;
  }
  iVar7 = *(int *)(param_2 + 4);
  lVar3 = *param_1;
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      return 6;
    }
    iVar13 = 0;
    plVar8 = (longlong *)0x0;
LAB_1402ef6ba:
    if (iVar13 != 0) {
      return iVar13;
    }
  }
  else {
    plVar8 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,iVar7);
    iVar13 = 0x40;
    if (plVar8 == (longlong *)0x0) goto LAB_1402ef6ba;
    FUN_1404217a0(plVar8,0,(longlong)iVar7);
  }
  *plVar8 = (longlong)param_2;
  plVar8[1] = (longlong)param_1;
  plVar8[2] = lVar3;
  if ((*param_2 & 2) != 0) {
    lVar4 = *param_1;
    plVar9 = (longlong *)(**(code **)(lVar4 + 8))();
    if (plVar9 == (longlong *)0x0) {
      iVar7 = 0x40;
    }
    else {
      lVar5 = *plVar8;
      iVar7 = 0;
      plVar8[3] = lVar5;
      *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(lVar5 + 0x38);
      if ((*(longlong *)(lVar5 + 0x60) == 0) ||
         (pcVar6 = *(code **)(*(longlong *)(lVar5 + 0x60) + 8), pcVar6 == (code *)0x0)) {
LAB_1402ef750:
        if (*(int *)(lVar5 + 0x38) == 0x53564720) {
          plVar8[0xe] = *(longlong *)(lVar5 + 0x40);
        }
        plVar1 = param_1 + 0x23;
        plVar9[2] = (longlong)plVar8;
        if (plVar1 != (longlong *)0x0) {
          lVar5 = param_1[0x24];
          plVar9[1] = 0;
          *plVar9 = lVar5;
          if (lVar5 == 0) {
            *plVar1 = (longlong)plVar9;
          }
          else {
            *(longlong **)(lVar5 + 8) = plVar9;
          }
          param_1[0x24] = (longlong)plVar9;
        }
        lVar5 = *plVar1;
        while ((lVar10 = 0, lVar5 != 0 &&
               (lVar10 = *(longlong *)(lVar5 + 0x10), *(int *)(lVar10 + 0x20) != 0x6f75746c))) {
          lVar5 = *(longlong *)(lVar5 + 8);
        }
        param_1[0x25] = lVar10;
        if (iVar7 == 0) goto LAB_1402ef7d0;
      }
      else {
        iVar7 = (*pcVar6)(lVar4);
        if (iVar7 == 0) {
          plVar8[0xd] = *(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x20);
          plVar8[0xe] = *(longlong *)(lVar5 + 0x40);
          goto LAB_1402ef750;
        }
      }
      (**(code **)(lVar4 + 0x10))(lVar4,plVar9);
    }
LAB_1402ef7d0:
    if (iVar7 != 0) goto LAB_1402ef808;
  }
  if ((*(byte *)*plVar8 & 4) != 0) {
    param_1[0x26] = (longlong)plVar8;
  }
  if ((*(byte *)*plVar8 & 1) != 0) {
    plVar8[3] = *plVar8;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (iVar7 = (**(code **)(param_2 + 0x20))(plVar8), iVar7 == 0)) {
    param_1[(ulonglong)*(uint *)((longlong)param_1 + 0x14) + 3] = (longlong)plVar8;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    return 0;
  }
LAB_1402ef808:
  if (((((*(byte *)*plVar8 & 2) != 0) && (lVar4 = plVar8[3], lVar4 != 0)) &&
      (*(int *)(lVar4 + 0x38) == 0x6f75746c)) && (plVar8[0xc] != 0)) {
    (**(code **)(*(longlong *)(lVar4 + 0x60) + 0x28))();
  }
  (**(code **)(lVar3 + 0x10))(lVar3,plVar8);
  return iVar7;
LAB_1402ef621:
  if ((longlong *)*plVar9 != plVar8) goto code_r0x0001402ef626;
  *(uint *)((longlong)param_1 + 0x14) = uVar2 - 1;
  for (; plVar9 < plVar1 + -1; plVar9 = plVar9 + 1) {
    *plVar9 = plVar9[1];
  }
  plVar1[-1] = 0;
  FUN_1402ef390(plVar8);
  goto LAB_1402ef662;
code_r0x0001402ef626:
  plVar9 = plVar9 + 1;
  if (plVar1 <= plVar9) goto LAB_1402ef662;
  goto LAB_1402ef621;
}

