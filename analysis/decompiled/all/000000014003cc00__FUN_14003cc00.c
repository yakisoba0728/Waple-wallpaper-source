// Function: FUN_14003cc00
// Addr: 14003cc00
// Size: 1089 bytes


void FUN_14003cc00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 local_48 [32];
  
  FUN_14003ded0(&DAT_1404e8c50);
  if (DAT_1404e8c38 != DAT_1404e8c40) {
    DAT_1404e8c40 = DAT_1404e8c38;
  }
  uVar15 = 0;
  iVar4 = (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f;
  if (0 < iVar4) {
    do {
      puVar8 = DAT_1404e8c40;
      lVar13 = uVar15 * 0x88 + DAT_1404e8ec8;
      if (*(longlong *)(lVar13 + 0x78) == 0) {
        if (DAT_1404e8c40 == DAT_1404e8c48) {
          uVar10 = (longlong)DAT_1404e8c40 - (longlong)DAT_1404e8c38;
          lVar13 = (longlong)uVar10 >> 4;
          if (lVar13 == 0xfffffffffffffff) {
LAB_14003d037:
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar6 = (longlong)DAT_1404e8c48 - (longlong)DAT_1404e8c38 >> 4;
          if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_14003d03d:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          uVar9 = lVar13 + 1;
          uVar6 = (uVar6 >> 1) + uVar6;
          uVar12 = uVar9;
          if (uVar9 <= uVar6) {
            uVar12 = uVar6;
          }
          if (0xfffffffffffffff < uVar12) goto LAB_14003d03d;
          uVar6 = uVar12 * 0x10;
          if (uVar6 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          else if (uVar6 < 0x1000) {
            puVar11 = (undefined8 *)FUN_14028af20(uVar6);
          }
          else {
            if (uVar6 + 0x27 <= uVar6) goto LAB_14003d03d;
            lVar13 = FUN_14028af20();
            if (lVar13 == 0) goto LAB_14003cfff;
            puVar11 = (undefined8 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
            puVar11[-1] = lVar13;
          }
          uVar10 = uVar10 & 0xfffffffffffffff0;
          puVar7 = (undefined8 *)((longlong)puVar11 + uVar10);
          *puVar7 = 0;
          puVar7[1] = 0;
          if (puVar8 == DAT_1404e8c40) {
            lVar13 = (longlong)DAT_1404e8c40 - (longlong)DAT_1404e8c38;
            puVar7 = puVar11;
            puVar8 = DAT_1404e8c38;
          }
          else {
            FUN_1404210f0(puVar11,DAT_1404e8c38,(longlong)puVar8 - (longlong)DAT_1404e8c38);
            lVar13 = (longlong)DAT_1404e8c40 - (longlong)puVar8;
            puVar7 = (undefined8 *)(uVar10 + 0x10 + (longlong)puVar11);
          }
          FUN_1404210f0(puVar7,puVar8,lVar13);
          if (DAT_1404e8c38 != (undefined8 *)0x0) {
            uVar10 = (longlong)DAT_1404e8c48 - (longlong)DAT_1404e8c38 & 0xfffffffffffffff0;
            puVar8 = DAT_1404e8c38;
            if (0xfff < uVar10) {
              if (0x1f < (ulonglong)((longlong)DAT_1404e8c38 + (-8 - (longlong)DAT_1404e8c38[-1])))
              {
LAB_14003cfff:
                pcVar3 = (code *)swi(0x29);
                (*pcVar3)(5);
                return;
              }
              uVar10 = uVar10 + 0x27;
              puVar8 = (undefined8 *)DAT_1404e8c38[-1];
            }
            thunk_FUN_14028af80(puVar8,uVar10);
          }
          DAT_1404e8c48 = puVar11 + uVar12 * 2;
          DAT_1404e8c40 = puVar11 + uVar9 * 2;
          DAT_1404e8c38 = puVar11;
        }
        else {
          *DAT_1404e8c40 = 0;
          puVar8[1] = 0;
          DAT_1404e8c40 = DAT_1404e8c40 + 2;
        }
      }
      else {
        plVar5 = (longlong *)FUN_14003dfe0(&DAT_1404e8c50,local_48,lVar13 + 0x78);
        *(int *)(*plVar5 + 0x18) = (int)uVar15;
        puVar8 = DAT_1404e8c40;
        uVar1 = *(undefined4 *)(lVar13 + 0x10);
        uVar16 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar13 + 0x10) >> 0x20) +
                          (int)((ulonglong)*(undefined8 *)(lVar13 + 8) >> 0x20),
                          (int)*(undefined8 *)(lVar13 + 0x10) + (int)*(undefined8 *)(lVar13 + 8));
        uVar2 = *(undefined4 *)(lVar13 + 0x14);
        if (DAT_1404e8c40 == DAT_1404e8c48) {
          uVar10 = (longlong)DAT_1404e8c40 - (longlong)DAT_1404e8c38;
          lVar13 = (longlong)uVar10 >> 4;
          if (lVar13 == 0xfffffffffffffff) goto LAB_14003d037;
          uVar6 = (longlong)DAT_1404e8c48 - (longlong)DAT_1404e8c38 >> 4;
          if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) goto LAB_14003d03d;
          uVar9 = lVar13 + 1;
          uVar6 = (uVar6 >> 1) + uVar6;
          uVar12 = uVar9;
          if (uVar9 <= uVar6) {
            uVar12 = uVar6;
          }
          if (0xfffffffffffffff < uVar12) goto LAB_14003d03d;
          uVar6 = uVar12 * 0x10;
          if (uVar6 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          else if (uVar6 < 0x1000) {
            puVar11 = (undefined8 *)FUN_14028af20(uVar6);
          }
          else {
            if (uVar6 + 0x27 <= uVar6) goto LAB_14003d03d;
            lVar13 = FUN_14028af20();
            if (lVar13 == 0) goto LAB_14003cfff;
            puVar11 = (undefined8 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
            puVar11[-1] = lVar13;
          }
          uVar10 = uVar10 & 0xfffffffffffffff0;
          *(undefined4 *)((longlong)puVar11 + uVar10) = uVar1;
          *(undefined4 *)((longlong)puVar11 + uVar10 + 4) = uVar2;
          *(undefined8 *)((longlong)puVar11 + uVar10 + 8) = uVar16;
          if (puVar8 == DAT_1404e8c40) {
            lVar13 = (longlong)DAT_1404e8c40 - (longlong)DAT_1404e8c38;
            puVar7 = puVar11;
            puVar8 = DAT_1404e8c38;
          }
          else {
            FUN_1404210f0(puVar11,DAT_1404e8c38,(longlong)puVar8 - (longlong)DAT_1404e8c38);
            lVar13 = (longlong)DAT_1404e8c40 - (longlong)puVar8;
            puVar7 = (undefined8 *)(uVar10 + 0x10 + (longlong)puVar11);
          }
          FUN_1404210f0(puVar7,puVar8,lVar13);
          if (DAT_1404e8c38 != (undefined8 *)0x0) {
            uVar10 = (longlong)DAT_1404e8c48 - (longlong)DAT_1404e8c38 & 0xfffffffffffffff0;
            puVar8 = DAT_1404e8c38;
            if (0xfff < uVar10) {
              if (0x1f < (ulonglong)((longlong)DAT_1404e8c38 + (-8 - (longlong)DAT_1404e8c38[-1])))
              goto LAB_14003cfff;
              uVar10 = uVar10 + 0x27;
              puVar8 = (undefined8 *)DAT_1404e8c38[-1];
            }
            thunk_FUN_14028af80(puVar8,uVar10);
          }
          DAT_1404e8c48 = puVar11 + uVar12 * 2;
          DAT_1404e8c40 = puVar11 + uVar9 * 2;
          DAT_1404e8c38 = puVar11;
        }
        else {
          *(undefined4 *)DAT_1404e8c40 = uVar1;
          *(undefined4 *)((longlong)puVar8 + 4) = uVar2;
          puVar8[1] = uVar16;
          DAT_1404e8c40 = DAT_1404e8c40 + 2;
        }
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar4);
  }
  return;
}

