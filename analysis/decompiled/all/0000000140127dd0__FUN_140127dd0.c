// Function: FUN_140127dd0
// Addr: 140127dd0
// Size: 876 bytes


/* WARNING: Removing unreachable block (ram,0x0001401282ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140127dd0(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_228 [512];
  
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e93b8) &&
     (FUN_14028b210(&DAT_1404e93b8), DAT_1404e93b8 == -1)) {
    (*DAT_1404266f8)();
    FUN_14028b1a0(&DAT_1404e93b8);
  }
  pbVar1 = (byte *)(param_1 + 0x168);
  uVar9 = 0;
  if (*(int *)pbVar1 != 0) {
    if (*(longlong *)(param_1 + 0x160) != 0) {
      (*DAT_140426ae0)();
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    lVar3 = DAT_1404e8f28;
    plVar2 = DAT_1404e8f18;
    lVar8 = DAT_1404e8ee8;
    plVar16 = DAT_1404e8ed8;
    uVar14 = (((((ulonglong)*pbVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3 & DAT_1404e8f00;
    plVar10 = *(longlong **)(DAT_1404e8ee8 + 8 + uVar14 * 0x10);
    if (plVar10 == DAT_1404e8ed8) {
LAB_140127ed0:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar10[2];
      while (*(int *)pbVar1 != iVar4) {
        if (plVar10 == *(longlong **)(DAT_1404e8ee8 + uVar14 * 0x10)) goto LAB_140127ed0;
        plVar10 = (longlong *)plVar10[1];
        iVar4 = (int)plVar10[2];
      }
    }
    plVar15 = DAT_1404e8ed8;
    if (plVar10 != (longlong *)0x0) {
      plVar15 = plVar10;
    }
    if (plVar15 != DAT_1404e8ed8) {
      uVar9 = (((((ulonglong)*(byte *)(plVar15 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar15 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar15 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar15 + 0x13)) * 0x100000001b3 & DAT_1404e8f00;
      plVar10 = *(longlong **)(DAT_1404e8ee8 + uVar9 * 0x10);
      if (*(longlong **)(DAT_1404e8ee8 + 8 + uVar9 * 0x10) == plVar15) {
        if (plVar10 == plVar15) {
          *(longlong **)(DAT_1404e8ee8 + uVar9 * 0x10) = DAT_1404e8ed8;
          *(longlong **)(lVar8 + 8 + uVar9 * 0x10) = plVar16;
        }
        else {
          *(longlong *)(DAT_1404e8ee8 + 8 + uVar9 * 0x10) = plVar15[1];
        }
      }
      else if (plVar10 == plVar15) {
        *(longlong *)(DAT_1404e8ee8 + uVar9 * 0x10) = *plVar15;
      }
      lVar8 = *plVar15;
      _DAT_1404e8ee0 = _DAT_1404e8ee0 + -1;
      *(longlong *)plVar15[1] = lVar8;
      *(longlong *)(lVar8 + 8) = plVar15[1];
      func_0x00014028b040(plVar15,0x20);
      return;
    }
    uVar14 = (((((ulonglong)*pbVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3 & DAT_1404e8f40;
    plVar10 = *(longlong **)(DAT_1404e8f28 + 8 + uVar14 * 0x10);
    if (plVar10 == DAT_1404e8f18) {
LAB_140127ff0:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar10[2];
      while (*(int *)pbVar1 != iVar4) {
        if (plVar10 == *(longlong **)(DAT_1404e8f28 + uVar14 * 0x10)) goto LAB_140127ff0;
        plVar10 = (longlong *)plVar10[1];
        iVar4 = (int)plVar10[2];
      }
    }
    plVar16 = DAT_1404e8f18;
    if (plVar10 != (longlong *)0x0) {
      plVar16 = plVar10;
    }
    if (plVar16 != DAT_1404e8f18) {
      uVar14 = (((((ulonglong)*(byte *)(plVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar16 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar16 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar16 + 0x13)) * 0x100000001b3 & DAT_1404e8f40;
      plVar10 = *(longlong **)(DAT_1404e8f28 + uVar14 * 0x10);
      if (*(longlong **)(DAT_1404e8f28 + 8 + uVar14 * 0x10) == plVar16) {
        if (plVar10 == plVar16) {
          *(longlong **)(DAT_1404e8f28 + uVar14 * 0x10) = DAT_1404e8f18;
          *(longlong **)(lVar3 + 8 + uVar14 * 0x10) = plVar2;
        }
        else {
          *(longlong *)(DAT_1404e8f28 + 8 + uVar14 * 0x10) = plVar16[1];
        }
      }
      else if (plVar10 == plVar16) {
        *(longlong *)(DAT_1404e8f28 + uVar14 * 0x10) = *plVar16;
      }
      lVar8 = *plVar16;
      lRam00000001404e8f20 = lRam00000001404e8f20 + -1;
      *(longlong *)plVar16[1] = lVar8;
      *(longlong *)(lVar8 + 8) = plVar16[1];
      func_0x00014028b040(plVar16,0x20);
    }
  }
  uVar14 = uVar9;
  if ((*(longlong *)(param_1 + 0x158) != -1) && (*(char *)(param_1 + 8) != '\0')) {
    uVar6 = (*DAT_140426438)(L"ntdll");
    pcVar7 = (code *)(*DAT_140426730)(uVar6,"NtResumeProcess");
    (*pcVar7)(*(undefined8 *)(param_1 + 0x158));
    *(undefined1 *)(param_1 + 8) = 0;
  }
  do {
    if (((&DAT_1404e8e40)[uVar14] != 0) &&
       (lVar8 = func_0x00014028f030(*(undefined8 *)(param_1 + 0x170),
                                    *(undefined8 *)(param_1 + 0x178)),
       lVar8 != *(longlong *)(param_1 + 0x178))) {
      (&DAT_1404e8e40)[uVar14] = 0;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x10);
  if (*(longlong *)(param_1 + 0x158) == -1) goto LAB_140128334;
  puVar12 = *(undefined8 **)(param_1 + 0x170);
  puVar13 = *(undefined8 **)(param_1 + 0x178);
  uVar14 = uVar9;
  if (puVar12 == puVar13) {
code_r0x0001401281ca:
    cVar11 = '\0';
  }
  else {
    do {
      uVar6 = *puVar12;
      func_0x000140421870(auStack_228,0,0x200);
      (*DAT_140426a90)(uVar6,auStack_228,0x100);
      iVar4 = FUN_1402c1390(auStack_228);
      if (iVar4 == 0) {
        uVar14 = (ulonglong)((int)uVar14 + 1);
        iVar4 = (*DAT_1404269e8)(uVar6);
        if (iVar4 == 0) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar13);
    if (((int)uVar14 != 2) || ((int)uVar9 != 1)) goto code_r0x0001401281ca;
    cVar11 = (char)uVar9;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x178);
  for (puVar13 = *(undefined8 **)(param_1 + 0x170); puVar13 != puVar12; puVar13 = puVar13 + 1) {
    uVar6 = *puVar13;
    if ((cVar11 == '\0') || (iVar4 = (*DAT_1404269e8)(uVar6), iVar4 == 0)) {
      uVar5 = (*DAT_1404269d8)(uVar6,0xfffffff0);
      (*DAT_140426990)(uVar6,0xfffffff0,uVar5 & 0xefffffff);
      (*_UNK_140426888)(uVar6,0);
      (*DAT_140426a98)(uVar6,0x11,0,1);
      (*DAT_140426a98)(uVar6,0x16,0,1);
      (*DAT_140426a98)(uVar6,0x10,0,0);
    }
  }
  if (*(int *)pbVar1 == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    (*DAT_140426220)(*(undefined8 *)(param_1 + 0x158),0);
  }
  else {
    lVar8 = (*_UNK_140426678)(0x80000000,0);
    if (lVar8 != -1) {
      (*DAT_1404262e0)(lVar8);
    }
    (*DAT_140426368)(lVar8);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
  }
  (*DAT_140426368)(*(undefined8 *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
LAB_140128334:
  if (*(longlong *)(param_1 + 0x170) != *(longlong *)(param_1 + 0x178)) {
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x170);
  }
  return;
}

