// Function: FUN_1403c13f0
// Addr: 1403c13f0
// Size: 4976 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c13f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte bVar15;
  ulonglong uVar16;
  int iVar17;
  IMAGE_DOS_HEADER *pIVar18;
  undefined *puVar19;
  char cVar20;
  longlong lVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  longlong local_res8;
  byte local_res10;
  byte local_res18;
  int local_res20;
  undefined8 *local_368 [2];
  uint local_358 [2];
  ulonglong uStack_350;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *local_318;
  longlong *plStack_310;
  undefined8 **local_308;
  undefined *puStack_300;
  longlong *plStack_2f8;
  undefined8 **local_2f0;
  undefined *puStack_2e8;
  undefined1 local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined1 local_2c8 [8];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0 [16];
  undefined4 local_2a0;
  uint uStack_29c;
  undefined4 uStack_298;
  undefined8 *puStack_288;
  undefined8 local_280;
  undefined *local_270;
  longlong *plStack_268;
  undefined8 **local_260;
  undefined *puStack_258;
  char local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0 [16];
  undefined4 local_1a0;
  uint uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined *local_170;
  longlong *plStack_168;
  undefined8 **local_160;
  undefined *puStack_158;
  char local_150;
  uint local_148 [4];
  longlong local_138;
  undefined1 local_130 [16];
  longlong local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [4];
  int iStack_10c;
  int local_d0;
  byte local_a0;
  
  local_368[0] = *(undefined8 **)(param_1 + 0x70);
  local_348._4_4_ = 0;
  iVar17 = 0;
  iVar9 = *(int *)(param_1 + 0x60);
  uStack_238 = local_248;
  uStack_234 = uStack_244;
  puVar13 = local_368[0];
  for (; ((iVar9 != 0 && (*(char *)((longlong)puVar13 + 0x12) == '\x06')) &&
         (local_348._4_4_ = local_348._4_4_ + 1, iVar9 != 0)); iVar9 = iVar9 + -1) {
    iVar17 = iVar17 + 1;
    puVar13 = (undefined8 *)((longlong)puVar13 + 0x14);
  }
  uStack_328 = CONCAT44(iVar17,iVar9);
  uStack_330 = puVar13;
  while ((iVar9 != 0 && (*(char *)((longlong)puVar13 + 0x12) == '\x0e'))) {
    uVar14 = local_348._4_4_;
    do {
      uVar14 = uVar14 + 1;
      if (*(uint *)(param_1 + 0x60) <= uVar14) goto LAB_1403c153b;
    } while (*(char *)((longlong)local_368[0] + (ulonglong)uVar14 * 0x14 + 0x12) == '\x06');
    if (2 < (*(ushort *)((longlong)local_368[0] + (ulonglong)uVar14 * 0x14 + 0x10) & 0x1f) - 10)
    break;
    do {
      local_348._4_4_ = local_348._4_4_ + 1;
      if (iVar9 == 0) {
        iVar10 = 0;
      }
      else {
        iVar9 = iVar9 + -1;
        iVar17 = iVar17 + 1;
        puVar13 = (undefined8 *)((longlong)puVar13 + 0x14);
        uStack_328 = CONCAT44(iVar17,iVar9);
        iVar10 = iVar9;
        uStack_330 = puVar13;
      }
      if (iVar9 == 0) goto LAB_1403c153b;
      puVar2 = puVar13;
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        puVar2 = &DAT_1404e4f20;
      }
    } while (*(char *)((longlong)puVar2 + 0x12) == '\x06');
  }
