// Function: FUN_1403d56e0
// Addr: 1403d56e0
// Size: 178 bytes


int * FUN_1403d56e0(longlong param_1,longlong *param_2,uint param_3,uint *param_4,uint param_5,
                   int *param_6,uint param_7)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  uint auStack_68 [2];
  uint auStack_60 [2];
  longlong *plStack_58;
  int *piStack_50;
  undefined8 *puStack_48;
  longlong *plStack_40;
  
  lVar8 = *param_2;
  piVar5 = (int *)FUN_1403c5500(lVar8 + 0x28);
  if (piVar5[1] == 0) {
    lVar8 = *(longlong *)(param_1 + 0x20);
    uVar17 = (ulonglong)*(uint *)(lVar8 + 0x14);
    if (*(uint *)(lVar8 + 0x14) == 0) {
      lVar6 = FUN_1403c5410(lVar8 + 0x78);
      uVar12 = (uint)*(byte *)(lVar6 + 0x13) + (uint)*(byte *)(lVar6 + 0x12) * 0x100;
      uVar15 = uVar12 - 0x10;
      piVar5 = (int *)(ulonglong)uVar15;
      uVar17 = 1000;
      if (uVar15 < 0x3ff1) {
        uVar17 = (ulonglong)uVar12;
      }
      *(int *)(lVar8 + 0x14) = (int)uVar17;
    }
    uVar15 = 0;
    lVar8 = *(longlong *)(param_1 + 0x58);
    if (param_3 == 0) {
      return piVar5;
    }
    do {
      *param_6 = (int)((ulonglong)((short)(uVar17 >> 1) * lVar8 + 0x8000) >> 0x10);
      uVar15 = uVar15 + 1;
      param_6 = (int *)((longlong)param_6 + (longlong)(ulonglong)param_7);
    } while (uVar15 < param_3);
    return param_6;
  }
  piVar9 = piVar5;
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_1403b3250(param_2,param_1);
    plStack_58 = param_2 + 2;
    lVar6 = func_0x0001403a28c0(plStack_58);
    plVar18 = plStack_58;
    piVar9 = (int *)0x0;
    if (lVar6 != 0) {
      puVar16 = &DAT_14045dde0;
      if (*(undefined8 **)(piVar5 + 8) != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)(piVar5 + 8);
      }
      if (*(uint *)(puVar16 + 3) < 0x14) {
        pbVar14 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar14 = (byte *)puVar16[2];
      }
      if ((uint)*pbVar14 * 0x100 + (uint)pbVar14[1] != 0) {
        uVar15 = (uint)pbVar14[5] * 0x10000 + (uint)pbVar14[6] * 0x100 +
                 (uint)pbVar14[4] * 0x1000000 + (uint)pbVar14[7];
        if (uVar15 == 0) {
          pbVar14 = (byte *)&DAT_14045dde0;
        }
        else {
          pbVar14 = pbVar14 + uVar15;
        }
        puStack_48 = (undefined8 *)FUN_1403a2a70(plStack_58,pbVar14);
        fVar2 = DAT_140492790;
        uVar15 = 0;
        if (param_3 != 0) {
          piStack_50 = param_6;
          plStack_40 = (longlong *)(ulonglong)param_7;
          do {
            uVar12 = *(uint *)(lVar6 + (ulonglong)(*param_4 & 0xff) * 4);
            auStack_68[0] = 0xffffffff;
            if ((uVar12 == 0xffffffff) || (((uVar12 >> 8 ^ *param_4) & 0xffffff00) != 0)) {
              auStack_68[0] = *param_4;
              if (auStack_68[0] < (uint)piVar5[1]) {
                auStack_60[0] = *piVar5 - 1U;
                puVar10 = auStack_68;
                if (*piVar5 - 1U < auStack_68[0]) {
                  puVar10 = auStack_60;
                }
                puVar16 = &DAT_14045dde0;
                if (*(undefined8 **)(piVar5 + 6) != (undefined8 *)0x0) {
                  puVar16 = *(undefined8 **)(piVar5 + 6);
                }
                uVar12 = (uint)*(byte *)(puVar16[2] + (ulonglong)*puVar10 * 4) * 0x100 +
                         (uint)*(byte *)(puVar16[2] + 1 + (ulonglong)*puVar10 * 4);
              }
              else if (piVar5[2] == 0) {
                uVar12 = piVar5[4];
              }
              else {
                uVar12 = 0;
              }
              puVar16 = &DAT_14045dde0;
              if (*(undefined8 **)(piVar5 + 8) != (undefined8 *)0x0) {
                puVar16 = *(undefined8 **)(piVar5 + 8);
              }
              if (*(uint *)(puVar16 + 3) < 0x14) {
                puVar16 = &DAT_14045dde0;
              }
              else {
                puVar16 = (undefined8 *)puVar16[2];
              }
              uVar13 = (uint)*(byte *)((longlong)puVar16 + 9) * 0x10000 +
                       (uint)*(byte *)((longlong)puVar16 + 10) * 0x100 +
                       (uint)*(byte *)(puVar16 + 1) * 0x1000000 +
                       (uint)*(byte *)((longlong)puVar16 + 0xb);
              if (uVar13 == 0) {
                puVar11 = &DAT_14045dde0;
              }
              else {
                puVar11 = (undefined8 *)((ulonglong)uVar13 + (longlong)puVar16);
              }
              uVar4 = FUN_1403eb0c0(puVar11,auStack_68[0]);
              uVar13 = (uint)*(byte *)((longlong)puVar16 + 5) * 0x10000 +
                       (uint)*(byte *)((longlong)puVar16 + 6) * 0x100 +
                       (uint)*(byte *)((longlong)puVar16 + 4) * 0x1000000 +
                       (uint)*(byte *)((longlong)puVar16 + 7);
              if (uVar13 == 0) {
                puVar16 = &DAT_14045dde0;
              }
              else {
                puVar16 = (undefined8 *)((ulonglong)uVar13 + (longlong)puVar16);
              }
              fVar20 = (float)FUN_1403c7530(puVar16,uVar4,*(undefined8 *)(param_1 + 0x80),
                                            *(undefined4 *)(param_1 + 0x7c),puStack_48);
              fVar21 = (float)FUN_14041a690(fVar20 + fVar2);
              uVar13 = *param_4;
              fVar20 = 0.0;
              if (0.0 <= fVar21 + (float)uVar12) {
                fVar20 = fVar21 + (float)uVar12;
              }
              uVar17 = (ulonglong)fVar20;
              if ((uVar13 < 0x1000000) && ((uVar17 & 0xffff0000) == 0)) {
                *(uint *)(lVar6 + (ulonglong)(uVar13 & 0xff) * 4) =
                     (uVar13 & 0xffff00) << 8 | (uint)uVar17;
              }
            }
            else {
              uVar17 = (ulonglong)(uVar12 & 0xffff);
            }
            *piStack_50 = (int)((ulonglong)
                                ((longlong)(short)uVar17 * *(longlong *)(param_1 + 0x58) + 0x8000)
                               >> 0x10);
            piStack_50 = (int *)((longlong)piStack_50 + (longlong)plStack_40);
            param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
            uVar15 = uVar15 + 1;
            plVar18 = plStack_58;
          } while (uVar15 < param_3);
        }
        if (puStack_48 != (undefined8 *)0x0) {
          LOCK();
          bVar19 = plVar18[1] == 0;
          if (bVar19) {
            plVar18[1] = (longlong)puStack_48;
          }
          UNLOCK();
          if ((!bVar19) && (puStack_48 != &DAT_14045dde0)) {
            func_0x0001402bf8e0(puStack_48);
          }
        }
        LOCK();
        piVar5 = (int *)*plVar18;
        bVar19 = piVar5 == (int *)0x0;
        if (bVar19) {
          *plVar18 = lVar6;
          piVar5 = (int *)0x0;
        }
        UNLOCK();
joined_r0x0001403d5a92:
        if (bVar19) {
          return piVar5;
        }
        piVar5 = (int *)func_0x0001402bf8e0(lVar6);
        return piVar5;
      }
      uVar7 = FUN_1403c5370(lVar8 + 0xa8);
      cVar3 = FUN_1403d0c50(uVar7);
      if (cVar3 == '\0') {
        LOCK();
        piVar9 = (int *)*plStack_58;
        bVar19 = piVar9 == (int *)0x0;
        if (bVar19) {
          *plStack_58 = lVar6;
          piVar9 = (int *)0x0;
        }
        UNLOCK();
      }
      else {
        puVar16 = (undefined8 *)FUN_1403c52c0(lVar8 + 0x78);
        puStack_48 = puVar16;
        lVar8 = func_0x0001403a2a20(puVar16);
        if (lVar8 != 0) {
          plStack_40 = param_2 + 8;
          puVar11 = (undefined8 *)func_0x0001403a2970(plStack_40,uVar7);
          uVar15 = 0;
          if (param_3 != 0) {
            do {
              uVar12 = *(uint *)(lVar6 + (ulonglong)(*param_4 & 0xff) * 4);
              if ((uVar12 == 0xffffffff) || (((uVar12 >> 8 ^ *param_4) & 0xffffff00) != 0)) {
                uVar12 = FUN_1403c5f20(puStack_48,*param_4,param_1,0,lVar8,puVar11);
                uVar13 = *param_4;
                if ((uVar13 < 0x1000000) && ((uVar12 & 0xffff0000) == 0)) {
                  *(uint *)(lVar6 + (ulonglong)(uVar13 & 0xff) * 4) =
                       (uVar13 & 0xffff00) << 8 | uVar12;
                }
              }
              else {
                uVar12 = uVar12 & 0xffff;
              }
              uVar15 = uVar15 + 1;
              *param_6 = (int)((ulonglong)
                               ((longlong)(short)uVar12 * *(longlong *)(param_1 + 0x58) + 0x8000) >>
                              0x10);
              param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
              param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
              puVar16 = puStack_48;
            } while (uVar15 < param_3);
          }
          if (puVar11 != (undefined8 *)0x0) {
            LOCK();
            lVar1 = *plStack_40;
            if (lVar1 == 0) {
              *plStack_40 = (longlong)puVar11;
            }
            UNLOCK();
            if ((lVar1 != 0) && (puVar11 != &DAT_14045dde0)) {
              func_0x0001402bf8e0(puVar11);
            }
          }
          LOCK();
          bVar19 = puVar16[6] == 0;
          if (bVar19) {
            puVar16[6] = lVar8;
          }
          UNLOCK();
          if (!bVar19) {
            FUN_1403971e0(lVar8);
            func_0x0001402bf8e0(lVar8);
          }
          LOCK();
          piVar5 = (int *)*plStack_58;
          bVar19 = piVar5 == (int *)0x0;
          if (bVar19) {
            *plStack_58 = lVar6;
            piVar5 = (int *)0x0;
          }
          UNLOCK();
          goto joined_r0x0001403d5a92;
        }
        LOCK();
        piVar9 = (int *)*plStack_58;
        bVar19 = piVar9 == (int *)0x0;
        if (bVar19) {
          *plStack_58 = lVar6;
          piVar9 = (int *)0x0;
        }
        UNLOCK();
      }
      if (!bVar19) {
        piVar9 = (int *)func_0x0001402bf8e0(lVar6);
      }
    }
  }
  uVar15 = 0;
  if (param_3 != 0) {
    do {
      piVar9 = (int *)FUN_1403c60c0(piVar5,*param_4);
      param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
      uVar15 = uVar15 + 1;
      *param_6 = (int)((ulonglong)((longlong)(short)piVar9 * *(longlong *)(param_1 + 0x58) + 0x8000)
                      >> 0x10);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
    } while (uVar15 < param_3);
  }
  return piVar9;
}

