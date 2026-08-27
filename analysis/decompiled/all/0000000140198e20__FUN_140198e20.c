// Function: FUN_140198e20
// Addr: 140198e20
// Size: 1884 bytes


/* WARNING: Removing unreachable block (ram,0x000140198f0b) */

void FUN_140198e20(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  char *pcVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  float local_c0;
  undefined1 local_b8 [8];
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90 [3];
  ulonglong local_78;
  
  FUN_1400d3f80(local_90,*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x1898),param_2,1);
  local_b0 = (local_b0 >> 8 & 0xfffffe) << 8;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  cVar7 = FUN_14003f220(local_90,local_b8,0);
  if (((cVar7 != '\0') && ((char)local_b0 == '\a')) &&
     (plVar10 = (longlong *)FUN_140086de0(local_b8,&DAT_14048e5e4,&DAT_14048e5e9),
     (*(uint *)(plVar10 + 1) & 0xff) == 6)) {
    puVar1 = (undefined8 *)*plVar10;
    if (puVar1 == (undefined8 *)0x0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)*puVar1;
    }
    puVar2 = (undefined8 *)*plVar10;
    if (puVar2 == (undefined8 *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)*puVar2;
    }
    while( true ) {
      bVar20 = puVar2 == (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        bVar20 = plVar17 == plVar10;
      }
      if (((bVar20) || ((char)plVar17[7] != '\a')) ||
         ((lVar11 = FUN_140086de0(plVar17 + 6,"transforms",""), *(char *)(lVar11 + 8) != '\x06' ||
          (iVar8 = FUN_1400863a0(lVar11), iVar8 == 0)))) break;
      lVar12 = FUN_140086de0(plVar17 + 6,"disabled","");
      if (*(char *)(lVar12 + 8) == '\x05') {
        uVar13 = FUN_140086de0(plVar17 + 6,"disabled","");
        cVar7 = FUN_140086300(uVar13);
        if (cVar7 == '\0') goto LAB_140198fd4;
      }
      else {
LAB_140198fd4:
        uVar13 = FUN_140086de0(plVar17 + 6,"duration","");
        fVar21 = (float)FUN_140086220(uVar13);
        local_c8 = (undefined8 *)0x0;
        uVar19 = 0;
        local_d8 = 0;
        puStack_d0 = (undefined8 *)0x0;
        local_c0 = fVar21;
        iVar8 = FUN_1400863a0(lVar11);
        if (iVar8 != 0) {
LAB_140199023:
          lVar12 = FUN_140086540(lVar11,uVar19);
          if (*(char *)(lVar12 + 8) == '\a') {
            lVar14 = FUN_140086de0(lVar12,"disabled","");
            if (*(char *)(lVar14 + 8) == '\x05') {
              uVar13 = FUN_140086de0(lVar12,"disabled","");
              cVar7 = FUN_140086300(uVar13);
              if (cVar7 != '\0') goto LAB_140199436;
            }
            local_108 = 0.0;
            puVar15 = (undefined8 *)FUN_140086de0(lVar12,&DAT_14048e59c,&DAT_14048e59f);
            pcVar18 = (char *)*puVar15;
            if (pcVar18 != (char *)0x0) {
              if ((*(uint *)(puVar15 + 1) >> 8 & 1) != 0) {
                pcVar18 = pcVar18 + 4;
              }
              fVar24 = 0.0;
              fVar23 = 0.0;
              fVar22 = 0.0;
              if ((pcVar18 == (char *)0x0) || (*pcVar18 == '\0')) goto LAB_140199159;
              dVar5 = (double)FUN_1402d06ac(pcVar18);
              fVar24 = (float)dVar5;
              cVar7 = *pcVar18;
              while (cVar7 != '\0') {
                if (*pcVar18 == ' ') goto LAB_140199105;
                pcVar18 = pcVar18 + 1;
                cVar7 = *pcVar18;
              }
              goto LAB_140199112;
            }
            fVar24 = 0.0;
            fVar23 = 0.0;
            fVar22 = 0.0;
            goto LAB_140199159;
          }
          goto LAB_140199436;
        }
LAB_14019944a:
        if (*(longlong *)(param_3 + 8) == *(longlong *)(param_3 + 0x10)) {
          FUN_1401a21b0(param_3,*(longlong *)(param_3 + 8),&local_d8);
        }
        else {
          FUN_1401a2e50();
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 0x20;
        }
        FUN_14019ea80(&local_d8);
      }
      plVar3 = (longlong *)plVar17[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar3 + 0x19);
        plVar17 = plVar3;
        while (cVar7 == '\0') {
          plVar17 = (longlong *)*plVar17;
          cVar7 = *(char *)(*plVar17 + 0x19);
        }
      }
      else {
        cVar7 = *(char *)(plVar17[1] + 0x19);
        plVar6 = (longlong *)plVar17[1];
        plVar3 = plVar17;
        while ((plVar17 = plVar6, cVar7 == '\0' && (plVar3 == (longlong *)plVar17[2]))) {
          cVar7 = *(char *)(plVar17[1] + 0x19);
          plVar6 = (longlong *)plVar17[1];
          plVar3 = plVar17;
        }
      }
    }
  }
  FUN_140085440(local_b8);
  if (0xf < local_78) {
    uVar16 = local_78 + 1;
    lVar11 = local_90[0];
    if (0xfff < uVar16) {
      lVar11 = *(longlong *)(local_90[0] + -8);
      if (0x1f < (local_90[0] - lVar11) - 8U) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = local_78 + 0x28;
    }
    thunk_FUN_14028af80(lVar11,uVar16);
  }
  return;
  while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
