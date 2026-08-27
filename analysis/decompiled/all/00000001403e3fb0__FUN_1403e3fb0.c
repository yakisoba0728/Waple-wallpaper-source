// Function: FUN_1403e3fb0
// Addr: 1403e3fb0
// Size: 4026 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403e3fb0(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  ushort *puVar2;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  undefined8 uVar27;
  longlong lVar28;
  byte *pbVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  undefined4 *puVar33;
  char *pcVar34;
  ulonglong uVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong *plVar42;
  uint uVar43;
  longlong lVar44;
  undefined1 uVar45;
  ushort *puVar46;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  uint local_b0;
  longlong local_a8;
  longlong local_a0;
  uint local_98;
  undefined4 local_90 [2];
  longlong local_88;
  uint *local_80;
  int local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  ulonglong uVar35;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  lVar28 = *(longlong *)(param_3 + 0x70);
  uVar36 = (ulonglong)param_4;
  local_c0 = *(longlong **)(param_1 + 0x98);
  local_b8 = param_3;
  local_b0 = param_4;
  local_a8 = param_2;
  local_a0 = lVar28;
  if (((*(int *)(param_3 + 0x3c) == 0x4b6e6461) && (param_4 + 3 <= param_5)) &&
     ((*(byte *)(lVar28 + 0xc + uVar36 * 0x14) & 0x20) == 0)) {
    bVar20 = *(byte *)(lVar28 + 0x12 + uVar36 * 0x14);
    if (bVar20 < 0x20) {
      uVar21 = 1 << (bVar20 & 0x1f);
    }
    else {
      uVar21 = 0;
    }
    if (((uVar21 >> 0xf & 1) != 0) &&
       (puVar33 = (undefined4 *)(lVar28 + (ulonglong)(param_4 + 1) * 0x14),
       (*(byte *)(lVar28 + 0xc + (ulonglong)(param_4 + 1) * 0x14) & 0x20) == 0)) {
      if (*(byte *)((longlong)puVar33 + 0x12) < 0x20) {
        uVar21 = 1 << (*(byte *)((longlong)puVar33 + 0x12) & 0x1f);
      }
      else {
        uVar21 = 0;
      }
      if (((uVar21 >> 4 & 1) != 0) &&
         (puVar1 = (undefined4 *)(lVar28 + (ulonglong)(param_4 + 2) * 0x14),
         (*(byte *)(lVar28 + 0xc + (ulonglong)(param_4 + 2) * 0x14) & 0x20) == 0)) {
        if (*(byte *)((longlong)puVar1 + 0x12) < 0x20) {
          uVar21 = 1 << (*(byte *)((longlong)puVar1 + 0x12) & 0x1f);
        }
        else {
          uVar21 = 0;
        }
        if ((uVar21 >> 6 & 1) != 0) {
          if (*(uint *)(param_3 + 0x1c) < 2) {
            FUN_1403ec280(param_3);
          }
          else {
            FUN_14040eef0();
          }
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          uVar7 = puVar33[4];
          uVar11 = *puVar33;
          uVar12 = puVar33[1];
          uVar13 = puVar33[2];
          uVar14 = puVar33[3];
          *puVar33 = *puVar1;
          puVar33[1] = uVar8;
          puVar33[2] = uVar9;
          puVar33[3] = uVar10;
          puVar33[4] = puVar1[4];
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          puVar1[4] = uVar7;
        }
      }
    }
  }
  uVar37 = (ulonglong)param_5;
  bVar18 = false;
  bVar17 = false;
  uVar21 = param_4;
  if (((int)local_c0[0x17] != 0) && (param_4 + 3 <= param_5)) {
    iVar22 = *(int *)(*local_c0 + 0x10);
    if (iVar22 == 0) {
      uVar41 = (ulonglong)(param_4 + 2);
      puVar33 = (undefined4 *)(lVar28 + uVar41 * 0x14);
      if ((((*(byte *)(lVar28 + 0xc + uVar41 * 0x14) & 0x20) != 0) ||
          (0x1f < *(byte *)((longlong)puVar33 + 0x12))) ||
         (1 < *(byte *)((longlong)puVar33 + 0x12) - 5)) {
LAB_1403e41cb:
        uVar38 = (uint)uVar41;
        local_70 = CONCAT44(*(undefined4 *)(lVar28 + (ulonglong)(param_4 + 1) * 0x14),
                            *(undefined4 *)(lVar28 + uVar36 * 0x14));
        if (iVar22 == 1) {
          local_68 = *puVar33;
        }
        else {
          local_68 = 0;
        }
        plVar42 = local_c0 + 2;
        cVar19 = FUN_1404138e0(plVar42,&local_70,2,local_a8);
        if ((cVar19 != '\0') ||
           ((param_3 = local_b8, *(int *)(*local_c0 + 0x10) == 1 &&
            (cVar19 = FUN_1404138e0(plVar42,&local_70,3,local_a8), param_3 = local_b8,
            cVar19 != '\0')))) {
          while ((uVar38 < param_5 &&
                 (((uVar38 = (uint)uVar41, (*(byte *)(lVar28 + 0xc + uVar41 * 0x14) & 0x20) == 0 &&
                   (bVar20 = *(byte *)(lVar28 + 0x12 + uVar41 * 0x14), bVar20 < 0x20)) &&
                  (bVar20 - 5 < 2))))) {
            uVar38 = uVar38 + 1;
            uVar41 = (ulonglong)uVar38;
          }
          uVar37 = (ulonglong)param_4;
          bVar18 = true;
          bVar17 = true;
          param_3 = local_b8;
          uVar21 = uVar38;
        }
        goto LAB_1403e4287;
      }
    }
    else if (iVar22 == 1) {
      uVar41 = (ulonglong)(param_4 + 2);
      puVar33 = (undefined4 *)(lVar28 + uVar41 * 0x14);
      if (*(char *)(lVar28 + 0x12 + uVar41 * 0x14) == '\x06') goto LAB_1403e41cb;
    }
  }
  if ((*(int *)(*local_c0 + 0x10) == 2) && (*(char *)(lVar28 + 0x12 + uVar36 * 0x14) == '\x0e')) {
    while( true ) {
      uVar21 = uVar21 + 1;
      if (param_5 <= uVar21) break;
      if ((((*(byte *)(lVar28 + 0xc + (ulonglong)uVar21 * 0x14) & 0x20) != 0) ||
          (bVar20 = *(byte *)(lVar28 + 0x12 + (ulonglong)uVar21 * 0x14), 0x1f < bVar20)) ||
         (1 < bVar20 - 5)) break;
    }
    uVar37 = (ulonglong)param_4;
    bVar18 = true;
    bVar17 = true;
  }
