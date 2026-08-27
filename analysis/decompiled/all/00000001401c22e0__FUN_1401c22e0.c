// Function: FUN_1401c22e0
// Addr: 1401c22e0
// Size: 1848 bytes


void FUN_1401c22e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  char *pcVar12;
  uint uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_128 [16];
  undefined8 ***local_118 [2];
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  uint local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  
  lVar5 = FUN_140087490(param_2,"orientation","");
  lVar11 = 0;
  if (lVar5 == 0) {
    local_f0 = CONCAT31(local_f0._1_3_,4);
    uVar13 = local_f0 | 0x100;
    puVar6 = (undefined4 *)_malloc_base(0xb);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_140017170(&local_f8,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_f8);
    }
    *puVar6 = 6;
    puVar6[1] = s_screen_14048fb64._0_4_;
    *(undefined2 *)(puVar6 + 2) = s_screen_14048fb64._4_2_;
    *(undefined1 *)((longlong)puVar6 + 10) = 0;
    puVar7 = (undefined8 *)FUN_140086de0(param_2,"orientation","");
    local_f0 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar13;
    local_f8 = *puVar7;
    *puVar7 = puVar6;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    local_d8 = puVar7[4];
    local_e0 = puVar7[3];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_e8 = lVar5;
    FUN_140086d30(&local_f8);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  lVar5 = FUN_140087490(param_2,&DAT_14048f6f0,&DAT_14048f6f4);
  if (lVar5 == 0) {
    local_f0 = CONCAT31(local_f0._1_3_,4);
    uVar13 = local_f0 | 0x100;
    puVar6 = (undefined4 *)_malloc_base(10);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_140017170(&local_f8,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_f8);
    }
    *puVar6 = 5;
    puVar6[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar6 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar6 + 9) = 0;
    puVar7 = (undefined8 *)FUN_140086de0(param_2,&DAT_14048f6f0,&DAT_14048f6f4);
    local_f0 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar13;
    local_f8 = *puVar7;
    *puVar7 = puVar6;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    local_d8 = puVar7[4];
    local_e0 = puVar7[3];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_e8 = lVar5;
    FUN_140086d30(&local_f8);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  lVar5 = FUN_140087490(param_2,"flags","");
  if (lVar5 == 0) {
    local_f0 = CONCAT31(local_f0._1_3_,1);
    plVar8 = (longlong *)FUN_140086de0(param_2,"flags","");
    uVar13 = *(uint *)(plVar8 + 1);
    *(uint *)(plVar8 + 1) = local_f0 & 0xfffffeff;
    lVar5 = *plVar8;
    *plVar8 = 0;
    lVar2 = plVar8[2];
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    switch(uVar13 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar13 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar5);
      }
      break;
    case 6:
    case 7:
      if (lVar5 != 0) {
        FUN_140088e40(lVar5);
        thunk_FUN_14028af80(lVar5,0x10);
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
  }
  uVar9 = FUN_140086de0(param_2,"orientation","");
  FUN_140085cc0(uVar9,local_118);
  ppppuVar10 = local_118;
  if (0xf < local_100) {
    ppppuVar10 = (undefined8 ****)local_118[0];
  }
  uVar13 = 0;
  if ((local_108 == 7) && (iVar4 = memcmp(ppppuVar10,"upright",7), iVar4 == 0)) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else {
    ppppuVar10 = local_118;
    if (0xf < local_100) {
      ppppuVar10 = (undefined8 ****)local_118[0];
    }
    if (local_108 == 5) {
      do {
        lVar5 = lVar11 + 1;
        if (*(byte *)((longlong)ppppuVar10 + lVar11) != "fixed"[lVar11]) {
          uVar13 = -(uint)(*(byte *)((longlong)ppppuVar10 + lVar11) < (byte)"fixed"[lVar11]) | 1;
          break;
        }
        lVar11 = lVar5;
      } while (lVar5 != 5);
      if (uVar13 == 0) {
        *(undefined4 *)(param_1 + 8) = 2;
        goto LAB_1401c268f;
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_1401c268f:
  puVar7 = (undefined8 *)FUN_140086de0(param_2,&DAT_14048f6f0,&DAT_14048f6f4);
  pcVar12 = (char *)*puVar7;
  if (pcVar12 == (char *)0x0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
    goto LAB_1401c2759;
  }
  if ((*(uint *)(puVar7 + 1) >> 8 & 1) != 0) {
    pcVar12 = pcVar12 + 4;
  }
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar16 = 0.0;
  if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) goto LAB_1401c2759;
  dVar14 = (double)FUN_1402d06ac(pcVar12);
  fVar17 = (float)dVar14;
  cVar1 = *pcVar12;
  while (cVar1 != '\0') {
    if (*pcVar12 == ' ') goto LAB_1401c270c;
    pcVar12 = pcVar12 + 1;
    cVar1 = *pcVar12;
  }
  goto LAB_1401c2714;
  while (*pcVar12 == ' ') {
LAB_1401c2745:
    pcVar12 = pcVar12 + 1;
    if (*pcVar12 == '\0') break;
  }
  goto LAB_1401c274d;
  while (*pcVar12 == ' ') {
LAB_1401c270c:
    pcVar12 = pcVar12 + 1;
    if (*pcVar12 == '\0') break;
  }
LAB_1401c2714:
  dVar14 = (double)FUN_1402d06ac(pcVar12);
  fVar18 = (float)dVar14;
  cVar1 = *pcVar12;
  while (cVar1 != '\0') {
    if (*pcVar12 == ' ') goto LAB_1401c2745;
    pcVar12 = pcVar12 + 1;
    cVar1 = *pcVar12;
  }
LAB_1401c274d:
  dVar14 = (double)FUN_1402d06ac(pcVar12);
  fVar16 = (float)dVar14;
LAB_1401c2759:
  fVar15 = 0.0;
  *(float *)(param_1 + 0xc) = fVar17;
  *(float *)(param_1 + 0x10) = fVar18;
  *(float *)(param_1 + 0x14) = fVar16;
  if (((fVar17 == 0.0) && (fVar18 == 0.0)) && (fVar16 == 0.0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0x3f800000;
  }
  else {
    puVar7 = (undefined8 *)FUN_14005eb80(local_128,param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = *puVar7;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(puVar7 + 1);
  }
  fVar17 = DAT_1404929b8;
  fVar16 = *(float *)(param_1 + 0xc);
  if ((fVar16 == 0.0) && (*(float *)(param_1 + 0x14) == 0.0)) {
    fVar19 = 0.0;
    *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    fVar17 = *(float *)(param_1 + 0x14);
    fVar18 = *(float *)(param_1 + 0x10);
    fVar22 = fVar16 * 0.0 - fVar17 * 0.0;
    fVar23 = fVar17 - fVar18 * 0.0;
    fVar21 = fVar18 * 0.0 - fVar16;
    fVar15 = fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_14041ad10(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar20 = DAT_140492704;
    fVar15 = DAT_140492704 / fVar15;
    *(float *)(param_1 + 0x18) = fVar23 * fVar15;
    *(float *)(param_1 + 0x1c) = fVar22 * fVar15;
    *(float *)(param_1 + 0x20) = fVar21 * fVar15;
    fVar19 = fVar18 * fVar21 - fVar17 * fVar22;
    fVar15 = fVar17 * fVar23 - fVar16 * fVar21;
    fVar17 = fVar16 * fVar22 - fVar18 * fVar23;
    fVar16 = fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17;
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_14041ad10(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    fVar20 = fVar20 / fVar16;
    fVar17 = fVar17 * fVar20;
    fVar15 = fVar15 * fVar20;
    fVar19 = fVar19 * fVar20;
  }
  *(float *)(param_1 + 0x24) = fVar19;
  *(float *)(param_1 + 0x28) = fVar15;
  *(float *)(param_1 + 0x2c) = fVar17;
  uVar9 = FUN_140086de0(param_2,"flags","");
  uVar3 = FUN_140085f70(uVar9);
  *(undefined1 *)(param_1 + 0x30) = uVar3;
  FUN_140017240(local_118);
  return;
}