LAB_1403c153b:
  uVar1 = uStack_328;
  puVar13 = uStack_330;
  cVar20 = '\0';
  uVar24 = 1;
  local_248 = local_368[0]._0_4_;
  iVar9 = 0;
  uStack_244 = 0;
  uStack_240 = 1;
  local_250 = '\0';
  uVar7 = (ulonglong)local_368[0] & 0xffffffff;
  uVar6 = CONCAT44(uStack_23c,1);
  local_2a0 = local_368[0]._0_4_;
  uStack_29c = local_348._4_4_;
  uStack_298 = 1;
  puStack_288 = uStack_330;
  local_280 = uStack_328;
  local_270 = &DAT_14047054f;
  puStack_258 = &DAT_14047054c;
  local_348 = CONCAT44(local_348._4_4_,local_368[0]._0_4_);
  uStack_340 = 1;
  local_318 = (undefined8 *)&DAT_14047054f;
  puStack_300 = &DAT_14047054c;
  uVar23 = local_368[0]._0_4_;
  uVar14 = local_348._4_4_;
  uVar25 = uStack_23c;
  local_res8 = param_1;
  plStack_310 = &local_res8;
  local_308 = local_368;
  local_2c0 = uVar7;
  uStack_2b8 = uVar6;
  plStack_268 = &local_res8;
  local_260 = local_368;
  while ((int)uStack_328 != 0) {
    FUN_140398e10(local_358);
    iVar9 = iVar9 + 1;
  }
  if (iVar9 == -1) {
    iVar9 = -1;
  }
  FUN_140399270(local_2c8,local_118,iVar9);
  pIVar18 = &IMAGE_DOS_HEADER_140000000;
  uVar16 = (ulonglong)local_a0;
  local_res10 = local_a0;
  iVar17 = 1;
  lVar21 = 1;
  local_res18 = local_a0;
  iVar9 = 1;
  local_1c8 = 0;
  local_358[0] = local_358[0] & 0xffffff00;
  local_2d8 = 1;
  local_150 = '\x01';
  local_2e0 = 1;
  local_res20 = 0;
  local_2d0 = iStack_10c;
  local_2d4 = local_d0;
  local_170 = &DAT_14047054f;
  puStack_158 = &DAT_14047054c;
  _uStack_198 = CONCAT44(uVar25,uVar24);
  puStack_188 = puVar13;
  local_180 = uVar1;
  uStack_328 = CONCAT44(uVar25,uVar24);
  local_318 = puVar13;
  plStack_310 = (longlong *)uVar1;
  puStack_300 = &DAT_14047054f;
  puStack_2e8 = &DAT_14047054c;
  uStack_350 = uVar7;
  local_348 = uVar6;
  plStack_2f8 = &local_res8;
  local_2f0 = local_368;
  local_1c0 = uVar7;
  uStack_1b8 = uVar6;
  plStack_168 = &local_res8;
  local_160 = local_368;
  local_1a0 = uVar23;
  uStack_19c = uVar14;
  uStack_330._0_4_ = uVar23;
  uStack_330._4_4_ = uVar14;
  if (local_a0 != 0) {
    local_180._0_4_ = (int)uVar1;
    iVar10 = (int)local_180;
    iVar11 = (int)local_180;
    uVar12 = uVar14;
    local_180 = uVar1;
    goto LAB_1403c17b8;
  }
  piVar3 = (int *)FUN_140398d30(local_110,&local_248);
  piVar4 = (int *)FUN_140398d30(&local_2c0,local_130);
  cVar20 = local_250;
  iVar9 = iVar17;
  iVar10 = (int)local_180;
  uVar14 = uStack_19c;
  iVar11 = (int)plStack_310;
  uVar12 = uStack_330._4_4_;
  if (*piVar4 != *piVar3) goto LAB_1403c17b8;
LAB_1403c2651:
  iVar9 = iVar17;
  if (local_250 == '\0') {
    bVar15 = (byte)uVar16;
    goto LAB_1403c26f9;
  }
  if ((byte)uVar16 == 0) {
    return;
  }
