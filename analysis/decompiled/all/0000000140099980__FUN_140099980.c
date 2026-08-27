// Function: FUN_140099980
// Addr: 140099980
// Size: 1491 bytes


longlong FUN_140099980(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  longlong local_res8;
  undefined8 local_res20;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar15 = (uint)(param_3 ^ 1) * -0x80000000 + 0x80000000 | param_2;
  uVar18 = (((((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((param_2 & 0xff00) >> 8)) * 0x100000001b3 ^
            (ulonglong)((param_2 & 0xff0000) >> 0x10)) * 0x100000001b3 ^ (ulonglong)(uVar15 >> 0x18)
           ) * 0x100000001b3;
  uVar12 = uVar18 & *(ulonglong *)(param_1 + 0xa8);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 8 + uVar12 * 0x10);
  if (lVar10 == *(longlong *)(param_1 + 0x80)) {
LAB_140099a30:
    lVar10 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar10 + 0x10);
    while (uVar15 != uVar1) {
      if (lVar10 == *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar12 * 0x10))
      goto LAB_140099a30;
      lVar10 = *(longlong *)(lVar10 + 8);
      uVar1 = *(uint *)(lVar10 + 0x10);
    }
  }
  if ((lVar10 != 0) && (lVar10 != *(longlong *)(param_1 + 0x80))) {
    return *(longlong *)(lVar10 + 0x18);
  }
  bVar14 = (byte)(uVar15 >> 0x1b) & 1;
  if ((param_2 & 1) == 0) {
    if (bVar14 == 0) {
      local_78 = (uint)(param_3 ^ 1) << 6 | 0x15;
      goto LAB_140099b7f;
    }
    local_78 = 0x95;
LAB_140099a74:
    local_74 = 4;
  }
  else {
    local_78 = 0;
    if (bVar14 != 0) goto LAB_140099a74;
LAB_140099b7f:
    if ((param_2 & 0x4000000) != 0) goto LAB_140099a74;
    local_74 = param_2 & 2 | 1;
  }
  local_60 = 8;
  local_54 = 0;
  if (bVar14 != 0) {
    local_60 = 5;
  }
  local_5c = 0;
  local_48 = 0x7f7fffff;
  local_4c = 0;
  local_68 = 0;
  local_64 = 1;
  if (local_78 == 0x55) {
    local_64 = 8;
  }
  local_70 = local_74;
  local_6c = local_74;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0xb8))
            ((longlong *)**(undefined8 **)(param_1 + 0x70),&local_78,&local_res8);
  lVar10 = local_res8;
  if (local_res8 == 0) {
    return 0;
  }
  uVar12 = uVar18 & *(ulonglong *)(param_1 + 0xa8);
  puVar17 = *(undefined8 **)(param_1 + 0x80);
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 8 + uVar12 * 0x10);
  if (puVar11 != puVar17) {
    uVar1 = *(uint *)(puVar11 + 2);
    puVar17 = puVar11;
    while (puVar11 = puVar17, uVar15 != uVar1) {
      if (puVar17 == *(undefined8 **)(*(longlong *)(param_1 + 0x90) + uVar12 * 0x10))
      goto LAB_140099ba0;
      puVar17 = (undefined8 *)puVar17[1];
      uVar1 = *(uint *)(puVar17 + 2);
    }
    goto LAB_140099f0b;
  }
