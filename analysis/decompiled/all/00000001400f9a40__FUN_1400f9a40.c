// Function: FUN_1400f9a40
// Addr: 1400f9a40
// Size: 444 bytes


undefined4 * FUN_1400f9a40(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  lVar7 = *param_1;
  lVar12 = (param_1[1] - lVar7 >> 3) * 0x6db6db6db6db6db7;
  if (lVar12 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar6 = (param_1[2] - lVar7 >> 3) * 0x6db6db6db6db6db7;
  uVar5 = 0x492492492492492 - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar5 = lVar12 + 1;
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar5;
    if (uVar5 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 < 0x492492492492493) {
      uVar6 = uVar8 * 0x38;
      if (uVar6 == 0) {
        puVar13 = (undefined4 *)0x0;
        puVar10 = auStack_38;
      }
      else if (uVar6 < 0x1000) {
        puVar13 = (undefined4 *)FUN_14028af20();
      }
      else {
        if (uVar6 + 0x27 <= uVar6) goto LAB_1400f9bf8;
        lVar12 = FUN_14028af20(uVar6 + 0x27);
        if (lVar12 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar12 = (*pcVar1)(5);
          puVar9 = auStack_30;
        }
        puVar13 = (undefined4 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar13 + -2) = lVar12;
        puVar10 = puVar9;
      }
      puVar11 = puVar13 + ((param_2 - lVar7) / 0x38) * 0xe;
      *puVar11 = *param_3;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      uVar2 = param_3[3];
      uVar3 = param_3[4];
      uVar4 = param_3[5];
      puVar11[2] = param_3[2];
      puVar11[3] = uVar2;
      puVar11[4] = uVar3;
      puVar11[5] = uVar4;
      uVar2 = param_3[7];
      uVar3 = param_3[8];
      uVar4 = param_3[9];
      puVar11[6] = param_3[6];
      puVar11[7] = uVar2;
      puVar11[8] = uVar3;
      puVar11[9] = uVar4;
      *(undefined8 *)(param_3 + 6) = 0;
      *(undefined8 *)(param_3 + 8) = 0xf;
      *(undefined1 *)(param_3 + 2) = 0;
      puVar11[10] = param_3[10];
      *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(param_3 + 0xb);
      puVar11[0xc] = param_3[0xc];
      lVar7 = param_1[1];
      lVar12 = *param_1;
      puVar14 = puVar13;
      if (param_2 != lVar7) {
        *(undefined8 *)(puVar10 + -8) = 0x1400f9bb5;
        FUN_1400fa010(lVar12,param_2,puVar13);
        lVar7 = param_1[1];
        puVar13 = puVar11 + 0xe;
        lVar12 = param_2;
      }
      *(undefined8 *)(puVar10 + -8) = 0x1400f9bc5;
      FUN_1400fa010(lVar12,lVar7,puVar13);
      *(undefined8 *)(puVar10 + -8) = 0x1400f9bd6;
      FUN_1400fa080(param_1,puVar14,uVar5,uVar8);
      return puVar11;
    }
  }
LAB_1400f9bf8:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

