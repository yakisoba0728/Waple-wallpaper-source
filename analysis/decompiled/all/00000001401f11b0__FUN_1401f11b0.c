// Function: FUN_1401f11b0
// Addr: 1401f11b0
// Size: 643 bytes


void FUN_1401f11b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  
  fVar3 = DAT_140492974;
  do {
    if (param_2 == param_3) {
      return;
    }
    puVar10 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar10 = (undefined8 *)*param_2;
    }
    uVar7 = 0;
    uVar11 = 0xcbf29ce484222325;
    if (param_2[2] != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + (longlong)puVar10);
        uVar7 = uVar7 + 1;
        uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
      } while (uVar7 < (ulonglong)param_2[2]);
    }
    FUN_1401f10d0(uVar7,&local_58,param_2,uVar11);
    if (CONCAT44(uStack_4c,uStack_50) == 0) {
      if (DAT_1404e9010 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      plVar5 = (longlong *)FUN_14028af20(0x38);
      FUN_140016fc0(plVar5 + 2,param_2);
      *(undefined4 *)(plVar5 + 6) = *(undefined4 *)(param_2 + 4);
      uVar7 = DAT_1404e9038;
      if (DAT_1404e9000 < (float)(DAT_1404e9010 + 1) / (float)DAT_1404e9038) {
        fVar13 = (float)FUN_140419fa0((float)(DAT_1404e9010 + 1) / DAT_1404e9000);
        lVar8 = 0;
        if ((fVar3 <= fVar13) && (fVar13 = fVar13 - fVar3, fVar13 < fVar3)) {
          lVar8 = -0x8000000000000000;
        }
        uVar9 = 8;
        if (8 < (ulonglong)((longlong)fVar13 + lVar8)) {
          uVar9 = (longlong)fVar13 + lVar8;
        }
        uVar12 = uVar7;
        if ((uVar7 < uVar9) && ((0x1ff < uVar7 || (uVar12 = uVar7 * 8, uVar7 * 8 < uVar9)))) {
          uVar12 = uVar9;
        }
        uVar14 = FUN_1401f17a0(uVar9,uVar12);
        puVar6 = (undefined4 *)FUN_1401f10d0(uVar14,local_48,plVar5 + 2,uVar11);
        local_58 = *puVar6;
        uStack_54 = puVar6[1];
        uStack_50 = puVar6[2];
        uStack_4c = puVar6[3];
      }
      lVar2 = CONCAT44(uStack_54,local_58);
      DAT_1404e9010 = DAT_1404e9010 + 1;
      puVar10 = *(undefined8 **)(lVar2 + 8);
      *plVar5 = lVar2;
      plVar5[1] = (longlong)puVar10;
      *puVar10 = plVar5;
      *(longlong **)(lVar2 + 8) = plVar5;
      lVar4 = DAT_1404e9018;
      uVar11 = uVar11 & DAT_1404e9030;
      lVar8 = *(longlong *)(DAT_1404e9018 + uVar11 * 0x10);
      if (lVar8 == DAT_1404e9008) {
        *(longlong **)(DAT_1404e9018 + uVar11 * 0x10) = plVar5;
LAB_1401f13e1:
        *(longlong **)(lVar4 + 8 + uVar11 * 0x10) = plVar5;
      }
      else if (lVar8 == lVar2) {
        *(longlong **)(DAT_1404e9018 + uVar11 * 0x10) = plVar5;
      }
      else if (*(undefined8 **)(DAT_1404e9018 + 8 + uVar11 * 0x10) == puVar10) goto LAB_1401f13e1;
    }
    param_2 = param_2 + 5;
  } while( true );
}

