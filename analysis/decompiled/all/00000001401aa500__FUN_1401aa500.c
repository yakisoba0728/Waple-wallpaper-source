// Function: FUN_1401aa500
// Addr: 1401aa500
// Size: 922 bytes


undefined8 * FUN_1401aa500(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar9 = auStack_58;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)param_1[2]) {
    lVar2 = (longlong)puVar3 - *param_1;
    lVar2 = lVar2 / 6 + (lVar2 >> 0x3f);
    lVar2 = (lVar2 >> 3) - (lVar2 >> 0x3f);
    if (lVar2 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_140013120();
    }
    uVar8 = (param_1[2] - *param_1 >> 4) * -0x5555555555555555;
    uVar4 = 0x555555555555555 - (uVar8 >> 1);
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = (uVar8 >> 1) + uVar8;
      uVar4 = lVar2 + 1U;
      if (lVar2 + 1U <= uVar8) {
        uVar4 = uVar8;
      }
      if (uVar4 < 0x555555555555556) {
        puVar10 = (undefined8 *)0x0;
        uVar4 = uVar4 * 0x30;
        if (uVar4 == 0) {
          puVar11 = (undefined8 *)(lVar2 * 0x30);
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          if (param_2[1] - *param_2 == 0) {
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            if (param_2[4] - param_2[3] == 0) {
              puVar7 = (undefined8 *)param_1[1];
              puVar5 = (undefined8 *)*param_1;
              if (puVar3 != puVar7) {
                FUN_1401aae00((undefined8 *)*param_1,puVar3,0);
                puVar7 = (undefined8 *)param_1[1];
                puVar10 = puVar11 + 6;
                puVar5 = puVar3;
              }
              FUN_1401aae00(puVar5,puVar7,puVar10);
              lVar2 = *param_1;
              if (lVar2 != 0) {
                lVar6 = param_1[1];
                for (; lVar2 != lVar6; lVar2 = lVar2 + 0x30) {
                  func_0x000140031c50(lVar2 + 0x18);
                  func_0x00014017c490(lVar2);
                }
                lVar2 = *param_1;
                lVar6 = lVar2;
                puVar9 = auStack_58;
                if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 4) << 4)) &&
                   (lVar6 = *(longlong *)(lVar2 + -8), puVar9 = auStack_58,
                   0x1f < (lVar2 - lVar6) - 8U)) {
                  lVar6 = 5;
                  pcVar1 = (code *)swi(0x29);
                  (*pcVar1)(5);
                  puVar9 = auStack_50;
                }
                *(undefined8 *)(puVar9 + -8) = 0x1401aa9c0;
                func_0x00014028b040(lVar6);
              }
              lVar2 = *(longlong *)(puVar9 + 0x70);
              *param_1 = 0;
              param_1[1] = lVar2 * 0x30;
              param_1[2] = 0;
              return puVar11;
            }
            uVar8 = param_2[4] - param_2[3] >> 2;
            if (0x3fffffffffffffff < uVar8) goto LAB_1401aa9f7;
            uVar8 = uVar8 * 4;
            if (uVar8 == 0) {
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11[5] = 0;
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(puVar11[3],param_2[3],param_2[4] - param_2[3]);
            }
            if (uVar8 < 0x1000) {
              puVar3 = (undefined8 *)func_0x00014028aff0(uVar8);
              return puVar3;
            }
            if (uVar8 < uVar8 + 0x27) {
              puVar3 = (undefined8 *)func_0x00014028aff0();
              return puVar3;
            }
          }
          else {
            lVar2 = param_2[1] - *param_2 >> 2;
            if (0x924924924924924 < (ulonglong)(lVar2 * 0x6db6db6db6db6db7)) goto LAB_1401aaa09;
            uVar8 = lVar2 * 4;
            if (uVar8 == 0) {
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(0,*param_2,param_2[1] - *param_2);
            }
            if (uVar8 < 0x1000) {
              puVar3 = (undefined8 *)func_0x00014028aff0(uVar8);
              return puVar3;
            }
            if (uVar8 < uVar8 + 0x27) {
              puVar3 = (undefined8 *)func_0x00014028aff0();
              return puVar3;
            }
          }
        }
        else {
          if (uVar4 < 0x1000) {
            puVar3 = (undefined8 *)func_0x00014028aff0(uVar4);
            return puVar3;
          }
          if (uVar4 < uVar4 + 0x27) {
            puVar3 = (undefined8 *)func_0x00014028aff0();
            return puVar3;
          }
        }
      }
    }
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    if (param_2[1] - *param_2 == 0) {
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      if (param_2[4] - param_2[3] == 0) {
        puVar3 = (undefined8 *)param_1[1];
        param_1[1] = (longlong)(puVar3 + 6);
        return puVar3;
      }
      uVar8 = param_2[4] - param_2[3] >> 2;
      if (0x3fffffffffffffff < uVar8) {
LAB_1401aa9f7:
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar8 = uVar8 * 4;
      if (uVar8 == 0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(puVar3[3],param_2[3],param_2[4] - param_2[3]);
      }
      if (uVar8 < 0x1000) {
        puVar3 = (undefined8 *)func_0x00014028aff0(uVar8);
        return puVar3;
      }
      if (uVar8 < uVar8 + 0x27) {
        puVar3 = (undefined8 *)func_0x00014028aff0();
        return puVar3;
      }
    }
    else {
      lVar2 = param_2[1] - *param_2 >> 2;
      if (0x924924924924924 < (ulonglong)(lVar2 * 0x6db6db6db6db6db7)) {
LAB_1401aaa09:
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar8 = lVar2 * 4;
      if (uVar8 == 0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,*param_2,param_2[1] - *param_2);
      }
      if (uVar8 < 0x1000) {
        puVar3 = (undefined8 *)func_0x00014028aff0(uVar8);
        return puVar3;
      }
      if (uVar8 < uVar8 + 0x27) {
        puVar3 = (undefined8 *)func_0x00014028aff0();
        return puVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

