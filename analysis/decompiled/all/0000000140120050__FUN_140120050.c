// Function: FUN_140120050
// Addr: 140120050
// Size: 1401 bytes


undefined8 FUN_140120050(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  LONG LVar3;
  longlong *plVar4;
  HWND hWnd;
  code *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 *puVar16;
  char cVar17;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  longlong *local_res18;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  byte local_c4;
  undefined1 uStack_c3;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  tagRECT local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  uint local_70;
  undefined1 local_68 [48];
  
  puVar16 = auStack_f8;
  LOCK();
  *(undefined1 *)(param_1 + 0xe49) = 0;
  UNLOCK();
  local_res18 = (longlong *)0x0;
  if (*(ulonglong *)(param_1 + 0x98) < 8) {
    lVar13 = param_1 + 0x80;
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x80);
  }
  cVar17 = '\0';
  iVar8 = MFCreateSourceReaderFromURL(lVar13,0,&local_res18);
  if (-1 < iVar8) {
    local_d8 = local_d8 & 0xffffff00;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c8 = local_c8 & 0xffffff00;
    local_c4 = 0;
    uStack_c3 = 0;
    uStack_c2 = 0;
    uStack_c0 = 0;
    iVar8 = FUN_1400f2750(local_res18,&local_d8);
    cVar17 = '\0';
    if (-1 < iVar8) {
      cVar17 = (char)local_c8;
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
      local_res18 = (longlong *)0x0;
    }
  }
  if ((*(char *)(param_1 + 0xea6) != '\0') ||
     ((*(longlong *)(param_1 + 0xe30) != 0 &&
      (((*(uint *)(*(longlong *)(param_1 + 0xe30) + 0x128) & 0x6000) != 0) != (bool)cVar17)))) {
    FUN_1401205d0(param_1);
  }
  *(undefined1 *)(param_1 + 0xea6) = 0;
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x98))
                    (*(longlong **)(param_1 + 0x70),&local_90);
  uVar9 = FUN_140086de0(uVar9,"wproperties","");
  FUN_140085090(local_68,uVar9);
  FUN_140085440(&local_90);
  local_res10 = FUN_140086de0(local_68,"videotex","");
  puVar10 = (undefined8 *)FUN_140005790(&local_d8,param_1 + 0x80);
  local_b8.right._0_1_ = 4;
  uVar15 = *(uint *)(puVar10 + 2);
  uVar11 = (ulonglong)uVar15;
  if (0xf < (ulonglong)puVar10[3]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  puVar12 = (uint *)_malloc_base(uVar11 + 5);
  if (puVar12 == (uint *)0x0) {
    FUN_140017170(&local_b8,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    FUN_140084bc0(&local_b8);
  }
  *puVar12 = uVar15;
  uVar15 = local_b8.right | 0x100;
  FUN_1404210f0(puVar12 + 1,puVar10,uVar11);
  *(undefined1 *)((longlong)puVar12 + uVar11 + 4) = 0;
  puVar10 = (undefined8 *)FUN_140086de0(local_res10,"value","");
  LVar3 = *(LONG *)(puVar10 + 1);
  *(uint *)(puVar10 + 1) = uVar15;
  local_b8.right = LVar3;
  local_b8._0_8_ = *puVar10;
  *puVar10 = puVar12;
  lVar13 = puVar10[2];
  puVar10[2] = 0;
  local_98 = puVar10[4];
  local_a0 = puVar10[3];
  puVar10[3] = 0;
  puVar10[4] = 0;
  local_a8 = lVar13;
  FUN_140086d30(&local_b8);
  if (lVar13 != 0) {
    FUN_140017240(lVar13 + 0x40);
    FUN_140017240(lVar13 + 0x20);
    FUN_140017240(lVar13);
    thunk_FUN_14028af80(lVar13,0x60);
  }
  uVar11 = CONCAT44(uStack_bc,uStack_c0);
  if (uVar11 < 0x10) {
LAB_140120299:
    puVar7 = auStack_f8;
    if (*(longlong *)(param_1 + 0xe28) != 0) goto LAB_140120469;
    uVar15 = 0x56200;
    if (cVar17 == '\0') {
      uVar15 = 0x50200;
    }
    if (((*(char *)(param_1 + 0xea4) != '\0') && ((*(byte *)(param_1 + 0xea8) & 1) == 0)) &&
       (uVar15 = 0x76200, cVar17 == '\0')) {
      uVar15 = 0x70200;
    }
    local_d8 = (uint)*(undefined8 *)(param_1 + 0x78);
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    local_res10 = local_res10 & 0xffff000000000000;
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x70);
    local_c8 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xa0);
    uStack_d0 = (undefined4)uVar9;
    uStack_cc = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_c4 = (byte)(uVar15 >> 0xd) & 1;
    uStack_c2 = 0x101;
    uStack_c3 = 1;
    local_res8[0] = 0;
    iVar8 = FUN_14012ac60(&local_d8,&local_res10,param_1 + 0xc0,local_res8);
    if (iVar8 < 0) {
      *(undefined1 *)(param_1 + 0xea7) = 1;
      puVar16 = auStack_f8;
      uVar9 = 1;
      goto LAB_14012058a;
    }
    uVar9 = FUN_14028af20(0x158);
    uVar9 = FUN_140098ea0(uVar9,param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xe28) = uVar9;
    local_b8.left = 0;
    local_b8.top = 0;
    local_b8.right = 0;
    local_b8.bottom = 0;
    local_70 = uVar15 | 9;
    if ((int)local_res10 != 0) {
      local_70 = uVar15 | 0xb;
    }
    GetWindowRect(*(HWND *)(param_1 + 0x78),&local_b8);
    local_90 = *(undefined8 *)(param_1 + 0xe28);
    local_88 = param_1 + 0x118;
    local_80 = param_1 + 0x2a0;
    local_78 = &local_res10;
    uVar9 = FUN_14012b890(local_b8.right - local_b8.left,local_b8.bottom - local_b8.top,&local_90);
    *(undefined8 *)(param_1 + 0xe30) = uVar9;
    FUN_1401816d0(uVar9,*(undefined4 *)(param_1 + 0xea0));
    FUN_140181f30(*(undefined8 *)(param_1 + 0xe30),local_68);
    uVar9 = *(undefined8 *)(param_1 + 0xe30);
    puVar10 = (undefined8 *)FUN_140018ce0(param_1 + 0xa0,&local_d8);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_140181af0(uVar9,puVar10,0);
    uVar11 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVar11) {
      lVar6 = CONCAT44(uStack_d4,local_d8);
      uVar14 = uVar11 + 1;
      lVar13 = lVar6;
      if (0xfff < uVar14) {
        lVar13 = *(longlong *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar13) - 8U) goto LAB_140120462;
        uVar14 = uVar11 + 0x28;
      }
      thunk_FUN_14028af80(lVar13,uVar14);
    }
    *(undefined1 *)(param_1 + 0xea7) = 0;
  }
  else {
    lVar6 = CONCAT44(uStack_d4,local_d8);
    uVar14 = uVar11 + 1;
    lVar13 = lVar6;
    if (uVar14 < 0x1000) {
LAB_140120294:
      thunk_FUN_14028af80(lVar13,uVar14);
      goto LAB_140120299;
    }
    lVar13 = *(longlong *)(lVar6 + -8);
    if ((lVar6 - lVar13) - 8U < 0x20) {
      uVar14 = uVar11 + 0x28;
      goto LAB_140120294;
    }
LAB_140120462:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar7 = auStack_f0;
LAB_140120469:
    puVar16 = puVar7;
    uVar9 = *(undefined8 *)(param_1 + 0xe30);
    *(undefined8 *)(puVar16 + -8) = 0x140120479;
    FUN_140181f30(uVar9,local_68);
    pcVar5 = *(code **)(**(longlong **)(param_1 + 0xe0) + 0x48);
    *(undefined8 *)(puVar16 + -8) = 0x140120486;
    (*pcVar5)();
    uVar9 = *(undefined8 *)(param_1 + 0xe30);
    *(undefined8 *)(puVar16 + -8) = 0x14012049a;
    FUN_14017fa70(uVar9,DAT_140492608);
  }
  lVar13 = *(longlong *)(param_1 + 0xe30);
  if (lVar13 != 0) {
    *(undefined8 *)(puVar16 + -8) = 0x1401204bd;
    lVar13 = FUN_14014ff70(lVar13 + 0x1640,"materials/background.json");
    if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0xd0) != 0)) &&
       (plVar4 = *(longlong **)(*(longlong *)(lVar13 + 0xd0) + 0xd8), plVar4 != (longlong *)0x0)) {
      plVar4[0x1a] = *(longlong *)(param_1 + 0x78);
      LOCK();
      cVar17 = *(char *)((longlong)plVar4 + 0x96);
      *(char *)((longlong)plVar4 + 0x96) = '\0';
      UNLOCK();
      if (cVar17 != '\0') {
        hWnd = (HWND)plVar4[0x1a];
        *(undefined8 *)(puVar16 + -8) = 0x140120519;
        PostMessageW(hWnd,0x8003,3,0);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x70) + 8) != '\0') {
        pcVar5 = *(code **)(*plVar4 + 0x30);
        *(undefined8 *)(puVar16 + -8) = 0x14012052c;
        (*pcVar5)(plVar4);
      }
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x70) + 0xa6);
      pcVar5 = *(code **)(*plVar4 + 0x70);
      *(undefined8 *)(puVar16 + -8) = 0x140120549;
      (*pcVar5)(plVar4,~(bVar2 >> 6) & 1);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x178);
      pcVar5 = *(code **)(*plVar4 + 0x68);
      *(undefined8 *)(puVar16 + -8) = 0x14012055e;
      (*pcVar5)(plVar4,uVar1);
      pcVar5 = *(code **)(*plVar4 + 0x90);
      *(undefined8 *)(puVar16 + -8) = 0x14012056a;
      (*pcVar5)(plVar4);
      LOCK();
      *(undefined1 *)(param_1 + 0xe49) = 1;
      UNLOCK();
      uVar9 = 0x80004005;
      if (*(char *)((longlong)plVar4 + 0x22) != '\0') {
        uVar9 = 0;
      }
      goto LAB_14012058a;
    }
  }
  uVar9 = 0x80004005;
LAB_14012058a:
  *(undefined8 *)(puVar16 + -8) = 0x140120593;
  FUN_140085440(local_68);
  return uVar9;
}

