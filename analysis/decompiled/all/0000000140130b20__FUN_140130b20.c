// Function: FUN_140130b20
// Addr: 140130b20
// Size: 1048 bytes


undefined8 * FUN_140130b20(float *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  float fVar18;
  undefined8 local_res8;
  undefined8 *local_res10;
  
  puVar16 = *(undefined8 **)(param_1 + 2);
  uVar17 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar10 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (uVar17 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar10 == puVar16) {
LAB_140130be5:
    local_res10 = param_2;
    if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar10 = (undefined8 *)FUN_14028af20(0x18);
    *(undefined4 *)(puVar10 + 2) = *(undefined4 *)param_3;
    uVar11 = *(ulonglong *)(param_1 + 0xe);
    if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar11) {
      fVar18 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
      lVar13 = 0;
      if ((DAT_140492974 <= fVar18) && (fVar18 = fVar18 - DAT_140492974, fVar18 < DAT_140492974)) {
        lVar13 = -0x8000000000000000;
      }
      uVar14 = 8;
      if (8 < (ulonglong)((longlong)fVar18 + lVar13)) {
        uVar14 = (longlong)fVar18 + lVar13;
      }
      uVar15 = uVar11;
      if ((uVar11 < uVar14) && ((0x1ff < uVar11 || (uVar15 = uVar11 * 8, uVar11 * 8 < uVar14)))) {
        uVar15 = uVar14;
      }
      for (lVar13 = 0x3f; 0xfffffffffffffffU >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
      if ((ulonglong)(1L << ((byte)lVar13 & 0x3f)) < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("invalid hash bucket count");
      }
      plVar2 = *(longlong **)(param_1 + 2);
      uVar11 = uVar15 - 1 | 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      bVar12 = (char)lVar13 + 1;
      lVar13 = 1L << (bVar12 & 0x3f);
      FUN_14003e510(param_1 + 6,2L << (bVar12 & 0x3f),plVar2);
      *(longlong *)(param_1 + 0xe) = lVar13;
      *(longlong *)(param_1 + 0xc) = lVar13 + -1;
      plVar8 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x000140130d36:
      if (plVar8 != plVar2) {
        lVar13 = *(longlong *)(param_1 + 6);
        plVar3 = (longlong *)*plVar8;
        uVar11 = *(ulonglong *)(param_1 + 0xc) &
                 (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar13 + uVar11 * 0x10);
        param_2 = local_res10;
        if (plVar4 == plVar2) {
          *(longlong **)(lVar13 + uVar11 * 0x10) = plVar8;
          *(longlong **)(lVar13 + 8 + uVar11 * 0x10) = plVar8;
          plVar8 = plVar3;
        }
        else {
          plVar5 = *(longlong **)(lVar13 + 8 + uVar11 * 0x10);
          if ((int)plVar8[2] == (int)plVar5[2]) {
            plVar5 = (longlong *)*plVar5;
            if (plVar5 != plVar8) {
              plVar4 = (longlong *)plVar8[1];
              *plVar4 = (longlong)plVar3;
              puVar16 = (undefined8 *)plVar3[1];
              *puVar16 = plVar5;
              puVar6 = (undefined8 *)plVar5[1];
              *puVar6 = plVar8;
              plVar5[1] = (longlong)puVar16;
              plVar3[1] = (longlong)plVar4;
              plVar8[1] = (longlong)puVar6;
            }
            *(longlong **)(lVar13 + 8 + uVar11 * 0x10) = plVar8;
            plVar8 = plVar3;
          }
          else {
            do {
              if (plVar4 == plVar5) {
                plVar4 = (longlong *)plVar8[1];
                *plVar4 = (longlong)plVar3;
                puVar16 = (undefined8 *)plVar3[1];
                *puVar16 = plVar5;
                puVar6 = (undefined8 *)plVar5[1];
                *puVar6 = plVar8;
                plVar5[1] = (longlong)puVar16;
                plVar3[1] = (longlong)plVar4;
                plVar8[1] = (longlong)puVar6;
                *(longlong **)(lVar13 + uVar11 * 0x10) = plVar8;
                plVar8 = plVar3;
                goto joined_r0x000140130d36;
              }
              plVar5 = (longlong *)plVar5[1];
            } while ((int)plVar8[2] != (int)plVar5[2]);
            lVar13 = *plVar5;
            plVar4 = (longlong *)plVar8[1];
            *plVar4 = (longlong)plVar3;
            plVar5 = (longlong *)plVar3[1];
            *plVar5 = lVar13;
            puVar16 = *(undefined8 **)(lVar13 + 8);
            *puVar16 = plVar8;
            *(longlong **)(lVar13 + 8) = plVar5;
            plVar3[1] = (longlong)plVar4;
            plVar8[1] = (longlong)puVar16;
            plVar8 = plVar3;
          }
        }
        goto joined_r0x000140130d36;
      }
      local_res8 = 0;
      FUN_140050350(&local_res8);
      puVar16 = *(undefined8 **)(param_1 + 2);
      puVar6 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + 8 + (uVar17 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      if (puVar6 != puVar16) {
        iVar1 = *(int *)(puVar6 + 2);
        puVar16 = puVar6;
        while (*(int *)(puVar10 + 2) != iVar1) {
          if (puVar16 ==
              *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar17 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
          goto LAB_140130e91;
          puVar16 = (undefined8 *)puVar16[1];
          iVar1 = *(int *)(puVar16 + 2);
        }
        puVar16 = (undefined8 *)*puVar16;
      }
    }
LAB_140130e91:
    puVar6 = (undefined8 *)puVar16[1];
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
    *puVar10 = puVar16;
    puVar10[1] = puVar6;
    *puVar6 = puVar10;
    puVar16[1] = puVar10;
    lVar13 = *(longlong *)(param_1 + 6);
    uVar17 = *(ulonglong *)(param_1 + 0xc) & uVar17;
    puVar7 = *(undefined8 **)(lVar13 + uVar17 * 0x10);
    if (puVar7 == *(undefined8 **)(param_1 + 2)) {
      *(undefined8 **)(lVar13 + uVar17 * 0x10) = puVar10;
      *(undefined8 **)(lVar13 + 8 + uVar17 * 0x10) = puVar10;
      uVar9 = 1;
    }
    else if (puVar7 == puVar16) {
      *(undefined8 **)(lVar13 + uVar17 * 0x10) = puVar10;
      uVar9 = 1;
    }
    else {
      if (*(undefined8 **)(lVar13 + 8 + uVar17 * 0x10) == puVar6) {
        *(undefined8 **)(lVar13 + 8 + uVar17 * 0x10) = puVar10;
      }
      uVar9 = 1;
    }
  }
  else {
    iVar1 = *(int *)(puVar10 + 2);
    puVar16 = puVar10;
    while (*(int *)param_3 != iVar1) {
      if (puVar16 ==
          *(undefined8 **)
           (*(longlong *)(param_1 + 6) + (uVar17 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      goto LAB_140130be5;
      puVar16 = (undefined8 *)puVar16[1];
      iVar1 = *(int *)(puVar16 + 2);
    }
    uVar9 = 0;
    puVar10 = puVar16;
  }
  *param_2 = puVar10;
  *(undefined1 *)(param_2 + 1) = uVar9;
  return param_2;
}

