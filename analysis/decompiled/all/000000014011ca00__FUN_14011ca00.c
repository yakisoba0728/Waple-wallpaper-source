// Function: FUN_14011ca00
// Addr: 14011ca00
// Size: 1261 bytes


void FUN_14011ca00(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  char *_Str;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined8 local_108;
  longlong lStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  uint local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined **local_a0;
  undefined1 local_98 [8];
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70 [3];
  ulonglong local_58;
  
  puVar18 = auStack_128;
  local_90 = (local_90 >> 8 & 0xfffffe) << 8;
  local_a0 = &PTR_FUN_1404776f8;
  local_88 = 0;
  uStack_80 = 0;
  plVar19 = (longlong *)0x0;
  local_78 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_a0);
  FUN_140085520(param_2,local_98);
  if ((char)param_2[1] != '\x06') {
LAB_14011ceb0:
    FUN_140085440(local_98);
    return;
  }
  _Str = (char *)(param_1 + 0x10);
  if (0xf < *(ulonglong *)(param_1 + 0x28)) {
    _Str = *(char **)_Str;
  }
  lStack_100 = 0;
  local_f8 = 6;
  uStack_f0 = 0xf;
  local_108 = (undefined8 *)(ulonglong)CONCAT24(s_plugin_140489a68._4_2_,s_plugin_140489a68._0_4_);
  sVar7 = strlen(_Str);
  puVar8 = (undefined4 *)FUN_1400532a0(&local_108,_Str,sVar7);
  local_c0 = *puVar8;
  uStack_bc = puVar8[1];
  uStack_b8 = puVar8[2];
  uStack_b4 = puVar8[3];
  local_b0 = *(undefined8 *)(puVar8 + 4);
  uStack_a8 = *(ulonglong *)(puVar8 + 6);
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  if (0xf < uStack_f0) {
    uVar16 = uStack_f0 + 1;
    puVar14 = local_108;
    if (0xfff < uVar16) {
      puVar14 = (undefined8 *)local_108[-1];
      if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)puVar14))) goto LAB_14011cecd;
      uVar16 = uStack_f0 + 0x28;
    }
    thunk_FUN_14028af80(puVar14,uVar16);
  }
  uVar13 = *(uint *)(param_2 + 1) & 0xff;
  if (((uVar13 == 6) || (uVar13 == 7)) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    bVar5 = false;
    plVar17 = (longlong *)**(undefined8 **)*param_2;
  }
  else {
    bVar5 = true;
    plVar17 = plVar19;
  }
  if (((uVar13 == 6) || (uVar13 == 7)) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    plVar19 = *(longlong **)*param_2;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  while( true ) {
    bVar20 = bVar6;
    if (!bVar5) {
      bVar20 = plVar17 == plVar19;
    }
    if (bVar20) break;
    plVar9 = (longlong *)FUN_140086de0(plVar17 + 6,&DAT_1404748b8,&DAT_1404748bc);
    local_e0 = CONCAT31(local_e0._1_3_,5);
    local_e8 = CONCAT71(local_e8._1_7_,1);
    uVar13 = local_e0 & 0xfffffeff;
    plVar10 = (longlong *)FUN_140086de0(plVar17 + 6,"plugin","");
    local_e0 = *(uint *)(plVar10 + 1);
    *(uint *)(plVar10 + 1) = uVar13;
    lVar15 = *plVar10;
    *plVar10 = local_e8;
    lVar2 = plVar10[2];
    plVar10[2] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    switch(local_e0 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_e0 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar15);
      }
      break;
    case 6:
    case 7:
      if (lVar15 != 0) {
        FUN_140088e40(lVar15);
        thunk_FUN_14028af80(lVar15,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
    if ((char)plVar9[1] == '\x04') {
      uVar11 = FUN_140085cc0(plVar9,local_70);
      plVar10 = (longlong *)FUN_1400f9070(uVar11,0,&local_c0);
      local_e0 = CONCAT31(local_e0._1_3_,4);
      uVar16 = plVar10[2];
      uVar4 = plVar10[3];
      puVar14 = (undefined8 *)*plVar10;
      lStack_100 = plVar10[1];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      puVar12 = &local_108;
      if (0xf < uVar4) {
        puVar12 = puVar14;
      }
      local_108 = puVar14;
      local_f8 = uVar16;
      uStack_f0 = uVar4;
      puVar8 = (undefined4 *)_malloc_base((uVar16 & 0xffffffff) + 5);
      if (puVar8 == (undefined4 *)0x0) goto LAB_14011ced4;
      uVar13 = local_e0 | 0x100;
      *puVar8 = (int)uVar16;
      FUN_1404210f0(puVar8 + 1,puVar12,uVar16 & 0xffffffff);
      *(undefined1 *)((uVar16 & 0xffffffff) + 4 + (longlong)puVar8) = 0;
      local_e0 = *(uint *)(plVar9 + 1);
      *(uint *)(plVar9 + 1) = uVar13;
      local_e8 = *plVar9;
      *plVar9 = (longlong)puVar8;
      lVar15 = plVar9[2];
      plVar9[2] = 0;
      local_d0 = plVar9[3];
      local_c8 = plVar9[4];
      plVar9[3] = 0;
      plVar9[4] = 0;
      local_d8 = lVar15;
      FUN_140086d30(&local_e8);
      if (lVar15 != 0) {
        FUN_140017240(lVar15 + 0x40);
        FUN_140017240(lVar15 + 0x20);
        FUN_140017240(lVar15);
        thunk_FUN_14028af80(lVar15,0x60);
      }
      if (0xf < uVar4) {
        uVar16 = uVar4 + 1;
        puVar12 = puVar14;
        if (0xfff < uVar16) {
          puVar12 = (undefined8 *)puVar14[-1];
          if (0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar12))) goto LAB_14011cecd;
          uVar16 = uVar4 + 0x28;
        }
        thunk_FUN_14028af80(puVar12,uVar16);
      }
      if (0xf < local_58) {
        uVar16 = local_58 + 1;
        lVar15 = local_70[0];
        if (0xfff < uVar16) {
          lVar15 = *(longlong *)(local_70[0] + -8);
          if (0x1f < (local_70[0] - lVar15) - 8U) goto LAB_14011cecd;
          uVar16 = local_58 + 0x28;
        }
        thunk_FUN_14028af80(lVar15,uVar16);
      }
    }
    plVar9 = (longlong *)plVar17[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x19);
      plVar17 = plVar9;
      while (cVar1 == '\0') {
        plVar17 = (longlong *)*plVar17;
        cVar1 = *(char *)(*plVar17 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar17[1] + 0x19);
      plVar10 = (longlong *)plVar17[1];
      plVar9 = plVar17;
      while ((plVar17 = plVar10, cVar1 == '\0' && (plVar9 == (longlong *)plVar17[2]))) {
        cVar1 = *(char *)(plVar17[1] + 0x19);
        plVar10 = (longlong *)plVar17[1];
        plVar9 = plVar17;
      }
    }
  }
  if (uStack_a8 < 0x10) goto LAB_14011ceb0;
  lVar2 = CONCAT44(uStack_bc,local_c0);
  uVar16 = uStack_a8 + 1;
  lVar15 = lVar2;
  if (0xfff < uVar16) {
    lVar15 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar15) - 8U) {
LAB_14011cecd:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar18 = auStack_120;
LAB_14011ced4:
      *(undefined8 *)(puVar18 + -8) = 0x14011cee4;
      FUN_140017170(&local_c0,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar18 + -8) = &UNK_14011ceed;
      FUN_140084bc0(&local_c0);
    }
    uVar16 = uStack_a8 + 0x28;
  }
  thunk_FUN_14028af80(lVar15,uVar16);
  goto LAB_14011ceb0;
}

