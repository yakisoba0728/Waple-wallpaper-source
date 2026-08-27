// Function: FUN_140065190
// Addr: 140065190
// Size: 934 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140065190(void)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong local_48 [5];
  
  puVar11 = auStack_68;
  if ((DAT_1404e52e4 >> 0xe & 1) == 0) {
    FUN_140070690(DAT_1404e52e4,1);
  }
  DAT_1404e52e4 = DAT_1404e52e4 & 0xfffff9ff;
  FUN_1401417e0(&DAT_1404e6410);
  puVar4 = DAT_1404e63d0;
  for (puVar2 = (undefined8 *)*DAT_1404e63d0; puVar2 != puVar4; puVar2 = (undefined8 *)*puVar2) {
    plVar9 = (longlong *)puVar2[6];
    if (plVar9 != (longlong *)0x0) {
      if ((longlong *)*plVar9 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar9 + 0x18))();
      }
      *plVar9 = 0;
      DestroyWindow((HWND)plVar9[1]);
      thunk_FUN_14028af80(plVar9,0x18);
    }
  }
  FUN_140078a40(&DAT_1404e63c8);
  DAT_1404e52e4 = DAT_1404e52e4 & 0xffefffff;
  FUN_140062e40();
  FUN_14000d660(&DAT_1404e8ae0);
  puVar4 = DAT_1404e5330;
  for (puVar2 = (undefined8 *)*DAT_1404e5330; puVar2 != puVar4; puVar2 = (undefined8 *)*puVar2) {
    if ((longlong *)puVar2[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar2[6] + 0x18))();
      puVar2[6] = 0;
    }
  }
  FUN_140078d10(&DAT_1404e5328);
  FUN_1400d00b0(&DAT_1404e55a8);
  FUN_140138a90(&DAT_1404e6128);
  LOCK();
  DAT_1404e7e8b = 1;
  UNLOCK();
  if (DAT_1404e6288 != 0) {
    FUN_1400150a0(&DAT_1404e6280);
  }
  plVar9 = (longlong *)*DAT_1404e6270;
  cVar1 = *(char *)((longlong)plVar9 + 0x19);
  while (cVar1 == '\0') {
    if ((longlong *)plVar9[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar9[9] + 0x18))();
    }
    plVar10 = (longlong *)plVar9[2];
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar10 + 0x19);
      plVar9 = plVar10;
      while (cVar1 == '\0') {
        plVar9 = (longlong *)*plVar9;
        cVar1 = *(char *)(*plVar9 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar9[1] + 0x19);
      plVar5 = (longlong *)plVar9[1];
      plVar10 = plVar9;
      while ((plVar9 = plVar5, cVar1 == '\0' && (plVar10 == (longlong *)plVar9[2]))) {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar5 = (longlong *)plVar9[1];
        plVar10 = plVar9;
      }
    }
    cVar1 = *(char *)((longlong)plVar9 + 0x19);
  }
  cVar1 = *(char *)(*DAT_1404e6270 + 0x19);
  plVar9 = (longlong *)*DAT_1404e6270;
  plVar10 = DAT_1404e6270;
  while (DAT_1404e6270 = plVar10, cVar1 == '\0') {
    if ((HMODULE)plVar9[8] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)plVar9[8]);
    }
    plVar10 = (longlong *)plVar9[2];
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar10 + 0x19);
      while (cVar1 == '\0') {
        plVar10 = (longlong *)*plVar10;
        cVar1 = *(char *)(*plVar10 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar9[1] + 0x19);
      plVar5 = (longlong *)plVar9[1];
      while ((plVar10 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)plVar10[2]))) {
        cVar1 = *(char *)(plVar10[1] + 0x19);
        plVar5 = (longlong *)plVar10[1];
        plVar9 = plVar10;
      }
    }
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
    plVar9 = plVar10;
    plVar10 = DAT_1404e6270;
  }
  FUN_140056e20(&DAT_1404e6270,&DAT_1404e6270,plVar10[1]);
  plVar10[1] = (longlong)plVar10;
  *plVar10 = (longlong)plVar10;
  plVar10[2] = (longlong)plVar10;
  _DAT_1404e6278 = 0;
  _DAT_1404e62e0 = 0;
  if (DAT_1404e6250 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6250 + 0x38))(DAT_1404e6250,DAT_1404e6258);
  }
  if (DAT_1404e6258 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6258 + 0x10))(DAT_1404e6258);
    DAT_1404e6258 = (longlong *)0x0;
  }
  if (DAT_1404e6250 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6250 + 0x10))();
    DAT_1404e6250 = (longlong *)0x0;
  }
  plVar9 = DAT_1404e5318;
  plVar10 = DAT_1404e5310;
  if (DAT_1404e5310 != DAT_1404e5318) {
    do {
      lVar7 = *plVar10;
      if (lVar7 != 0) {
        FUN_140058130(lVar7);
        thunk_FUN_14028af80(lVar7,0xf0);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar9);
    if (DAT_1404e5310 != DAT_1404e5318) {
      DAT_1404e5318 = DAT_1404e5310;
    }
  }
  local_48[2] = 0;
  local_48[1] = 0;
  local_48[0] = 0;
  local_48[3] = 0xf;
  FUN_14005a890(local_48);
  if (0xf < (ulonglong)local_48[3]) {
    uVar8 = local_48[3] + 1;
    lVar7 = local_48[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_48[0] + -8);
      if (0x1f < (local_48[0] - lVar7) - 8U) {
        pcVar3 = (code *)swi(0x29);
        DAT_1404df6dc = (*pcVar3)(5);
        puVar11 = auStack_60;
        goto LAB_14006551a;
      }
      uVar8 = local_48[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar8);
  }
  iVar6 = FUN_140290d80(&DAT_1404df690);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df6dc != 0x7fffffff) {
    FUN_14005b860(DAT_1404e52b0);
    DAT_1404e52b0 = 0;
    FUN_140290ea0(&DAT_1404df690);
    return;
  }
LAB_14006551a:
  DAT_1404df6dc = DAT_1404df6dc + -1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_14006552c;
  FUN_140290d30(6);
}

