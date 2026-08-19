// Function: FUN_140366af0
// Addr: 140366af0
// Size: 589 bytes


ulonglong * FUN_140366af0(ulonglong *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar11 = param_3 + 9;
  if (param_2 < param_3) {
    uVar9 = *param_3;
    do {
      uVar1 = param_3[-9];
      puVar12 = param_3 + -9;
      if ((uVar1 < uVar9) || (uVar1 != uVar9)) break;
      param_3 = puVar12;
      uVar9 = uVar1;
    } while (param_2 < puVar12);
  }
  puVar12 = puVar11;
  puVar10 = param_3;
  if (puVar11 < param_4) {
    do {
      puVar12 = puVar11;
      if ((*puVar11 < *param_3) || (*puVar11 != *param_3)) break;
      puVar11 = puVar11 + 9;
      puVar12 = puVar11;
    } while (puVar11 < param_4);
  }
joined_r0x000140366b4b:
  do {
    if (param_4 <= puVar11) {
joined_r0x000140366b9c:
      while (puVar8 = puVar10, puVar7 = param_3, puVar10 = puVar8, param_2 < puVar7) {
        param_3 = puVar7 + -9;
        if (*puVar8 <= *param_3) {
          if (*param_3 != *puVar8) break;
          puVar10 = puVar8 + -9;
          if (puVar10 != param_3) {
            uVar2 = *(undefined8 *)(puVar7 + -7);
            uVar9 = puVar8[-1];
            uVar3 = *(undefined8 *)puVar10;
            uVar4 = *(undefined8 *)(puVar8 + -7);
            uVar5 = *(undefined8 *)(puVar8 + -5);
            uVar6 = *(undefined8 *)(puVar8 + -3);
            *(undefined8 *)puVar10 = *(undefined8 *)param_3;
            *(undefined8 *)(puVar8 + -7) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + -3);
            *(undefined8 *)(puVar8 + -5) = *(undefined8 *)(puVar7 + -5);
            *(undefined8 *)(puVar8 + -3) = uVar2;
            puVar8[-1] = puVar7[-1];
            *(undefined8 *)param_3 = uVar3;
            *(undefined8 *)(puVar7 + -7) = uVar4;
            *(undefined8 *)(puVar7 + -5) = uVar5;
            *(undefined8 *)(puVar7 + -3) = uVar6;
            puVar7[-1] = uVar9;
          }
        }
      }
      if (puVar7 == param_2) {
        if (puVar11 == param_4) {
          *param_1 = (ulonglong)puVar8;
          param_1[1] = (ulonglong)puVar12;
          return param_1;
        }
        if (puVar12 != puVar11) {
          uVar2 = *(undefined8 *)(puVar12 + 2);
          uVar9 = puVar8[8];
          uVar3 = *(undefined8 *)puVar8;
          uVar4 = *(undefined8 *)(puVar8 + 2);
          uVar5 = *(undefined8 *)(puVar8 + 4);
          uVar6 = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar8 + 2) = uVar2;
          uVar2 = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar12 + 4);
          *(undefined8 *)(puVar8 + 6) = uVar2;
          puVar8[8] = puVar12[8];
          *(undefined8 *)puVar12 = uVar3;
          *(undefined8 *)(puVar12 + 2) = uVar4;
          *(undefined8 *)(puVar12 + 4) = uVar5;
          *(undefined8 *)(puVar12 + 6) = uVar6;
          puVar12[8] = uVar9;
        }
        uVar2 = *(undefined8 *)(puVar11 + 2);
        uVar9 = puVar8[8];
        uVar3 = *(undefined8 *)puVar8;
        uVar4 = *(undefined8 *)(puVar8 + 2);
        uVar5 = *(undefined8 *)(puVar8 + 4);
        uVar6 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 2) = uVar2;
        uVar2 = *(undefined8 *)(puVar11 + 6);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar11 + 4);
        *(undefined8 *)(puVar8 + 6) = uVar2;
        puVar8[8] = puVar11[8];
        *(undefined8 *)puVar11 = uVar3;
        *(undefined8 *)(puVar11 + 2) = uVar4;
        *(undefined8 *)(puVar11 + 4) = uVar5;
        *(undefined8 *)(puVar11 + 6) = uVar6;
        puVar11[8] = uVar9;
        puVar11 = puVar11 + 9;
        puVar12 = puVar12 + 9;
        param_3 = puVar7;
        puVar10 = puVar8 + 9;
      }
      else {
        param_3 = puVar7 + -9;
        if (puVar11 == param_4) {
          puVar10 = puVar8 + -9;
          if (param_3 != puVar10) {
            uVar2 = *(undefined8 *)(puVar8 + -7);
            uVar9 = puVar7[-1];
            uVar3 = *(undefined8 *)param_3;
            uVar4 = *(undefined8 *)(puVar7 + -7);
            uVar5 = *(undefined8 *)(puVar7 + -5);
            uVar6 = *(undefined8 *)(puVar7 + -3);
            *(undefined8 *)param_3 = *(undefined8 *)puVar10;
            *(undefined8 *)(puVar7 + -7) = uVar2;
            uVar2 = *(undefined8 *)(puVar8 + -3);
            *(undefined8 *)(puVar7 + -5) = *(undefined8 *)(puVar8 + -5);
            *(undefined8 *)(puVar7 + -3) = uVar2;
            puVar7[-1] = puVar8[-1];
            *(undefined8 *)puVar10 = uVar3;
            *(undefined8 *)(puVar8 + -7) = uVar4;
            *(undefined8 *)(puVar8 + -5) = uVar5;
            *(undefined8 *)(puVar8 + -3) = uVar6;
            puVar8[-1] = uVar9;
          }
          uVar2 = *(undefined8 *)(puVar12 + -7);
          uVar9 = puVar8[-1];
          uVar3 = *(undefined8 *)puVar10;
          uVar4 = *(undefined8 *)(puVar8 + -7);
          uVar5 = *(undefined8 *)(puVar8 + -5);
          uVar6 = *(undefined8 *)(puVar8 + -3);
          *(undefined8 *)puVar10 = *(undefined8 *)(puVar12 + -9);
          *(undefined8 *)(puVar8 + -7) = uVar2;
          uVar2 = *(undefined8 *)(puVar12 + -3);
          *(undefined8 *)(puVar8 + -5) = *(undefined8 *)(puVar12 + -5);
          *(undefined8 *)(puVar8 + -3) = uVar2;
          puVar8[-1] = puVar12[-1];
          *(undefined8 *)(puVar12 + -9) = uVar3;
          *(undefined8 *)(puVar12 + -7) = uVar4;
          *(undefined8 *)(puVar12 + -5) = uVar5;
          *(undefined8 *)(puVar12 + -3) = uVar6;
          puVar12[-1] = uVar9;
          puVar12 = puVar12 + -9;
        }
        else {
          uVar2 = *(undefined8 *)puVar11;
          uVar3 = *(undefined8 *)(puVar11 + 2);
          uVar9 = puVar11[8];
          uVar4 = *(undefined8 *)(puVar11 + 4);
          uVar5 = *(undefined8 *)(puVar11 + 6);
          uVar6 = *(undefined8 *)(puVar7 + -7);
          *(undefined8 *)puVar11 = *(undefined8 *)param_3;
          *(undefined8 *)(puVar11 + 2) = uVar6;
          uVar6 = *(undefined8 *)(puVar7 + -3);
          *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar7 + -5);
          *(undefined8 *)(puVar11 + 6) = uVar6;
          puVar11[8] = puVar7[-1];
          puVar11 = puVar11 + 9;
          *(undefined8 *)param_3 = uVar2;
          *(undefined8 *)(puVar7 + -7) = uVar3;
          *(undefined8 *)(puVar7 + -5) = uVar4;
          *(undefined8 *)(puVar7 + -3) = uVar5;
          puVar7[-1] = uVar9;
        }
      }
      goto joined_r0x000140366b4b;
    }
    if (*puVar11 <= *puVar10) {
      if (*puVar10 != *puVar11) goto joined_r0x000140366b9c;
      if (puVar12 != puVar11) {
        uVar2 = *(undefined8 *)(puVar11 + 2);
        uVar9 = puVar12[8];
        uVar3 = *(undefined8 *)puVar12;
        uVar4 = *(undefined8 *)(puVar12 + 2);
        uVar5 = *(undefined8 *)(puVar12 + 4);
        uVar6 = *(undefined8 *)(puVar12 + 6);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar12 + 2) = uVar2;
        uVar2 = *(undefined8 *)(puVar11 + 6);
        *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar11 + 4);
        *(undefined8 *)(puVar12 + 6) = uVar2;
        puVar12[8] = puVar11[8];
        *(undefined8 *)puVar11 = uVar3;
        *(undefined8 *)(puVar11 + 2) = uVar4;
        *(undefined8 *)(puVar11 + 4) = uVar5;
        *(undefined8 *)(puVar11 + 6) = uVar6;
        puVar11[8] = uVar9;
      }
      puVar12 = puVar12 + 9;
    }
    puVar11 = puVar11 + 9;
  } while( true );
}

