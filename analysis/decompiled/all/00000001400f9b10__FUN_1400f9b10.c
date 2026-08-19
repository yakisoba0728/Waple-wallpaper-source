// Function: FUN_1400f9b10
// Addr: 1400f9b10
// Size: 195 bytes


undefined4 * FUN_1400f9b10(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  lVar7 = *param_1;
  lVar10 = (param_1[1] - lVar7 >> 3) * 0x6db6db6db6db6db7;
  if (lVar10 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar6 = (param_1[2] - lVar7 >> 3) * 0x6db6db6db6db6db7;
  uVar4 = 0x492492492492492 - (uVar6 >> 1);
  if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
    uVar4 = lVar10 + 1;
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar4;
    if (uVar4 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 < 0x492492492492493) {
      uVar6 = uVar8 * 0x38;
      if (uVar6 == 0) {
        puVar5 = (undefined4 *)0x0;
        puVar9 = (undefined4 *)(((param_2 - lVar7) / 0x38) * 0x38);
        *puVar9 = *param_3;
        *(undefined8 *)(puVar9 + 2) = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 0;
        *(undefined8 *)(puVar9 + 8) = 0;
        uVar1 = param_3[3];
        uVar2 = param_3[4];
        uVar3 = param_3[5];
        puVar9[2] = param_3[2];
        puVar9[3] = uVar1;
        puVar9[4] = uVar2;
        puVar9[5] = uVar3;
        uVar1 = param_3[7];
        uVar2 = param_3[8];
        uVar3 = param_3[9];
        puVar9[6] = param_3[6];
        puVar9[7] = uVar1;
        puVar9[8] = uVar2;
        puVar9[9] = uVar3;
        *(undefined8 *)(param_3 + 6) = 0;
        *(undefined8 *)(param_3 + 8) = 0xf;
        *(undefined1 *)(param_3 + 2) = 0;
        puVar9[10] = param_3[10];
        *(undefined1 *)(puVar9 + 0xb) = *(undefined1 *)(param_3 + 0xb);
        puVar9[0xc] = param_3[0xc];
        lVar7 = param_1[1];
        lVar10 = *param_1;
        puVar11 = puVar5;
        if (param_2 != lVar7) {
          func_0x0001400fa0e0(*param_1,param_2,0);
          lVar7 = param_1[1];
          puVar5 = puVar9 + 0xe;
          lVar10 = param_2;
        }
        func_0x0001400fa0e0(lVar10,lVar7,puVar5);
        func_0x0001400fa150(param_1,puVar11,uVar4,uVar8);
        return puVar9;
      }
      if (uVar6 < 0x1000) {
        puVar5 = (undefined4 *)func_0x00014028aff0();
        return puVar5;
      }
      if (uVar6 < uVar6 + 0x27) {
        puVar5 = (undefined4 *)func_0x00014028aff0(uVar6 + 0x27);
        return puVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