LAB_1403e4287:
  uVar41 = (ulonglong)param_5;
  bVar16 = false;
  do {
    iVar22 = (int)uVar41;
    uVar38 = iVar22 - 1;
    uVar41 = (ulonglong)uVar38;
    lVar44 = lVar28 + uVar41 * 0x14;
    if ((((*(byte *)(lVar28 + 0xc + uVar41 * 0x14) & 0x20) == 0) &&
        (*(byte *)(lVar44 + 0x12) < 0x20)) &&
       ((1 << (*(byte *)(lVar44 + 0x12) & 0x1f) & 0x58c06U) != 0)) {
      uVar37 = uVar41;
      if (*(char *)(lVar44 + 0x13) == '\b') {
        bVar16 = true;
      }
      else if ((*(char *)(lVar44 + 0x13) != '\v') || (bVar16)) break;
    }
    else if (((param_4 < uVar38) && (*(char *)(lVar44 + 0x12) == '\x06')) &&
            (*(char *)(lVar28 + 0x12 + (ulonglong)(iVar22 - 2) * 0x14) == '\x04')) break;
  } while (uVar21 < uVar38);
  uVar38 = (uint)uVar37;
  if (((bVar17) && (uVar38 == param_4)) && (bVar17 = bVar18, uVar21 - uVar38 < 3)) {
    bVar17 = false;
  }
  if (param_4 < uVar38) {
    uVar41 = uVar36;
    do {
      bVar20 = *(byte *)(lVar28 + 0x13 + uVar41 * 0x14);
      if (2 < bVar20) {
        bVar20 = 3;
      }
      uVar21 = (int)uVar41 + 1;
      *(byte *)(lVar28 + 0x13 + uVar41 * 0x14) = bVar20;
      uVar41 = (ulonglong)uVar21;
    } while (uVar21 < uVar38);
  }
  if (uVar38 < param_5) {
    *(undefined1 *)(lVar28 + 0x13 + uVar37 * 0x14) = 4;
  }
  if (bVar17) {
    *(undefined1 *)(lVar28 + 0x13 + uVar36 * 0x14) = 1;
  }
  uVar21 = uVar38;
  if ((char)local_c0[1] != '\0') {
    do {
      uVar31 = uVar21;
      uVar21 = uVar31 + 1;
      if (param_5 <= uVar21) goto LAB_1403e4390;
      puVar25 = (undefined8 *)(lVar28 + (ulonglong)uVar21 * 0x14);
    } while (*(char *)(lVar28 + 0x12 + (ulonglong)uVar21 * 0x14) != '\x04');
    uVar41 = (ulonglong)(param_5 - 1);
    if (uVar21 < param_5 - 1) {
      while (((lVar44 = lVar28 + uVar41 * 0x14,
              (*(byte *)(lVar28 + 0xc + uVar41 * 0x14) & 0x20) != 0 ||
              (bVar20 = *(byte *)(lVar44 + 0x12), 0x1f < bVar20)) ||
             ((1 << (bVar20 & 0x1f) & 0x58c06U) == 0))) {
        if (((*(int *)(param_3 + 0x3c) == 0x4b6e6461) && (*(char *)(lVar44 + 0x12) == '\x04')) ||
           (uVar39 = (int)uVar41 - 1, uVar41 = (ulonglong)uVar39, uVar39 <= uVar21)) break;
      }
    }
    puVar24 = (undefined8 *)(lVar28 + uVar41 * 0x14);
    if ((*(char *)(lVar28 + 0x12 + uVar41 * 0x14) != '\x04') && (uVar21 < (uint)uVar41)) {
      uVar27 = *puVar25;
      uVar15 = puVar25[1];
      uVar7 = *(undefined4 *)(puVar25 + 2);
      FUN_1404210f0(puVar25,lVar28 + (ulonglong)(uVar31 + 2) * 0x14,
                    (ulonglong)((uint)uVar41 - uVar21) * 0x14);
      *puVar24 = uVar27;
      puVar24[1] = uVar15;
      *(undefined4 *)(puVar24 + 2) = uVar7;
    }
  }
