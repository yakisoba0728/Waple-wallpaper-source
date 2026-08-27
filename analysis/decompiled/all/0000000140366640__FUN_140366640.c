// Function: FUN_140366640
// Addr: 140366640
// Size: 977 bytes


ulonglong * FUN_140366640(ulonglong *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  puVar8 = param_3 + 7;
  if (param_2 < param_3) {
    uVar13 = *param_3;
    while( true ) {
      uVar1 = param_3[-7];
      puVar11 = param_3 + -7;
      if (uVar1 == uVar13) {
        uVar7 = param_3[1];
        uVar2 = param_3[-6];
        if (uVar2 < uVar7) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar7 < uVar2);
        }
      }
      else {
        uVar7 = 1;
        if (uVar1 < uVar13) {
          uVar7 = 0xffffffff;
        }
      }
      if ((int)uVar7 < 0) break;
      if (uVar13 == uVar1) {
        uVar13 = param_3[-6];
        uVar7 = param_3[1];
        if (uVar7 < uVar13) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar13 < uVar7);
        }
      }
      else {
        uVar7 = 1;
        if (uVar13 < uVar1) {
          uVar7 = 0xffffffff;
        }
      }
      if (((int)uVar7 < 0) || (param_3 = puVar11, uVar13 = uVar1, puVar11 <= param_2)) break;
    }
  }
  puVar9 = puVar8;
  puVar11 = param_3;
  if (puVar8 < param_4) {
    uVar13 = *param_3;
    while( true ) {
      uVar1 = *puVar8;
      if (uVar1 == uVar13) {
        uVar7 = puVar8[1];
        if (uVar7 < param_3[1]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(param_3[1] < uVar7);
        }
      }
      else {
        uVar7 = 1;
        if (uVar1 < uVar13) {
          uVar7 = 0xffffffff;
        }
      }
      puVar9 = puVar8;
      if ((int)uVar7 < 0) break;
      if (uVar13 == uVar1) {
        uVar1 = puVar8[1];
        if (param_3[1] < uVar1) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar1 < param_3[1]);
        }
      }
      else {
        uVar7 = 1;
        if (uVar13 < uVar1) {
          uVar7 = 0xffffffff;
        }
      }
      if (((int)uVar7 < 0) || (puVar8 = puVar8 + 7, puVar9 = puVar8, param_4 <= puVar8)) break;
    }
  }