LAB_1403c2732:
  if (*(short *)(&DAT_140461190 + (longlong)(int)lVar21 * 2) < 1) {
    return;
  }
  uVar8 = (int)*(short *)(&DAT_140461190 + (longlong)(int)lVar21 * 2) - 1;
  do {
    lVar21 = (longlong)(char)(&DAT_140460f50)[(int)uVar8];
    local_2d8 = (int)(char)(&DAT_140460f50)[(int)uVar8];
    if ((&DAT_140460ff0)[(int)uVar8] == '\0') goto switchD_1403c194c_caseD_2;
    cVar20 = (char)iVar9;
    switch((&DAT_140460ff0)[(int)uVar8]) {
    case 1:
      uVar6 = FUN_1403991e0(local_358,&local_248,1);
      FUN_1403977a0(local_2c8,uVar6);
      uVar8 = uVar14;
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      while( true ) {
        if (iVar11 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        if (uVar12 <= uVar8) break;
        *(byte *)((longlong)local_368[0] + (ulonglong)uVar8 * 0x14 + 0xf) = cVar20 << 4 | 5;
        uVar8 = uVar8 + 1;
      }
      break;
    default:
      goto switchD_1403c194c_caseD_2;
    case 4:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 8;
      }
      break;
    case 5:
      uVar6 = FUN_140399270(local_2c8,&local_248);
      FUN_1403977a0(local_358,uVar6);
      FUN_140398d30(&local_1c0,&local_248);
      uVar14 = uStack_240;
      while( true ) {
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar14) break;
        uVar7 = (ulonglong)uVar14;
        uVar14 = uVar14 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 7;
      }
LAB_1403c1e01:
      iVar17 = iVar9 + 1;
      *(uint *)(local_res8 + 0xd8) = *(uint *)(local_res8 + 0xd8) | 0x20;
      bVar22 = iVar9 != 0xf;
      iVar9 = 1;
      iVar10 = (int)local_180;
      uVar14 = uStack_19c;
      if (bVar22) {
        iVar9 = iVar17;
      }
      goto switchD_1403c194c_caseD_2;
    case 6:
      uVar6 = FUN_140399270(local_2c8,&local_248);
      FUN_1403977a0(local_358,uVar6);
      local_res20 = 8;
      goto LAB_1403c25f6;
    case 7:
      uVar6 = FUN_140399270(local_2c8,&local_248);
      FUN_1403977a0(local_358,uVar6);
      goto LAB_1403c25f6;
    case 8:
      uVar6 = FUN_140399270(local_2c8,&local_248);
      FUN_1403977a0(local_358,uVar6);
      local_res20 = 9;
LAB_1403c25f6:
      iVar11 = (int)plStack_310;
      uVar12 = uStack_330._4_4_;
      goto switchD_1403c194c_caseD_2;
    case 9:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 5;
      }
      goto LAB_1403c234f;
    case 10:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 5;
      }
      break;
    case 0xb:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 2;
      }
      goto LAB_1403c234f;
    case 0xc:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 2;
      }
      break;
    case 0xd:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 1;
      }
      goto LAB_1403c234f;
    case 0xe:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 1;
      }
      break;
    case 0xf:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(char *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4;
      }
      goto LAB_1403c234f;
    case 0x10:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(char *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4;
      }
      break;
    case 0x11:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 4;
      }
      goto LAB_1403c234f;
    case 0x12:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 4;
      }
      break;
    case 0x13:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 3;
      }
      goto LAB_1403c234f;
    case 0x14:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 3;
      }
      break;
    case 0x15:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 7;
      }
      *(uint *)(local_res8 + 0xd8) = *(uint *)(local_res8 + 0xd8) | 0x20;
      iVar11 = (int)plStack_310;
      goto LAB_1403c234f;
    case 0x16:
      if (local_res20 == 8) {
        uVar6 = FUN_1403991e0(local_358,&local_248);
        FUN_1403977a0(local_2c8,uVar6);
        FUN_140398d30(&local_1c0,&local_248);
        uVar14 = uStack_240;
        while( true ) {
          if (iVar11 == 0) {
            DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
            DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
            DAT_1404e4f28 = (undefined4)DAT_14045dd18;
            _DAT_1404e4f2c = DAT_14045dd18._4_4_;
            DAT_1404e4f30 = (undefined4)DAT_14045dd20;
          }
          if (uVar12 <= uVar14) break;
          uVar7 = (ulonglong)uVar14;
          uVar14 = uVar14 + 1;
          *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 8;
        }
        iVar9 = iVar9 + 1;
        iVar10 = (int)local_180;
        uVar14 = uStack_19c;
        if (iVar9 == 0x10) {
          iVar9 = 1;
        }
      }
      else if (local_res20 == 9) {
        uVar6 = FUN_1403991e0(local_358,&local_248);
        FUN_1403977a0(local_2c8,uVar6);
        FUN_140398d30(&local_1c0,&local_248);
        uVar14 = uStack_240;
        while( true ) {
          if (iVar11 == 0) {
            DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
            DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
            DAT_1404e4f28 = (undefined4)DAT_14045dd18;
            _DAT_1404e4f2c = DAT_14045dd18._4_4_;
            DAT_1404e4f30 = (undefined4)DAT_14045dd20;
          }
          if (uVar12 <= uVar14) break;
          uVar7 = (ulonglong)uVar14;
          uVar14 = uVar14 + 1;
          *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 7;
        }
        goto LAB_1403c1e01;
      }
      goto switchD_1403c194c_caseD_2;
    case 0x17:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 8;
      }
      goto LAB_1403c234f;
    case 0x18:
      FUN_1403977a0(local_358,local_2c8);
      FUN_140399170(local_2c8,&local_248,0);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar12 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar12;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        if (uStack_330._4_4_ <= uVar12) break;
        uVar12 = uVar12 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 6;
      }