LAB_140199105:
    if (*pcVar18 != ' ') break;
  }
LAB_140199112:
  dVar5 = (double)FUN_1402d06ac(pcVar18);
  fVar23 = (float)dVar5;
  cVar7 = *pcVar18;
  while (cVar7 != '\0') {
    if (*pcVar18 == ' ') goto LAB_140199140;
    pcVar18 = pcVar18 + 1;
    cVar7 = *pcVar18;
  }
LAB_14019914d:
  dVar5 = (double)FUN_1402d06ac(pcVar18);
  fVar22 = (float)dVar5;
LAB_140199159:
  fStack_104 = fVar24;
  fStack_100 = fVar23;
  fStack_fc = fVar22;
  puVar15 = (undefined8 *)FUN_140086de0(lVar12,"center","");
  pcVar18 = (char *)*puVar15;
  if (pcVar18 == (char *)0x0) {
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
  }
  else {
    if ((*(uint *)(puVar15 + 1) >> 8 & 1) != 0) {
      pcVar18 = pcVar18 + 4;
    }
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
    if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
      dVar5 = (double)FUN_1402d06ac(pcVar18);
      fVar24 = (float)dVar5;
      cVar7 = *pcVar18;
      while (cVar7 != '\0') {
        if (*pcVar18 == ' ') goto LAB_1401991f0;
        pcVar18 = pcVar18 + 1;
        cVar7 = *pcVar18;
      }
LAB_1401991fd:
      dVar5 = (double)FUN_1402d06ac(pcVar18);
      fVar23 = (float)dVar5;
      cVar7 = *pcVar18;
      while (cVar7 != '\0') {
        if (*pcVar18 == ' ') goto LAB_140199228;
        pcVar18 = pcVar18 + 1;
        cVar7 = *pcVar18;
      }
LAB_140199235:
      dVar5 = (double)FUN_1402d06ac(pcVar18);
      fVar22 = (float)dVar5;
    }
  }
  local_f8 = fVar24;
  fStack_f4 = fVar23;
  fStack_f0 = fVar22;
  puVar15 = (undefined8 *)FUN_140086de0(lVar12,&DAT_14048e5ec,&DAT_14048e5ee);
  pcVar18 = (char *)*puVar15;
  if (pcVar18 == (char *)0x0) {
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
  }
  else {
    if ((*(uint *)(puVar15 + 1) >> 8 & 1) != 0) {
      pcVar18 = pcVar18 + 4;
    }
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
    if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
      dVar5 = (double)FUN_1402d06ac(pcVar18);
      fVar24 = (float)dVar5;
      cVar7 = *pcVar18;
      while (cVar7 != '\0') {
        if (*pcVar18 == ' ') goto LAB_1401992d5;
        pcVar18 = pcVar18 + 1;
        cVar7 = *pcVar18;
      }
LAB_1401992e2:
      dVar5 = (double)FUN_1402d06ac(pcVar18);
      fVar23 = (float)dVar5;
      cVar7 = *pcVar18;
      while (cVar7 != '\0') {
        if (*pcVar18 == ' ') goto LAB_140199310;
        pcVar18 = pcVar18 + 1;
        cVar7 = *pcVar18;
      }
LAB_14019931d:
      dVar5 = (double)FUN_1402d06ac(pcVar18);
      fVar22 = (float)dVar5;
    }
  }
  fStack_ec = fVar24;
  local_e8 = fVar23;
  local_e4 = fVar22;
  lVar14 = FUN_140087490(lVar12,&DAT_14048e73c,&DAT_14048e740);
  if (lVar14 == 0) {
    local_e0 = 0x3f800000;
  }
  else {
    uVar13 = FUN_140086de0(lVar12,&DAT_14048e73c,&DAT_14048e740);
    local_e0 = FUN_140086220(uVar13);
  }
  lVar14 = FUN_140086de0(lVar12,"timestamp","");
  if (*(byte *)(lVar14 + 8) - 1 < 3) {
    uVar13 = FUN_140086de0(lVar12,"timestamp","");
    local_108 = (float)FUN_140086220(uVar13);
  }
  else if (uVar19 != 0) {
    iVar8 = FUN_1400863a0(lVar11);
    local_108 = ((float)(int)uVar19 / (float)(iVar8 - 1)) * fVar21;
  }
  if (puStack_d0 == local_c8) {
    FUN_1401a1fd0(&local_d8,puStack_d0,&local_108);
  }
  else {
    *puStack_d0 = CONCAT44(fStack_104,local_108);
    puStack_d0[1] = CONCAT44(fStack_fc,fStack_100);
    *(float *)(puStack_d0 + 2) = local_f8;
    *(float *)((longlong)puStack_d0 + 0x14) = fStack_f4;
    *(float *)(puStack_d0 + 3) = fStack_f0;
    *(float *)((longlong)puStack_d0 + 0x1c) = fStack_ec;
    *(float *)((longlong)puStack_d0 + 0x1c) = fStack_ec;
    *(float *)(puStack_d0 + 4) = local_e8;
    *(float *)((longlong)puStack_d0 + 0x24) = local_e4;
    *(undefined4 *)(puStack_d0 + 5) = local_e0;
    puStack_d0 = (undefined8 *)((longlong)puStack_d0 + 0x2c);
  }
LAB_140199436:
  uVar19 = uVar19 + 1;
  uVar9 = FUN_1400863a0(lVar11);
  if (uVar9 <= uVar19) goto LAB_14019944a;
  goto LAB_140199023;
  while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
LAB_140199140:
    if (*pcVar18 != ' ') break;
  }
  goto LAB_14019914d;
  while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
LAB_1401991f0:
    if (*pcVar18 != ' ') break;
  }
  goto LAB_1401991fd;
  while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
LAB_140199228:
    if (*pcVar18 != ' ') break;
  }
  goto LAB_140199235;
  while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
LAB_1401992d5:
    if (*pcVar18 != ' ') break;
  }
  goto LAB_1401992e2;
  while (pcVar18 = pcVar18 + 1, *pcVar18 != '\0') {
LAB_140199310:
    if (*pcVar18 != ' ') break;
  }
  goto LAB_14019931d;
}