joined_r0x000140366765:
  do {
    puVar12 = param_3;
    if (param_4 <= puVar8) {
joined_r0x00014036681b:
      while (param_3 = puVar12, puVar10 = puVar11, param_2 < puVar10) {
        uVar13 = puVar10[-7];
        puVar11 = puVar10 + -7;
        uVar1 = *param_3;
        if (uVar13 == uVar1) {
          uVar7 = param_3[1];
          if (puVar10[-6] < uVar7) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(uVar7 < puVar10[-6]);
          }
        }
        else {
          uVar7 = 1;
          if (uVar13 < uVar1) {
            uVar7 = 0xffffffff;
          }
        }
        puVar12 = param_3;
        if (-1 < (int)uVar7) {
          if (uVar1 == uVar13) {
            uVar13 = param_3[1];
            if (uVar13 < puVar10[-6]) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (uint)(puVar10[-6] < uVar13);
            }
          }
          else {
            uVar7 = 1;
            if (uVar1 < uVar13) {
              uVar7 = 0xffffffff;
            }
          }
          if ((int)uVar7 < 0) break;
          puVar12 = param_3 + -7;
          if (puVar12 != puVar11) {
            uVar3 = *(undefined8 *)puVar12;
            uVar4 = *(undefined8 *)(param_3 + -4);
            uVar5 = *(undefined8 *)(param_3 + -2);
            uStack_60 = (undefined4)*(undefined8 *)(param_3 + -5);
            uVar6 = *(undefined8 *)(puVar10 + -5);
            uStack_5c = (undefined4)uVar4;
            *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
            *(undefined8 *)(param_3 + -5) = uVar6;
            uVar6 = *(undefined8 *)(puVar10 + -2);
            *(undefined8 *)(param_3 + -4) = *(undefined8 *)(puVar10 + -4);
            *(undefined8 *)(param_3 + -2) = uVar6;
            *(undefined8 *)puVar11 = uVar3;
            *(ulonglong *)(puVar10 + -5) = CONCAT44(uStack_5c,uStack_60);
            *(undefined8 *)(puVar10 + -4) = uVar4;
            *(undefined8 *)(puVar10 + -2) = uVar5;
          }
        }
      }
      if (puVar10 == param_2) {
        if (puVar8 == param_4) {
          *param_1 = (ulonglong)param_3;
          param_1[1] = (ulonglong)puVar9;
          return param_1;
        }
        if (puVar9 != puVar8) {
          uVar3 = *(undefined8 *)param_3;
          uVar4 = *(undefined8 *)(param_3 + 3);
          uVar5 = *(undefined8 *)(param_3 + 5);
          uStack_60 = (undefined4)*(undefined8 *)(param_3 + 2);
          uVar6 = *(undefined8 *)(puVar9 + 2);
          uStack_5c = (undefined4)uVar4;
          *(undefined8 *)param_3 = *(undefined8 *)puVar9;
          *(undefined8 *)(param_3 + 2) = uVar6;
          uVar6 = *(undefined8 *)(puVar9 + 5);
          *(undefined8 *)(param_3 + 3) = *(undefined8 *)(puVar9 + 3);
          *(undefined8 *)(param_3 + 5) = uVar6;
          *(undefined8 *)puVar9 = uVar3;
          *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_5c,uStack_60);
          *(undefined8 *)(puVar9 + 3) = uVar4;
          *(undefined8 *)(puVar9 + 5) = uVar5;
        }
        uVar3 = *(undefined8 *)param_3;
        uVar4 = *(undefined8 *)(param_3 + 3);
        uVar5 = *(undefined8 *)(param_3 + 5);
        uStack_60 = (undefined4)*(undefined8 *)(param_3 + 2);
        uVar6 = *(undefined8 *)(puVar8 + 2);
        uStack_5c = (undefined4)uVar4;
        *(undefined8 *)param_3 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_3 + 2) = uVar6;
        uVar6 = *(undefined8 *)(puVar8 + 5);
        *(undefined8 *)(param_3 + 3) = *(undefined8 *)(puVar8 + 3);
        *(undefined8 *)(param_3 + 5) = uVar6;
        *(undefined8 *)puVar8 = uVar3;
        *(ulonglong *)(puVar8 + 2) = CONCAT44(uStack_5c,uStack_60);
        *(undefined8 *)(puVar8 + 3) = uVar4;
        *(undefined8 *)(puVar8 + 5) = uVar5;
        puVar8 = puVar8 + 7;
        puVar9 = puVar9 + 7;
        param_3 = param_3 + 7;
        puVar11 = puVar10;
      }
      else {
        puVar11 = puVar10 + -7;
        if (puVar8 == param_4) {
          puVar12 = param_3 + -7;
          if (puVar11 != puVar12) {
            uVar3 = *(undefined8 *)puVar11;
            uVar4 = *(undefined8 *)(puVar10 + -4);
            uVar5 = *(undefined8 *)(puVar10 + -2);
            uStack_60 = (undefined4)*(undefined8 *)(puVar10 + -5);
            uVar6 = *(undefined8 *)(param_3 + -5);
            uStack_5c = (undefined4)uVar4;
            *(undefined8 *)puVar11 = *(undefined8 *)puVar12;
            *(undefined8 *)(puVar10 + -5) = uVar6;
            uVar6 = *(undefined8 *)(param_3 + -2);
            *(undefined8 *)(puVar10 + -4) = *(undefined8 *)(param_3 + -4);
            *(undefined8 *)(puVar10 + -2) = uVar6;
            *(undefined8 *)puVar12 = uVar3;
            *(ulonglong *)(param_3 + -5) = CONCAT44(uStack_5c,uStack_60);
            *(undefined8 *)(param_3 + -4) = uVar4;
            *(undefined8 *)(param_3 + -2) = uVar5;
          }
          uVar3 = *(undefined8 *)puVar12;
          puVar10 = puVar9 + -7;
          uVar4 = *(undefined8 *)(param_3 + -4);
          uVar5 = *(undefined8 *)(param_3 + -2);
          uStack_60 = (undefined4)*(undefined8 *)(param_3 + -5);
          uVar6 = *(undefined8 *)(puVar9 + -5);
          uStack_5c = (undefined4)uVar4;
          *(undefined8 *)puVar12 = *(undefined8 *)puVar10;
          *(undefined8 *)(param_3 + -5) = uVar6;
          uVar6 = *(undefined8 *)(puVar9 + -2);
          *(undefined8 *)(param_3 + -4) = *(undefined8 *)(puVar9 + -4);
          *(undefined8 *)(param_3 + -2) = uVar6;
          *(undefined8 *)puVar10 = uVar3;
          *(ulonglong *)(puVar9 + -5) = CONCAT44(uStack_5c,uStack_60);
          *(undefined8 *)(puVar9 + -4) = uVar4;
          *(undefined8 *)(puVar9 + -2) = uVar5;
          puVar9 = puVar10;
          param_3 = puVar12;
        }
        else {
          uVar3 = *(undefined8 *)puVar8;
          uVar4 = *(undefined8 *)(puVar8 + 3);
          uVar5 = *(undefined8 *)(puVar8 + 5);
          uStack_60 = (undefined4)*(undefined8 *)(puVar8 + 2);
          uVar6 = *(undefined8 *)(puVar10 + -5);
          uStack_5c = (undefined4)uVar4;
          *(undefined8 *)puVar8 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = uVar6;
          uVar6 = *(undefined8 *)(puVar10 + -2);
          *(undefined8 *)(puVar8 + 3) = *(undefined8 *)(puVar10 + -4);
          *(undefined8 *)(puVar8 + 5) = uVar6;
          puVar8 = puVar8 + 7;
          *(undefined8 *)puVar11 = uVar3;
          *(ulonglong *)(puVar10 + -5) = CONCAT44(uStack_5c,uStack_60);
          *(undefined8 *)(puVar10 + -4) = uVar4;
          *(undefined8 *)(puVar10 + -2) = uVar5;
        }
      }
      goto joined_r0x000140366765;
    }
    uVar13 = *puVar8;
    uVar1 = *param_3;
    if (uVar1 == uVar13) {
      uVar7 = puVar8[1];
      uVar2 = param_3[1];
      if (uVar2 < uVar7) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)(uVar7 < uVar2);
      }
    }
    else {
      uVar7 = 1;
      if (uVar1 < uVar13) {
        uVar7 = 0xffffffff;
      }
    }
    if (-1 < (int)uVar7) {
      if (uVar13 == uVar1) {
        uVar13 = param_3[1];
        uVar1 = puVar8[1];
        if (uVar1 < uVar13) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar13 < uVar1);
        }
      }
      else {
        uVar7 = 1;
        if (uVar13 < uVar1) {
          uVar7 = 0xffffffff;
        }
      }
      if ((int)uVar7 < 0) goto joined_r0x00014036681b;
      if (puVar9 != puVar8) {
        uVar3 = *(undefined8 *)puVar9;
        uVar4 = *(undefined8 *)(puVar9 + 3);
        uVar5 = *(undefined8 *)(puVar9 + 5);
        uStack_60 = (undefined4)*(undefined8 *)(puVar9 + 2);
        uVar6 = *(undefined8 *)(puVar8 + 2);
        uStack_5c = (undefined4)uVar4;
        *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar9 + 2) = uVar6;
        uVar6 = *(undefined8 *)(puVar8 + 5);
        *(undefined8 *)(puVar9 + 3) = *(undefined8 *)(puVar8 + 3);
        *(undefined8 *)(puVar9 + 5) = uVar6;
        *(undefined8 *)puVar8 = uVar3;
        *(ulonglong *)(puVar8 + 2) = CONCAT44(uStack_5c,uStack_60);
        *(undefined8 *)(puVar8 + 3) = uVar4;
        *(undefined8 *)(puVar8 + 5) = uVar5;
      }
      puVar9 = puVar9 + 7;
    }
    puVar8 = puVar8 + 7;
  } while( true );
}

