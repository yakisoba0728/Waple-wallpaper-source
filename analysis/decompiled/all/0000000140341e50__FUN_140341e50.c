// Function: FUN_140341e50
// Addr: 140341e50
// Size: 863 bytes


longlong FUN_140341e50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  puVar8 = (undefined1 *)FUN_14034c9e0(lVar9 + 6,param_3);
  if (puVar8 != (undefined1 *)0x0) {
    uVar17 = CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]);
    uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar8[4],puVar8[5]),puVar8[6]),puVar8[7]);
    if (uVar17 != 0) {
      puVar8 = (undefined1 *)((ulonglong)uVar17 + lVar9);
      if (uVar10 != 0) {
        puVar21 = (undefined1 *)((ulonglong)uVar10 + lVar9);
        uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar21,puVar21[1]),puVar21[2]),puVar21[3]);
        iVar6 = FUN_14034c920(puVar8);
        if (uVar10 != 0) {
          if (iVar6 == 0) {
            lVar9 = FUN_14034cb90(param_1,puVar21);
            return lVar9;
          }
          uVar1 = puVar8[2];
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar8[3];
          iVar6 = FUN_14034c970(param_1,iVar6 + 1 + uVar10);
          if (iVar6 != 0) {
            return 0;
          }
          uVar17 = 1;
          lVar9 = *(longlong *)(param_1 + 0x30);
          puVar13 = puVar21 + 9;
          uVar15 = (uint)(byte)puVar8[7];
          uVar14 = 1;
          uVar20 = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),uVar4);
          puVar22 = puVar8 + 8;
          uVar18 = (uint)CONCAT21(CONCAT11(puVar8[4],puVar8[5]),puVar8[6]);
          uVar19 = (uint)CONCAT21(CONCAT11(puVar21[4],puVar21[5]),puVar21[6]);
          iVar6 = 0;
          do {
            while (uVar19 <= uVar18 + uVar15) {
              if (uVar19 < uVar18) {
                lVar11 = (longlong)iVar6;
                iVar6 = iVar6 + 1;
                *(uint *)(lVar9 + lVar11 * 4) = uVar19;
              }
              uVar14 = uVar14 + 1;
              if (uVar10 < uVar14) {
                if (uVar17 <= uVar20) {
                  uVar10 = 0;
                  do {
                    lVar11 = (longlong)iVar6;
                    iVar7 = uVar10 + uVar18;
                    iVar6 = iVar6 + 1;
                    uVar10 = uVar10 + 1;
                    *(int *)(lVar9 + lVar11 * 4) = iVar7;
                  } while (uVar10 <= uVar15);
                  for (; uVar17 < uVar20; uVar17 = uVar17 + 1) {
                    uVar1 = *puVar22;
                    uVar2 = puVar22[1];
                    bVar5 = puVar22[3];
                    uVar3 = puVar22[2];
                    uVar10 = 0;
                    do {
                      lVar11 = (longlong)iVar6;
                      iVar7 = uVar10 + CONCAT21(CONCAT11(uVar1,uVar2),uVar3);
                      iVar6 = iVar6 + 1;
                      uVar10 = uVar10 + 1;
                      *(int *)(lVar9 + lVar11 * 4) = iVar7;
                    } while (uVar10 <= bVar5);
                    puVar22 = puVar22 + 4;
                  }
                }
LAB_14034217c:
                *(undefined4 *)(lVar9 + (longlong)iVar6 * 4) = 0;
                return lVar9;
              }
              puVar8 = puVar13 + 1;
              uVar1 = *puVar13;
              puVar21 = puVar13 + 2;
              puVar13 = puVar13 + 5;
              uVar19 = (uint)CONCAT21(CONCAT11(uVar1,*puVar8),*puVar21);
            }
            uVar16 = 0;
            do {
              iVar7 = iVar6;
              iVar12 = uVar16 + uVar18;
              iVar6 = iVar7 + 1;
              uVar16 = uVar16 + 1;
              *(int *)(lVar9 + (longlong)iVar7 * 4) = iVar12;
            } while (uVar16 <= uVar15);
            uVar17 = uVar17 + 1;
            if (uVar20 < uVar17) {
              if (uVar14 <= uVar10) {
                lVar11 = (longlong)iVar6;
                iVar6 = iVar7 + 2;
                *(uint *)(lVar9 + lVar11 * 4) = uVar19;
                for (; uVar14 < uVar10; uVar14 = uVar14 + 1) {
                  lVar11 = (longlong)iVar6;
                  iVar6 = iVar6 + 1;
                  *(uint *)(lVar9 + lVar11 * 4) =
                       (uint)CONCAT21(CONCAT11(*puVar13,puVar13[1]),puVar13[2]);
                  puVar13 = puVar13 + 5;
                }
              }
              goto LAB_14034217c;
            }
            uVar15 = (uint)(byte)puVar22[3];
            uVar18 = (uint)CONCAT21(CONCAT11(*puVar22,puVar22[1]),puVar22[2]);
            puVar22 = puVar22 + 4;
          } while( true );
        }
      }
      lVar9 = FUN_14034ca80(param_1,puVar8,param_2);
      return lVar9;
    }
    if (uVar10 != 0) {
      lVar9 = FUN_14034cb90(param_1,(ulonglong)uVar10 + lVar9,param_2);
      return lVar9;
    }
  }
  return 0;
}

