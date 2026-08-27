// Function: FUN_140268e80
// Addr: 140268e80
// Size: 1003 bytes


longlong FUN_140268e80(float *param_1,byte *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 local_res8 [4];
  
  puVar15 = *(undefined8 **)(param_1 + 2);
  uVar16 = (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
             0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
           0x100000001b3;
  puVar9 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar9 != puVar15) {
    iVar1 = *(int *)(puVar9 + 2);
    puVar15 = puVar9;
    while (puVar9 = puVar15, *(int *)param_2 != iVar1) {
      if (puVar15 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      goto LAB_140268f1e;
      puVar15 = (undefined8 *)puVar15[1];
      iVar1 = *(int *)(puVar15 + 2);
    }
    goto LAB_14026923e;
  }
LAB_140268f1e:
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar9 = (undefined8 *)FUN_14028af20(0x18);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  uVar10 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar10) {
    fVar17 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar12 = 0;
    if ((DAT_140492974 <= fVar17) && (fVar17 = fVar17 - DAT_140492974, fVar17 < DAT_140492974)) {
      lVar12 = -0x8000000000000000;
    }
    uVar13 = 8;
    if (8 < (ulonglong)((longlong)fVar17 + lVar12)) {
      uVar13 = (longlong)fVar17 + lVar12;
    }
    uVar14 = uVar10;
    if ((uVar10 < uVar13) && ((0x1ff < uVar10 || (uVar14 = uVar10 * 8, uVar10 * 8 < uVar13)))) {
      uVar14 = uVar13;
    }
    for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar2 = *(longlong **)(param_1 + 2);
    uVar10 = uVar14 - 1 | 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    bVar11 = (char)lVar12 + 1;
    lVar12 = 1L << (bVar11 & 0x3f);
    FUN_14004f190(param_1 + 6,2L << (bVar11 & 0x3f),plVar2);
    *(longlong *)(param_1 + 0xe) = lVar12;
    *(longlong *)(param_1 + 0xc) = lVar12 + -1;
    plVar8 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x000140269076:
    if (plVar8 != plVar2) {
      lVar12 = *(longlong *)(param_1 + 6);
      plVar3 = (longlong *)*plVar8;
      uVar10 = *(ulonglong *)(param_1 + 0xc) &
               (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3;
      plVar4 = *(longlong **)(lVar12 + uVar10 * 0x10);
      if (plVar4 == plVar2) {
        *(longlong **)(lVar12 + uVar10 * 0x10) = plVar8;
        *(longlong **)(lVar12 + 8 + uVar10 * 0x10) = plVar8;
        plVar8 = plVar3;
      }
      else {
        plVar5 = *(longlong **)(lVar12 + 8 + uVar10 * 0x10);
        if ((int)plVar8[2] == (int)plVar5[2]) {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != plVar8) {
            plVar4 = (longlong *)plVar8[1];
            *plVar4 = (longlong)plVar3;
            puVar15 = (undefined8 *)plVar3[1];
            *puVar15 = plVar5;
            puVar6 = (undefined8 *)plVar5[1];
            *puVar6 = plVar8;
            plVar5[1] = (longlong)puVar15;
            plVar3[1] = (longlong)plVar4;
            plVar8[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar12 + 8 + uVar10 * 0x10) = plVar8;
          plVar8 = plVar3;
        }
        else {
          do {
            if (plVar4 == plVar5) {
              plVar4 = (longlong *)plVar8[1];
              *plVar4 = (longlong)plVar3;
              puVar15 = (undefined8 *)plVar3[1];
              *puVar15 = plVar5;
              puVar6 = (undefined8 *)plVar5[1];
              *puVar6 = plVar8;
              plVar5[1] = (longlong)puVar15;
              plVar3[1] = (longlong)plVar4;
              plVar8[1] = (longlong)puVar6;
              *(longlong **)(lVar12 + uVar10 * 0x10) = plVar8;
              plVar8 = plVar3;
              goto joined_r0x000140269076;
            }
            plVar5 = (longlong *)plVar5[1];
          } while ((int)plVar8[2] != (int)plVar5[2]);
          lVar12 = *plVar5;
          plVar4 = (longlong *)plVar8[1];
          *plVar4 = (longlong)plVar3;
          plVar5 = (longlong *)plVar3[1];
          *plVar5 = lVar12;
          puVar15 = *(undefined8 **)(lVar12 + 8);
          *puVar15 = plVar8;
          *(longlong **)(lVar12 + 8) = plVar5;
          plVar3[1] = (longlong)plVar4;
          plVar8[1] = (longlong)puVar15;
          plVar8 = plVar3;
        }
      }
      goto joined_r0x000140269076;
    }
    local_res8[0] = 0;
    FUN_140050350(local_res8);
    puVar15 = *(undefined8 **)(param_1 + 2);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar6 != puVar15) {
      iVar1 = *(int *)(puVar6 + 2);
      puVar15 = puVar6;
      while (*(int *)(puVar9 + 2) != iVar1) {
        if (puVar15 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_1402691c5;
        puVar15 = (undefined8 *)puVar15[1];
        iVar1 = *(int *)(puVar15 + 2);
      }
      puVar15 = (undefined8 *)*puVar15;
    }
  }
LAB_1402691c5:
  puVar6 = (undefined8 *)puVar15[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar9 = puVar15;
  puVar9[1] = puVar6;
  *puVar6 = puVar9;
  puVar15[1] = puVar9;
  lVar12 = *(longlong *)(param_1 + 6);
  uVar16 = *(ulonglong *)(param_1 + 0xc) & uVar16;
  puVar7 = *(undefined8 **)(lVar12 + uVar16 * 0x10);
  if (puVar7 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar12 + uVar16 * 0x10) = puVar9;
  }
  else {
    if (puVar7 == puVar15) {
      *(undefined8 **)(lVar12 + uVar16 * 0x10) = puVar9;
      goto LAB_14026923e;
    }
    if (*(undefined8 **)(lVar12 + 8 + uVar16 * 0x10) != puVar6) goto LAB_14026923e;
  }
  *(undefined8 **)(lVar12 + 8 + uVar16 * 0x10) = puVar9;
LAB_14026923e:
  return (longlong)puVar9 + 0x14;
}