LAB_1403e4390:
  cVar19 = '\0';
  uVar41 = uVar36;
  for (uVar21 = param_4; uVar21 < param_5; uVar21 = uVar21 + 1) {
    uVar35 = (ulonglong)uVar21;
    lVar44 = uVar41 * 0x14;
    bVar20 = *(byte *)(lVar44 + 0x12 + lVar28);
    pcVar34 = (char *)(lVar28 + 0x13 + lVar44);
    if ((bVar20 < 0x20) && ((1 << (bVar20 & 0x1f) & 0x11078U) != 0)) {
      *pcVar34 = cVar19;
      if ((bVar20 == 4) && (uVar31 = uVar21, cVar19 == '\x02')) {
        do {
          if (uVar31 <= param_4) goto LAB_1403e452d;
          uVar31 = (int)uVar35 - 1;
          uVar35 = (ulonglong)uVar31;
          cVar4 = *(char *)(lVar28 + 0x13 + uVar35 * 0x14);
        } while (cVar4 == '\x02');
        *(char *)(lVar44 + lVar28 + 0x13) = cVar4;
      }
    }
    else {
      cVar4 = *pcVar34;
      if ((cVar4 != '\r') &&
         (((cVar19 = cVar4, bVar20 == 0xd && (param_4 < uVar21)) &&
          (*(char *)(lVar28 + 0x12 + (ulonglong)(uVar21 - 1) * 0x14) == '\b')))) {
        *(char *)(lVar28 + 0x13 + (ulonglong)(uVar21 - 1) * 0x14) = cVar4;
      }
    }
LAB_1403e452d:
    uVar41 = uVar41 + 1;
  }
  uVar38 = uVar38 + 1;
  if (uVar38 < param_5) {
    uVar41 = (ulonglong)uVar38;
    do {
      lVar44 = lVar28 + uVar41 * 0x14;
      if ((((*(byte *)(lVar28 + 0xc + uVar41 * 0x14) & 0x20) == 0) &&
          (*(byte *)(lVar44 + 0x12) < 0x20)) &&
         ((1 << (*(byte *)(lVar44 + 0x12) & 0x1f) & 0x58c06U) != 0)) {
        uVar21 = (uint)uVar37;
        while (uVar21 = uVar21 + 1, uVar21 < uVar38) {
          if (*(byte *)(lVar28 + 0x13 + (ulonglong)uVar21 * 0x14) < 0xd) {
            *(undefined1 *)(lVar28 + 0x13 + (ulonglong)uVar21 * 0x14) =
                 *(undefined1 *)(lVar44 + 0x13);
          }
        }
        uVar37 = (ulonglong)uVar38;
      }
      else if ((*(byte *)(lVar44 + 0x12) < 0x20) &&
              ((1 << (*(byte *)(lVar44 + 0x12) & 0x1f) & 0x2080U) != 0)) {
        uVar37 = (ulonglong)uVar38;
      }
      uVar38 = uVar38 + 1;
      uVar41 = uVar41 + 1;
    } while (uVar38 < param_5);
  }
  uVar45 = *(undefined1 *)(lVar28 + 0xf + uVar36 * 0x14);
  for (uVar21 = param_4; uVar21 < param_5; uVar21 = uVar21 + 1) {
    *(char *)(lVar28 + 0xf + (ulonglong)uVar21 * 0x14) = (char)uVar21 - (char)param_4;
  }
  uVar37 = 1;
  lVar28 = lVar28 + uVar36 * 0x14;
  param_4 = param_5 - param_4;
  local_70 = CONCAT44(local_70._4_4_,param_4);
  local_c8 = uVar45;
  if (1 < param_4) {
    do {
      iVar22 = (int)uVar37;
      puVar25 = (undefined8 *)(lVar28 + uVar37 * 0x14);
      uVar36 = uVar37;
      do {
        uVar21 = (int)uVar36 - 1;
        uVar41 = (ulonglong)uVar21;
        if ((int)((uint)*(byte *)(lVar28 + 0x13 + uVar41 * 0x14) -
                 (uint)*(byte *)(lVar28 + 0x13 + uVar37 * 0x14)) < 1) break;
        uVar36 = uVar41;
      } while (uVar21 != 0);
      iVar32 = (int)uVar36;
      if (iVar22 != iVar32) {
        uVar27 = *puVar25;
        uVar15 = puVar25[1];
        uVar7 = *(undefined4 *)(puVar25 + 2);
        puVar25 = (undefined8 *)(lVar28 + uVar36 * 0x14);
        FUN_1404210f0(lVar28 + (ulonglong)(iVar32 + 1) * 0x14,puVar25,
                      (ulonglong)(uint)(iVar22 - iVar32) * 0x14);
        *puVar25 = uVar27;
        puVar25[1] = uVar15;
        *(undefined4 *)(puVar25 + 2) = uVar7;
      }
      uVar37 = (ulonglong)(iVar22 + 1U);
    } while (iVar22 + 1U < param_4);
  }
  lVar28 = local_b8;
  uVar36 = (ulonglong)param_5;
  uVar37 = (ulonglong)param_5;
  local_98 = param_5;
  uVar21 = local_b0;
  uVar38 = param_5;
  if (local_b0 < param_5) {
    do {
      cVar19 = *(char *)(local_a0 + 0x13 + (ulonglong)uVar21 * 0x14);
      if (cVar19 == '\x04') {
        uVar37 = (ulonglong)uVar21;
        local_98 = uVar21;
        break;
      }
      if ((cVar19 == '\x02') && (uVar38 = uVar21, (uint)uVar36 == param_5)) {
        uVar36 = (ulonglong)uVar21;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < param_5);
    if ((uint)uVar36 < uVar38) {
      FUN_1403f8e70(local_b8,uVar36,uVar38 + 1);
      uVar37 = uVar36;
      do {
        bVar20 = *(byte *)(local_a0 + 0x12 + uVar37 * 0x14);
        if ((bVar20 < 0x20) && ((1 << (bVar20 & 0x1f) & 0x2080U) != 0)) {
          uVar21 = *(uint *)(lVar28 + 0x60);
          uVar31 = (int)uVar37 + 1;
          uVar41 = (ulonglong)uVar21;
          if ((uint)uVar36 <= uVar21) {
            uVar41 = uVar36;
          }
          if (uVar31 <= uVar21) {
            uVar21 = uVar31;
          }
          uVar39 = (uint)uVar41;
          if ((uVar39 + 2 <= uVar21) && (uVar40 = (uVar21 - uVar39 >> 1) + uVar39, uVar39 < uVar40))
          {
            lVar44 = *(longlong *)(lVar28 + 0x70);
            do {
              uVar21 = uVar21 - 1;
              uVar35 = (ulonglong)uVar21;
              uVar39 = (int)uVar41 + 1;
              puVar25 = (undefined8 *)(lVar44 + uVar41 * 0x14);
              uVar7 = *(undefined4 *)(lVar44 + 0x10 + uVar35 * 0x14);
              uVar8 = *(undefined4 *)((longlong)puVar25 + 4);
              uVar9 = *(undefined4 *)(puVar25 + 1);
              uVar10 = *(undefined4 *)((longlong)puVar25 + 0xc);
              puVar24 = (undefined8 *)(lVar44 + uVar35 * 0x14);
              uVar27 = *puVar24;
              uVar15 = puVar24[1];
              puVar33 = (undefined4 *)(lVar44 + uVar35 * 0x14);
              *puVar33 = *(undefined4 *)puVar25;
              puVar33[1] = uVar8;
              puVar33[2] = uVar9;
              puVar33[3] = uVar10;
              *(undefined4 *)(lVar44 + 0x10 + uVar35 * 0x14) = *(undefined4 *)(puVar25 + 2);
              *puVar25 = uVar27;
              puVar25[1] = uVar15;
              *(undefined4 *)(puVar25 + 2) = uVar7;
              uVar41 = (ulonglong)uVar39;
            } while (uVar39 < uVar40);
          }
          if (*(char *)(lVar28 + 0x5a) != '\0') {
            uVar21 = *(uint *)(lVar28 + 0x60);
            uVar41 = (ulonglong)uVar21;
            if ((uint)uVar36 <= uVar21) {
              uVar41 = uVar36;
            }
            if (uVar31 <= uVar21) {
              uVar21 = uVar31;
            }
            uVar39 = (uint)uVar41;
            if ((uVar39 + 2 <= uVar21) &&
               (uVar40 = (uVar21 - uVar39 >> 1) + uVar39, uVar39 < uVar40)) {
              lVar44 = *(longlong *)(lVar28 + 0x80);
              do {
                uVar21 = uVar21 - 1;
                uVar36 = (ulonglong)uVar21;
                uVar39 = (int)uVar41 + 1;
                puVar25 = (undefined8 *)(lVar44 + uVar41 * 0x14);
                uVar7 = *(undefined4 *)(lVar44 + 0x10 + uVar36 * 0x14);
                uVar8 = *(undefined4 *)((longlong)puVar25 + 4);
                uVar9 = *(undefined4 *)(puVar25 + 1);
                uVar10 = *(undefined4 *)((longlong)puVar25 + 0xc);
                puVar24 = (undefined8 *)(lVar44 + uVar36 * 0x14);
                uVar27 = *puVar24;
                uVar15 = puVar24[1];
                puVar33 = (undefined4 *)(lVar44 + uVar36 * 0x14);
                *puVar33 = *(undefined4 *)puVar25;
                puVar33[1] = uVar8;
                puVar33[2] = uVar9;
                puVar33[3] = uVar10;
                *(undefined4 *)(lVar44 + 0x10 + uVar36 * 0x14) = *(undefined4 *)(puVar25 + 2);
                *puVar25 = uVar27;
                puVar25[1] = uVar15;
                *(undefined4 *)(puVar25 + 2) = uVar7;
                uVar41 = (ulonglong)uVar39;
              } while (uVar39 < uVar40);
            }
          }
          uVar36 = (ulonglong)uVar31;
        }
        uVar21 = (int)uVar37 + 1;
        uVar37 = (ulonglong)uVar21;
      } while (uVar21 <= uVar38);
      uVar37 = (ulonglong)local_98;
      uVar45 = local_c8;
      param_4 = (uint)local_70;
    }
  }
  lVar28 = local_a0;
  uVar38 = local_b0;
  lVar44 = local_b8;
  uVar21 = (uint)uVar37;
  if (((char)local_c0[1] == '\0') && (uVar36 = uVar37, uVar31 = uVar21, param_4 < 0x80)) {
    while (uVar31 < param_5) {
      uVar39 = (uint)uVar36;
      bVar20 = *(byte *)(lVar28 + 0xf + uVar36 * 0x14);
      uVar31 = uVar39;
      uVar41 = uVar36;
      if (bVar20 != 0xff) {
        while( true ) {
          uVar40 = uVar38 + bVar20;
          uVar43 = (uint)uVar41;
          if (uVar40 == uVar39) break;
          uVar31 = uVar40;
          if ((uint)uVar36 <= uVar40) {
            uVar31 = (uint)uVar36;
          }
          uVar36 = (ulonglong)uVar31;
          uVar30 = uVar40;
          if (uVar40 <= uVar43) {
            uVar30 = uVar43;
          }
          bVar20 = *(byte *)(lVar28 + 0xf + (ulonglong)uVar40 * 0x14);
          *(undefined1 *)(lVar28 + 0xf + (ulonglong)uVar40 * 0x14) = 0xff;
          uVar41 = (ulonglong)uVar30;
        }
        uVar36 = (ulonglong)uVar31;
        if (uVar31 <= uVar21) {
          uVar36 = uVar37;
        }
        if (1 < (uVar43 + 1) - (int)uVar36) {
          if (*(uint *)(lVar44 + 0x1c) < 2) {
            FUN_1403ec280(lVar44);
          }
          else {
            FUN_14040eef0();
          }
        }
      }
      uVar36 = (ulonglong)(uVar39 + 1);
      uVar45 = local_c8;
      uVar31 = uVar39 + 1;
    }
  }
  else {
    local_b8 = lVar44;
    if (1 < param_5 - uVar21) {
      if (*(uint *)(local_b8 + 0x1c) < 2) {
        FUN_1403ec280(local_b8,uVar37,param_5);
        local_b8 = lVar44;
      }
      else {
        FUN_14040eef0();
        local_b8 = lVar44;
      }
    }
  }
  uVar31 = uVar38;
  if (uVar38 < param_5) {
    do {
      uVar40 = uVar31 + 1;
      *(undefined1 *)(lVar28 + 0xf + (ulonglong)uVar31 * 0x14) = uVar45;
      uVar31 = uVar40;
      uVar39 = uVar38;
    } while (uVar40 < param_5);
    do {
      if (*(char *)(lVar28 + 0x13 + (ulonglong)uVar39 * 0x14) != '\x01') break;
      uVar31 = uVar39 + 1;
      puVar3 = (uint *)(lVar28 + 4 + (ulonglong)uVar39 * 0x14);
      *puVar3 = *puVar3 | *(uint *)(local_c0 + 0x17);
      uVar39 = uVar31;
    } while (uVar31 < param_5);
  }
  uVar31 = *(uint *)((longlong)local_c0 + 0xcc);
  uVar39 = uVar38;
  if (((char)local_c0[1] == '\0') && (*(int *)(*local_c0 + 0x14) == 0)) {
    uVar31 = uVar31 | *(uint *)((longlong)local_c0 + 0xc4);
  }
  for (; uVar39 < uVar21; uVar39 = uVar39 + 1) {
    puVar3 = (uint *)(lVar28 + 4 + (ulonglong)uVar39 * 0x14);
    *puVar3 = *puVar3 | uVar31;
  }
  uVar31 = *(uint *)(local_c0 + 0x1a);
  uVar43 = uVar21 + 1;
  uVar37 = (ulonglong)uVar43;
  uVar39 = *(uint *)(local_c0 + 0x19);
  uVar40 = *(uint *)((longlong)local_c0 + 0xc4);
  uVar36 = uVar37;
  while (uVar43 < param_5) {
    uVar43 = (int)uVar36 + 1;
    puVar3 = (uint *)(lVar28 + 4 + uVar36 * 0x14);
    *puVar3 = *puVar3 | uVar31 | uVar39 | uVar40;
    uVar36 = (ulonglong)uVar43;
  }
  if (((char)local_c0[1] != '\0') && (*(int *)(local_b8 + 0x3c) == 0x44657661)) {
    uVar31 = uVar38 + 1;
    uVar39 = uVar38;
    while (uVar31 < uVar21) {
      if (((*(char *)(lVar28 + 0x12 + (ulonglong)uVar39 * 0x14) == '\x0f') &&
          (*(char *)(lVar28 + 0x12 + (ulonglong)(uVar39 + 1) * 0x14) == '\x04')) &&
         ((uVar39 + 2 == uVar21 ||
          (*(char *)(lVar28 + 0x12 + (ulonglong)(uVar39 + 2) * 0x14) != '\x06')))) {
        puVar3 = (uint *)(lVar28 + (ulonglong)uVar39 * 0x14 + 4);
        *puVar3 = *puVar3 | *(uint *)((longlong)local_c0 + 0xc4);
        puVar3 = (uint *)(lVar28 + (ulonglong)(uVar39 + 1) * 0x14 + 4);
        *puVar3 = *puVar3 | *(uint *)((longlong)local_c0 + 0xc4);
      }
      uVar31 = uVar39 + 2;
      uVar39 = uVar39 + 1;
    }
  }
  uVar31 = uVar38;
  if (((int)local_c0[0x18] != 0) && (plVar42 = local_c0, lVar44 = local_a8, uVar21 + 2 < param_5)) {
    while (uVar31 = uVar38, uVar21 + 2 < param_5) {
      puVar46 = (ushort *)plVar42[7];
      uVar21 = (uint)uVar37;
      local_b8 = CONCAT44(*(undefined4 *)(lVar28 + (ulonglong)(uVar21 + 1) * 0x14),
                          *(undefined4 *)(lVar28 + uVar37 * 0x14));
      puVar2 = puVar46 + (ulonglong)*(uint *)(plVar42 + 8) * 6;
      local_a8 = lVar44;
      if (puVar46 != puVar2) {
        local_70 = lVar44 + 0x140;
        do {
          lVar28 = plVar42[9];
          uVar6 = *puVar46;
          lVar23 = FUN_1403c4f70(local_70);
          if ((uint)uVar6 < *(uint *)(lVar23 + 8)) {
            local_80 = (uint *)&local_b8;
            local_90[0] = 0;
            local_74 = (char)lVar28 != '\0';
            local_78 = 2;
            local_88 = lVar44;
            puVar24 = (undefined8 *)FUN_1403c4f70(lVar44 + 0x140);
            puVar25 = &DAT_14045dd10;
            if ((undefined8 *)*puVar24 != (undefined8 *)0x0) {
              puVar25 = (undefined8 *)*puVar24;
            }
            puVar24 = &DAT_14045dd10;
            if (3 < *(uint *)(puVar25 + 3)) {
              puVar24 = (undefined8 *)puVar25[2];
            }
            pbVar26 = (byte *)FUN_1403cbf00(puVar24,(uint)uVar6);
            uVar27 = FUN_1403c4f70(lVar44 + 0x140);
            lVar28 = FUN_1403c5c00(uVar27,uVar6);
            lVar44 = local_a8;
            if ((lVar28 != 0) && (local_78 != 0)) {
              uVar36 = 0;
              do {
                if ((*(ulonglong *)(lVar28 + uVar36 * 8) >>
                     (*local_80 >> ((byte)(&DAT_14045c3c8)[uVar36] & 0x1f) & 0x3f) & 1) == 0)
                goto LAB_1403e4e3d;
                uVar38 = (int)uVar36 + 1;
                uVar36 = (ulonglong)uVar38;
              } while (uVar38 < 3);
              bVar20 = *pbVar26;
              uVar38 = 0;
              bVar5 = pbVar26[1];
              uVar31 = (uint)pbVar26[4] * 0x100 + (uint)pbVar26[5];
              if (uVar31 != 0) {
                do {
                  if (uVar38 < (uint)pbVar26[4] * 0x100 + (uint)pbVar26[5]) {
                    pbVar29 = pbVar26 + ((ulonglong)uVar38 + 3) * 2;
                  }
                  else {
                    pbVar29 = (byte *)&DAT_14045dd10;
                  }
                  uVar39 = (uint)*pbVar29 * 0x100 + (uint)pbVar29[1];
                  if (uVar39 == 0) {
                    pbVar29 = (byte *)&DAT_14045dd10;
                  }
                  else {
                    pbVar29 = pbVar26 + uVar39;
                  }
                  switch((uint)bVar5 + (uint)bVar20 * 0x100) {
                  case 1:
                    iVar22 = (uint)*pbVar29 * 0x100 + (uint)pbVar29[1] + -1;
                    if (iVar22 != 0) goto LAB_1403e4cac;
LAB_1403e4cb5:
                    if (local_78 == 1) {
                      uVar39 = (uint)pbVar29[3] + (uint)pbVar29[2] * 0x100;
                      if (uVar39 == 0) {
                        pbVar29 = (byte *)&DAT_14045dd10;
                      }
                      else {
                        pbVar29 = pbVar29 + uVar39;
                      }
                      uVar43 = (uint)pbVar29[1];
                      uVar39 = *local_80;
                      uVar40 = (uint)*pbVar29 << 8;
                      goto LAB_1403e4dfa;
                    }
                    goto LAB_1403e4e1e;
                  case 2:
                    iVar22 = (uint)*pbVar29 * 0x100 + (uint)pbVar29[1];
LAB_1403e4cac:
                    if (iVar22 == 1) goto LAB_1403e4cb5;
LAB_1403e4e1e:
                    cVar19 = '\0';
                    break;
                  case 3:
                  case 8:
                    if (((uint)*pbVar29 * 0x100 + (uint)pbVar29[1] != 1) || (local_78 != 1))
                    goto LAB_1403e4e1e;
                    uVar39 = (uint)pbVar29[3] + (uint)pbVar29[2] * 0x100;
                    if (uVar39 == 0) {
                      pbVar29 = (byte *)&DAT_14045dd10;
                    }
                    else {
                      pbVar29 = pbVar29 + uVar39;
                    }
                    uVar43 = (uint)*pbVar29 << 8;
                    uVar39 = *local_80;
                    uVar40 = (uint)pbVar29[1];
LAB_1403e4dfa:
                    if (uVar43 + uVar40 == 1) {
                      iVar22 = FUN_1403c70f0(pbVar29,uVar39);
                    }
                    else {
                      if (uVar43 + uVar40 != 2) goto LAB_1403e4e1e;
                      iVar22 = FUN_1403c7170();
                    }
                    if (iVar22 == -1) goto LAB_1403e4e1e;
                    cVar19 = '\x01';
                    break;
                  case 4:
                    if ((uint)*pbVar29 * 0x100 + (uint)pbVar29[1] != 1) goto LAB_1403e4e1e;
                    cVar19 = FUN_1404136b0(pbVar29,local_90);
                    break;
                  case 5:
                    cVar19 = FUN_14037c020(pbVar29,local_90);
                    break;
                  case 6:
                    cVar19 = FUN_14037bd90(pbVar29,local_90);
                    break;
                  case 7:
                    if ((uint)*pbVar29 * 0x100 + (uint)pbVar29[1] != 1) goto LAB_1403e4e1e;
                    uVar39 = (uint)pbVar29[5] * 0x10000 + (uint)pbVar29[6] * 0x100 +
                             (uint)pbVar29[4] * 0x1000000 + (uint)pbVar29[7];
                    if (uVar39 == 0) {
                      cVar19 = FUN_14037c200(&DAT_14045dd10,local_90);
                    }
                    else {
                      cVar19 = FUN_14037c200(pbVar29 + uVar39,local_90);
                    }
                    break;
                  default:
                    goto switchD_1403e4c99_default;
                  }
                  if (cVar19 != '\0') {
                    puVar3 = (uint *)(local_a0 + 4 + uVar37 * 0x14);
                    *puVar3 = *puVar3 | *(uint *)(local_c0 + 0x18);
                    puVar3 = (uint *)(local_a0 + (ulonglong)(uVar21 + 1) * 0x14 + 4);
                    *puVar3 = *puVar3 | *(uint *)(local_c0 + 0x18);
                    uVar38 = local_b0;
                    lVar28 = local_a0;
                    uVar31 = local_b0;
                    goto joined_r0x0001403e4e98;
                  }
switchD_1403e4c99_default:
                  uVar38 = uVar38 + 1;
                  lVar44 = local_a8;
                } while (uVar38 < uVar31);
              }
            }
          }
LAB_1403e4e3d:
          puVar46 = puVar46 + 6;
          plVar42 = local_c0;
          lVar28 = local_a0;
        } while (puVar46 != puVar2);
      }
      uVar37 = (ulonglong)(uVar21 + 1);
      uVar38 = local_b0;
      lVar44 = local_a8;
    }
  }
joined_r0x0001403e4e98:
  while (uVar38 = uVar38 + 1, uVar38 < param_5) {
    uVar36 = (ulonglong)uVar38;
    if ((((*(byte *)(lVar28 + 0xc + uVar36 * 0x14) & 0x20) == 0) &&
        (bVar20 = *(byte *)(lVar28 + 0x12 + uVar36 * 0x14), bVar20 < 0x20)) && (bVar20 - 5 < 2)) {
      do {
        uVar21 = (int)uVar36 - 1;
        uVar36 = (ulonglong)uVar21;
        if (bVar20 == 5) {
          puVar3 = (uint *)(lVar28 + uVar36 * 0x14 + 4);
          *puVar3 = *puVar3 & ~*(uint *)((longlong)local_c0 + 0xcc);
        }
      } while ((uVar31 < uVar21) &&
              ((((*(byte *)(lVar28 + 0xc + uVar36 * 0x14) & 0x20) != 0 ||
                (bVar5 = *(byte *)(lVar28 + 0x12 + uVar36 * 0x14), 0x1f < bVar5)) ||
               ((1 << (bVar5 & 0x1f) & 0x58c06U) == 0))));
    }
  }
  return;
}