LAB_140099ba0:
  if (*(longlong *)(param_1 + 0x88) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar11 = (undefined8 *)FUN_14028af20(0x20);
  *(uint *)(puVar11 + 2) = uVar15;
  puVar11[3] = 0;
  fVar20 = (float)(*(longlong *)(param_1 + 0x88) + 1);
  uVar12 = *(ulonglong *)(param_1 + 0xb0);
  if (*(float *)(param_1 + 0x78) < fVar20 / (float)uVar12) {
    fVar20 = (float)FUN_140419fa0(fVar20 / *(float *)(param_1 + 0x78));
    lVar13 = 0;
    if ((DAT_140492974 <= fVar20) && (fVar20 = fVar20 - DAT_140492974, fVar20 < DAT_140492974)) {
      lVar13 = -0x8000000000000000;
    }
    uVar19 = 8;
    if (8 < (ulonglong)((longlong)fVar20 + lVar13)) {
      uVar19 = (longlong)fVar20 + lVar13;
    }
    uVar16 = uVar12;
    if ((uVar12 < uVar19) && ((0x1ff < uVar12 || (uVar16 = uVar12 * 8, uVar12 * 8 < uVar19)))) {
      uVar16 = uVar19;
    }
    for (lVar13 = 0x3f; 0xfffffffffffffffU >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar13 & 0x3f)) < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar3 = *(longlong **)(param_1 + 0x80);
    uVar12 = uVar16 - 1 | 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar14 = (char)lVar13 + 1;
    lVar13 = 1L << (bVar14 & 0x3f);
    FUN_14004f190((longlong *)(param_1 + 0x90),2L << (bVar14 & 0x3f),plVar3);
    *(longlong *)(param_1 + 0xb0) = lVar13;
    *(longlong *)(param_1 + 0xa8) = lVar13 + -1;
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x80);
joined_r0x000140099d08:
    if (plVar9 != plVar3) {
      lVar13 = *(longlong *)(param_1 + 0x90);
      plVar4 = (longlong *)*plVar9;
      uVar12 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0xa8);
      plVar5 = *(longlong **)(lVar13 + uVar12 * 0x10);
      if (plVar5 == plVar3) {
        *(longlong **)(lVar13 + uVar12 * 0x10) = plVar9;
        *(longlong **)(lVar13 + 8 + uVar12 * 0x10) = plVar9;
        plVar9 = plVar4;
      }
      else {
        plVar6 = *(longlong **)(lVar13 + 8 + uVar12 * 0x10);
        if ((int)plVar9[2] == (int)plVar6[2]) {
          plVar6 = (longlong *)*plVar6;
          if (plVar6 != plVar9) {
            plVar5 = (longlong *)plVar9[1];
            *plVar5 = (longlong)plVar4;
            puVar17 = (undefined8 *)plVar4[1];
            *puVar17 = plVar6;
            puVar7 = (undefined8 *)plVar6[1];
            *puVar7 = plVar9;
            plVar6[1] = (longlong)puVar17;
            plVar4[1] = (longlong)plVar5;
            plVar9[1] = (longlong)puVar7;
          }
          *(longlong **)(lVar13 + 8 + uVar12 * 0x10) = plVar9;
          plVar9 = plVar4;
        }
        else {
          do {
            if (plVar5 == plVar6) {
              plVar5 = (longlong *)plVar9[1];
              *plVar5 = (longlong)plVar4;
              puVar17 = (undefined8 *)plVar4[1];
              *puVar17 = plVar6;
              puVar7 = (undefined8 *)plVar6[1];
              *puVar7 = plVar9;
              plVar6[1] = (longlong)puVar17;
              plVar4[1] = (longlong)plVar5;
              plVar9[1] = (longlong)puVar7;
              *(longlong **)(lVar13 + uVar12 * 0x10) = plVar9;
              plVar9 = plVar4;
              goto joined_r0x000140099d08;
            }
            plVar6 = (longlong *)plVar6[1];
          } while ((int)plVar9[2] != (int)plVar6[2]);
          lVar13 = *plVar6;
          plVar5 = (longlong *)plVar9[1];
          *plVar5 = (longlong)plVar4;
          plVar6 = (longlong *)plVar4[1];
          *plVar6 = lVar13;
          puVar17 = *(undefined8 **)(lVar13 + 8);
          *puVar17 = plVar9;
          *(longlong **)(lVar13 + 8) = plVar6;
          plVar4[1] = (longlong)plVar5;
          plVar9[1] = (longlong)puVar17;
          plVar9 = plVar4;
        }
      }
      goto joined_r0x000140099d08;
    }
    local_res20 = 0;
    FUN_1400500f0(&local_res20);
    lVar13 = *(longlong *)(param_1 + 0x90);
    uVar12 = uVar18 & *(ulonglong *)(param_1 + 0xa8);
    puVar17 = *(undefined8 **)(param_1 + 0x80);
    puVar7 = *(undefined8 **)(lVar13 + 8 + uVar12 * 0x10);
    if (puVar7 != puVar17) {
      iVar2 = *(int *)(puVar7 + 2);
      puVar17 = puVar7;
      while (*(int *)(puVar11 + 2) != iVar2) {
        if (puVar17 == *(undefined8 **)(lVar13 + uVar12 * 0x10)) goto LAB_140099eb8;
        puVar17 = (undefined8 *)puVar17[1];
        iVar2 = *(int *)(puVar17 + 2);
      }
      puVar17 = (undefined8 *)*puVar17;
    }
  }
LAB_140099eb8:
  puVar7 = (undefined8 *)puVar17[1];
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
  *puVar11 = puVar17;
  puVar11[1] = puVar7;
  *puVar7 = puVar11;
  puVar17[1] = puVar11;
  lVar13 = *(longlong *)(param_1 + 0x90);
  uVar18 = *(ulonglong *)(param_1 + 0xa8) & uVar18;
  puVar8 = *(undefined8 **)(lVar13 + uVar18 * 0x10);
  if (puVar8 == *(undefined8 **)(param_1 + 0x80)) {
    *(undefined8 **)(lVar13 + uVar18 * 0x10) = puVar11;
  }
  else {
    if (puVar8 == puVar17) {
      *(undefined8 **)(lVar13 + uVar18 * 0x10) = puVar11;
      goto LAB_140099f0b;
    }
    if (*(undefined8 **)(lVar13 + 8 + uVar18 * 0x10) != puVar7) goto LAB_140099f0b;
  }
  *(undefined8 **)(lVar13 + 8 + uVar18 * 0x10) = puVar11;
LAB_140099f0b:
  puVar11[3] = lVar10;
  return local_res8;
}

