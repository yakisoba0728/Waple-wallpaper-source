// Function: FUN_14018aac0
// Addr: 14018aac0
// Size: 1900 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14018aac0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  char cVar13;
  int iVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_10b8 [4240];
  
  *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) & 0xfe;
  uVar7 = *(uint *)(param_1 + 0xe0);
  *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) | param_2 == 0;
  lVar19 = 0x158;
  if (param_2 == 1) {
    lVar19 = 0x1c8;
  }
  if ((uVar7 & 0x3000) == 0x2000) {
    FUN_14019eb00(param_1 + 0x250,param_1 + lVar19);
    lVar19 = *(longlong *)(param_1 + 600);
    lVar16 = *(longlong *)(param_1 + 0x250);
    lVar20 = lVar19 - lVar16 >> 3;
    if (lVar20 < 0x21) {
      FUN_14019fde0(lVar16,lVar19,&LAB_140186980);
    }
    else {
      uVar18 = lVar20 - (lVar20 - (lVar19 - lVar16 >> 0x3f) >> 1);
      uVar17 = uVar18;
      if (0x200 < uVar18) {
        uVar17 = 0x7fffffffffffffff;
        if ((longlong)uVar18 < 0x7fffffffffffffff) {
          uVar17 = uVar18;
        }
        if ((uVar17 < 0x2000000000000000) && (0 < (longlong)uVar17)) {
          do {
            puVar15 = (undefined1 *)FUN_1402ecff0(uVar17 * 8,&PTR_140426e20);
            if (puVar15 != (undefined1 *)0x0) {
              if (0x200 < uVar17) goto LAB_14018ac16;
              goto LAB_14018ac04;
            }
            uVar17 = uVar17 >> 1;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined1 *)0x0;
LAB_14018ac04:
        FUN_14028af80(puVar15);
        uVar17 = 0x200;
      }
      puVar15 = local_10b8;
LAB_14018ac16:
      FUN_14019fec0(lVar16,lVar19,lVar20,puVar15,uVar17,&LAB_140186980);
      if (0x200 < uVar17) {
        FUN_14028af80(puVar15);
      }
    }
    lVar19 = 0x250;
  }
  lVar16 = *(longlong *)(param_1 + 0xd8);
  if (*(char *)(lVar16 + 0x1ca) != '\0') {
    FUN_1400d4200();
  }
  FUN_1401849e0(lVar16 + 0xec0,lVar16 + 0x930);
  if ((uVar7 & 0x108) == 0x108) {
    plVar9 = *(longlong **)(lVar19 + 8 + param_1);
    for (plVar21 = *(longlong **)(lVar19 + param_1); plVar21 != plVar9; plVar21 = plVar21 + 1) {
      plVar10 = (longlong *)*plVar21;
      cVar13 = (**(code **)(*plVar10 + 0x68))(plVar10);
      if (cVar13 != '\0') {
        if ((((*(byte *)(param_1 + 0x468) & 1) != 0) &&
            (iVar14 = (**(code **)(*plVar10 + 0x60))(plVar10), iVar14 != 6)) &&
           ((*(byte *)(param_1 + 0x468) & 4) != 0)) {
          FUN_140198d00(param_1);
        }
        lVar19 = *(longlong *)(param_1 + 0xd8);
        puVar11 = *(undefined8 **)(lVar19 + 0x38);
        *(undefined1 *)(lVar19 + 0x1ca) = 1;
        *(undefined8 **)(lVar19 + 0x38) = puVar11 + 8;
        puVar11[8] = *puVar11;
        puVar11[9] = puVar11[1];
        puVar11[10] = puVar11[2];
        puVar11[0xb] = puVar11[3];
        puVar11[0xc] = puVar11[4];
        puVar11[0xd] = puVar11[5];
        puVar11[0xe] = puVar11[6];
        puVar11[0xf] = puVar11[7];
        lVar19 = plVar10[0x30];
        plVar12 = plVar10;
        while (lVar19 != 0) {
          plVar12 = (longlong *)plVar12[0x30];
          lVar19 = plVar12[0x30];
        }
        fVar25 = *(float *)(param_1 + 0x334);
        fVar24 = (*(float *)(plVar12 + 0x25) - *(float *)(param_1 + 0x340)) * fVar25 *
                 *(float *)(plVar12 + 0x2e);
        fVar23 = (*(float *)((longlong)plVar12 + 300) - *(float *)(param_1 + 0x344)) * fVar25 *
                 *(float *)((longlong)plVar12 + 0x174);
        *(float *)(plVar10 + 0x2f) = fVar24;
        *(float *)((longlong)plVar10 + 0x17c) = fVar23;
        fVar25 = fVar25 * 0.0;
        puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0xd8) + 0x38);
        uVar1 = puVar11[2];
        uVar2 = *puVar11;
        uVar3 = puVar11[3];
        uVar4 = puVar11[1];
        uVar5 = puVar11[4];
        uVar6 = puVar11[5];
        *(undefined4 *)puVar11 = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar11 + 4) = *(undefined4 *)((longlong)puVar11 + 4);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar11 + 1);
        *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)((longlong)puVar11 + 0xc);
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar11 + 2);
        *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)((longlong)puVar11 + 0x14);
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(puVar11 + 3);
        *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)((longlong)puVar11 + 0x1c);
        *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar11 + 4);
        *(undefined4 *)((longlong)puVar11 + 0x24) = *(undefined4 *)((longlong)puVar11 + 0x24);
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(puVar11 + 5);
        *(undefined4 *)((longlong)puVar11 + 0x2c) = *(undefined4 *)((longlong)puVar11 + 0x2c);
        puVar11[6] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar24 +
                              (float)((ulonglong)uVar1 >> 0x20) * fVar23 +
                              (float)((ulonglong)uVar5 >> 0x20) * fVar25 +
                              (float)((ulonglong)puVar11[6] >> 0x20),
                              (float)uVar2 * fVar24 + (float)uVar1 * fVar23 + (float)uVar5 * fVar25
                              + (float)puVar11[6]);
        puVar11[7] = CONCAT44((float)((ulonglong)uVar4 >> 0x20) * fVar24 +
                              (float)((ulonglong)uVar3 >> 0x20) * fVar23 +
                              (float)((ulonglong)uVar6 >> 0x20) * fVar25 +
                              (float)((ulonglong)puVar11[7] >> 0x20),
                              (float)uVar4 * fVar24 + (float)uVar3 * fVar23 + (float)uVar6 * fVar25
                              + (float)puVar11[7]);
        if (((*(ushort *)(plVar10 + 0x24) & 2) == 0) &&
           ((param_2 != 2 || ((*(ushort *)(plVar10 + 0x24) & 0xc00) == 0xc00)))) {
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        lVar19 = *(longlong *)(param_1 + 0xd8);
        plVar10 = (longlong *)(lVar19 + 0x38);
        *plVar10 = *plVar10 + -0x40;
        *(undefined1 *)(lVar19 + 0x1ca) = 1;
      }
    }
  }
  else {
    puVar8 = *(ulonglong **)(lVar19 + 8 + param_1);
    puVar22 = *(ulonglong **)(lVar19 + param_1);
    if ((*(uint *)(param_1 + 0xe0) & 0x1008) == 0x1000) {
      for (; puVar22 != puVar8; puVar22 = puVar22 + 1) {
        plVar9 = (longlong *)*puVar22;
        uVar17 = *(ulonglong *)(param_1 + 0x1b8) &
                 (((((((((ulonglong)plVar9 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)plVar9 >> 8 & 0xff) * 0x100000001b3 ^
                      (ulonglong)plVar9 >> 0x10 & 0xff) * 0x100000001b3 ^
                     (ulonglong)plVar9 >> 0x18 & 0xff) * 0x100000001b3 ^
                    (ulonglong)plVar9 >> 0x20 & 0xff) * 0x100000001b3 ^
                   (ulonglong)plVar9 >> 0x28 & 0xff) * 0x100000001b3 ^
                  (ulonglong)plVar9 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)plVar9 >> 0x38) *
                 0x100000001b3;
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 8 + uVar17 * 0x10);
        if (lVar19 == *(longlong *)(param_1 + 400)) {
LAB_14018adb9:
          if ((((*(byte *)(plVar9 + 0x24) & 2) == 0) &&
              (cVar13 = (**(code **)(*plVar9 + 0x68))(plVar9), cVar13 != '\0')) &&
             ((param_2 != 2 || ((*(ushort *)(plVar9 + 0x24) & 0xc00) == 0xc00)))) {
            if (((*(byte *)(param_1 + 0x468) & 1) != 0) &&
               ((iVar14 = (**(code **)(*plVar9 + 0x60))(plVar9), iVar14 != 6 &&
                ((*(byte *)(param_1 + 0x468) & 4) != 0)))) {
              FUN_140198d00(param_1);
            }
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
        }
        else {
          plVar21 = *(longlong **)(lVar19 + 0x10);
          while (plVar9 != plVar21) {
            if (lVar19 == *(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar17 * 0x10))
            goto LAB_14018adb9;
            lVar19 = *(longlong *)(lVar19 + 8);
            plVar21 = *(longlong **)(lVar19 + 0x10);
          }
          if ((lVar19 == 0) || (lVar19 == *(longlong *)(param_1 + 400))) goto LAB_14018adb9;
        }
      }
      FUN_1401865c0(param_1 + 0x170,*(longlong *)(param_1 + 0xd8) + 0x160);
      plVar9 = *(longlong **)(param_1 + 0x178);
      for (plVar21 = *(longlong **)(param_1 + 0x170); plVar21 != plVar9; plVar21 = plVar21 + 1) {
        plVar10 = (longlong *)*plVar21;
        if ((((*(byte *)(plVar10 + 0x24) & 2) == 0) &&
            (cVar13 = (**(code **)(*plVar10 + 0x68))(plVar10), cVar13 != '\0')) &&
           ((param_2 != 2 || ((*(ushort *)(plVar10 + 0x24) & 0xc00) == 0xc00)))) {
          if ((((*(byte *)(param_1 + 0x468) & 1) != 0) &&
              (iVar14 = (**(code **)(*plVar10 + 0x60))(plVar10), iVar14 != 6)) &&
             ((*(byte *)(param_1 + 0x468) & 4) != 0)) {
            FUN_140198d00(param_1);
          }
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
      }
    }
    else {
      for (; puVar22 != puVar8; puVar22 = puVar22 + 1) {
        plVar9 = (longlong *)*puVar22;
        if ((((*(byte *)(plVar9 + 0x24) & 2) == 0) &&
            (cVar13 = (**(code **)(*plVar9 + 0x68))(plVar9), cVar13 != '\0')) &&
           ((param_2 != 2 || ((*(ushort *)(plVar9 + 0x24) & 0xc00) == 0xc00)))) {
          if ((((*(byte *)(param_1 + 0x468) & 1) != 0) &&
              (iVar14 = (**(code **)(*plVar9 + 0x60))(plVar9), iVar14 != 6)) &&
             ((*(byte *)(param_1 + 0x468) & 4) != 0)) {
            FUN_140198d00(param_1);
          }
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0x468) & 4) != 0) {
    FUN_140198d00(param_1);
  }
  return;
}