LAB_1403c234f:
      iVar17 = iVar9 + 1;
      bVar22 = iVar9 != 0xf;
      iVar9 = 1;
      uVar12 = uStack_330._4_4_;
      if (bVar22) {
        iVar9 = iVar17;
      }
      goto switchD_1403c194c_caseD_2;
    case 0x19:
      uVar6 = FUN_140399270(local_2c8,&local_248,1);
      FUN_1403977a0(local_358,uVar6);
      if (iVar10 == 0) {
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
        DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
        DAT_1404e4f28 = (undefined4)DAT_14045dd18;
        _DAT_1404e4f2c = DAT_14045dd18._4_4_;
        DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      }
      uVar8 = uVar14;
      while( true ) {
        uVar7 = (ulonglong)uVar8;
        if ((int)plStack_310 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        iVar11 = (int)plStack_310;
        uVar12 = uStack_330._4_4_;
        if (uStack_330._4_4_ <= uVar8) break;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)local_368[0] + uVar7 * 0x14 + 0xf) = cVar20 << 4 | 6;
      }
    }
    iVar17 = iVar9 + 1;
    bVar22 = iVar9 != 0xf;
    iVar9 = 1;
    if (bVar22) {
      iVar9 = iVar17;
    }
switchD_1403c194c_caseD_2:
    if ((&DAT_140461090)[lVar21] == '\x02') {
      local_150 = '\x01';
    }
    local_2c0 = CONCAT44(local_2c0._4_4_ + (int)uStack_2b8,(undefined4)local_2c0);
    FUN_140398e10(local_2b0);
    if (local_250 == '\0') {
      if (local_a0 == 0) {
        if ((int)local_280 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        if (local_d0 == 0) {
          DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
          DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
          DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          _DAT_1404e4f2c = DAT_14045dd18._4_4_;
          DAT_1404e4f30 = (undefined4)DAT_14045dd20;
        }
        bVar15 = local_res10;
        if (local_2c0._4_4_ == iStack_10c) break;
      }
    }
    else if (local_a0 != 0) {
      uVar16 = (ulonglong)local_res10;
      iVar17 = iVar9;
      goto LAB_1403c2651;
    }
    pIVar18 = &IMAGE_DOS_HEADER_140000000;
    cVar20 = local_250;
LAB_1403c17b8:
    lVar21 = (longlong)(int)lVar21;
    if (*(char *)((longlong)pIVar18[0x8c22].e_res_4_ + lVar21 + -0xc) == '\x03') {
      local_150 = cVar20;
      FUN_140398d30(&local_1c0,local_148);
      uVar8 = local_148[0];
      puVar5 = (uint *)FUN_140398d30(&local_2c0,&local_248);
      uVar14 = *puVar5;
      if (uVar8 < uVar14) {
        iVar17 = local_1c0._4_4_;
        for (iVar10 = uVar14 - uVar8; iVar10 != 0; iVar10 = iVar10 + -1) {
          iVar17 = iVar17 + (int)uStack_1b8;
        }
        local_1c0 = CONCAT44(iVar17,(undefined4)local_1c0);
        FUN_140399420(local_1b0);
      }
      else if (uVar14 < uVar8) {
        FUN_140399720(&local_1c0,uVar8 - uVar14);
      }
      iVar10 = (int)local_180;
      uVar14 = uStack_19c;
    }
    iVar17 = (int)(char)(&DAT_14045fc60)[lVar21];
    puVar19 = &DAT_14045fde0 + *(short *)(&DAT_14045fce0 + lVar21 * 2);
    if (0 < iVar17) {
      lVar21 = (longlong)(local_2d8 * 2) + 0x45fb60;
      FUN_140398d30(&local_2c0,local_148);
      if (((byte)IMAGE_DOS_HEADER_140000000.e_magic[lVar21] <= *(byte *)(local_138 + 0x12)) &&
         (FUN_140398d30(&local_2c0,local_130),
         *(byte *)(local_120 + 0x12) <= (byte)IMAGE_DOS_HEADER_140000000.e_magic[lVar21 + 1])) {
        FUN_140398d30(&local_2c0,&local_248);
        iVar17 = (uint)*(byte *)(CONCAT44(uStack_234,uStack_238) + 0x12) -
                 (uint)(byte)IMAGE_DOS_HEADER_140000000.e_magic[lVar21];
      }
    }
    uVar8 = (uint)(byte)puVar19[iVar17];
    local_res10 = local_res18;
  } while( true );
LAB_1403c26f9:
  if (bVar15 != 0) {
    return;
  }
  if ((int)local_280 == 0) {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  if (local_2d4 == 0) {
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  if (local_2c0._4_4_ != local_2d0) {
    return;
  }
  goto LAB_1403c2732;
}

