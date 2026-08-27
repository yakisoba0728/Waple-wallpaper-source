// Function: FUN_140365d90
// Addr: 140365d90
// Size: 1120 bytes


void FUN_140365d90(ulonglong *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  puVar12 = param_3 + 6;
  if (param_2 < param_3) {
    while( true ) {
      uVar2 = param_3[-6];
      puVar13 = param_3 + -6;
      uVar3 = *param_3;
      if (uVar2 < uVar3) {
        iVar10 = -1;
      }
      else if (uVar3 < uVar2) {
        iVar10 = 1;
      }
      else if ((byte)param_3[-5] < (byte)param_3[1]) {
        iVar10 = -1;
      }
      else if ((byte)param_3[1] < (byte)param_3[-5]) {
        iVar10 = 1;
      }
      else {
        iVar10 = FUN_1403b37e0(param_3 + -4,param_3 + 2);
      }
      if (iVar10 < 0) break;
      if (uVar3 < uVar2) {
        iVar10 = -1;
      }
      else if (uVar2 < uVar3) {
        iVar10 = 1;
      }
      else if ((byte)param_3[1] < (byte)param_3[-5]) {
        iVar10 = -1;
      }
      else if ((byte)param_3[-5] < (byte)param_3[1]) {
        iVar10 = 1;
      }
      else {
        iVar10 = FUN_1403b37e0(param_3 + 2,param_3 + -4);
      }
      if ((iVar10 < 0) || (param_3 = puVar13, puVar13 <= param_2)) break;
    }
  }
  puVar13 = puVar12;
  puVar11 = param_3;
  if (puVar12 < param_4) {
    uVar2 = *param_3;
    while( true ) {
      uVar3 = *puVar12;
      if (uVar3 < uVar2) {
        iVar10 = -1;
      }
      else if (uVar2 < uVar3) {
        iVar10 = 1;
      }
      else if ((byte)puVar12[1] < (byte)param_3[1]) {
        iVar10 = -1;
      }
      else if ((byte)param_3[1] < (byte)puVar12[1]) {
        iVar10 = 1;
      }
      else {
        iVar10 = FUN_1403b37e0(puVar12 + 2,param_3 + 2);
      }
      puVar13 = puVar12;
      if (iVar10 < 0) break;
      if (uVar2 < uVar3) {
        iVar10 = -1;
      }
      else if (uVar3 < uVar2) {
        iVar10 = 1;
      }
      else if ((byte)param_3[1] < (byte)puVar12[1]) {
        iVar10 = -1;
      }
      else if ((byte)puVar12[1] < (byte)param_3[1]) {
        iVar10 = 1;
      }
      else {
        iVar10 = FUN_1403b37e0(param_3 + 2,puVar12 + 2);
      }
      if ((iVar10 < 0) || (puVar12 = puVar12 + 6, puVar13 = puVar12, param_4 <= puVar12)) break;
    }
  }
joined_r0x000140365f14:
  do {
    if (param_4 <= puVar12) {
joined_r0x000140365fec:
      while (puVar9 = param_3, puVar8 = puVar11, puVar11 = puVar8, param_2 < puVar9) {
        uVar2 = puVar9[-6];
        param_3 = puVar9 + -6;
        uVar3 = *puVar8;
        if (uVar2 < uVar3) {
          iVar10 = -1;
        }
        else if (uVar3 < uVar2) {
          iVar10 = 1;
        }
        else if ((byte)puVar9[-5] < (byte)puVar8[1]) {
          iVar10 = -1;
        }
        else if ((byte)puVar8[1] < (byte)puVar9[-5]) {
          iVar10 = 1;
        }
        else {
          iVar10 = FUN_1403b37e0(puVar9 + -4,puVar8 + 2);
        }
        if (-1 < iVar10) {
          if (uVar3 < uVar2) {
            iVar10 = -1;
          }
          else if (uVar2 < uVar3) {
            iVar10 = 1;
          }
          else if ((byte)puVar8[1] < (byte)puVar9[-5]) {
            iVar10 = -1;
          }
          else if ((byte)puVar9[-5] < (byte)puVar8[1]) {
            iVar10 = 1;
          }
          else {
            iVar10 = FUN_1403b37e0(puVar8 + 2,puVar9 + -4);
          }
          if (iVar10 < 0) break;
          puVar11 = puVar8 + -6;
          if (puVar11 != param_3) {
            uVar2 = puVar9[-5];
            uVar3 = puVar9[-4];
            uVar4 = puVar9[-3];
            uVar5 = *(undefined8 *)puVar11;
            uVar6 = *(undefined8 *)(puVar8 + -4);
            uVar1 = *(undefined8 *)(puVar8 + -2);
            *puVar11 = *param_3;
            puVar8[-5] = uVar2;
            puVar8[-4] = uVar3;
            puVar8[-3] = uVar4;
            *(undefined8 *)(puVar8 + -2) = *(undefined8 *)(puVar9 + -2);
            *(undefined8 *)param_3 = uVar5;
            *(undefined8 *)(puVar9 + -4) = uVar6;
            *(undefined8 *)(puVar9 + -2) = uVar1;
          }
        }
      }
      if (puVar9 == param_2) {
        if (puVar12 == param_4) {
          *param_1 = (ulonglong)puVar8;
          param_1[1] = (ulonglong)puVar13;
          return;
        }
        if (puVar13 != puVar12) {
          uVar5 = *(undefined8 *)(puVar13 + 2);
          uVar6 = *(undefined8 *)puVar8;
          uVar7 = *(undefined8 *)(puVar8 + 2);
          uVar1 = *(undefined8 *)(puVar8 + 4);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar13;
          *(undefined8 *)(puVar8 + 2) = uVar5;
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar13 + 4);
          *(undefined8 *)puVar13 = uVar6;
          *(undefined8 *)(puVar13 + 2) = uVar7;
          *(undefined8 *)(puVar13 + 4) = uVar1;
        }
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = *(undefined8 *)puVar8;
        uVar6 = *(undefined8 *)(puVar8 + 2);
        uVar1 = *(undefined8 *)(puVar8 + 4);
        *puVar8 = *puVar12;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar12 + 4);
        *(undefined8 *)puVar12 = uVar5;
        *(undefined8 *)(puVar12 + 2) = uVar6;
        *(undefined8 *)(puVar12 + 4) = uVar1;
        puVar12 = puVar12 + 6;
        puVar13 = puVar13 + 6;
        param_3 = puVar9;
        puVar11 = puVar8 + 6;
      }
      else {
        param_3 = puVar9 + -6;
        if (puVar12 == param_4) {
          puVar11 = puVar8 + -6;
          if (param_3 != puVar11) {
            uVar5 = *(undefined8 *)(puVar8 + -4);
            uVar6 = *(undefined8 *)param_3;
            uVar7 = *(undefined8 *)(puVar9 + -4);
            uVar1 = *(undefined8 *)(puVar9 + -2);
            *(undefined8 *)param_3 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar9 + -4) = uVar5;
            *(undefined8 *)(puVar9 + -2) = *(undefined8 *)(puVar8 + -2);
            *(undefined8 *)puVar11 = uVar6;
            *(undefined8 *)(puVar8 + -4) = uVar7;
            *(undefined8 *)(puVar8 + -2) = uVar1;
          }
          uVar2 = puVar13[-5];
          uVar3 = puVar13[-4];
          uVar4 = puVar13[-3];
          uVar5 = *(undefined8 *)puVar11;
          uVar6 = *(undefined8 *)(puVar8 + -4);
          uVar1 = *(undefined8 *)(puVar8 + -2);
          *puVar11 = puVar13[-6];
          puVar8[-5] = uVar2;
          puVar8[-4] = uVar3;
          puVar8[-3] = uVar4;
          *(undefined8 *)(puVar8 + -2) = *(undefined8 *)(puVar13 + -2);
          *(undefined8 *)(puVar13 + -6) = uVar5;
          *(undefined8 *)(puVar13 + -4) = uVar6;
          *(undefined8 *)(puVar13 + -2) = uVar1;
          puVar13 = puVar13 + -6;
        }
        else {
          uVar5 = *(undefined8 *)puVar12;
          uVar6 = *(undefined8 *)(puVar12 + 2);
          uVar1 = *(undefined8 *)(puVar12 + 4);
          uVar2 = puVar9[-5];
          uVar3 = puVar9[-4];
          uVar4 = puVar9[-3];
          *puVar12 = *param_3;
          puVar12[1] = uVar2;
          puVar12[2] = uVar3;
          puVar12[3] = uVar4;
          *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar9 + -2);
          puVar12 = puVar12 + 6;
          *(undefined8 *)param_3 = uVar5;
          *(undefined8 *)(puVar9 + -4) = uVar6;
          *(undefined8 *)(puVar9 + -2) = uVar1;
        }
      }
      goto joined_r0x000140365f14;
    }
    uVar2 = *puVar12;
    uVar3 = *puVar11;
    if (uVar3 < uVar2) {
      iVar10 = -1;
    }
    else if (uVar2 < uVar3) {
      iVar10 = 1;
    }
    else if ((byte)puVar11[1] < (byte)puVar12[1]) {
      iVar10 = -1;
    }
    else if ((byte)puVar12[1] < (byte)puVar11[1]) {
      iVar10 = 1;
    }
    else {
      iVar10 = FUN_1403b37e0(puVar11 + 2,puVar12 + 2);
    }
    if (-1 < iVar10) {
      if (uVar2 < uVar3) {
        iVar10 = -1;
      }
      else if (uVar3 < uVar2) {
        iVar10 = 1;
      }
      else if ((byte)puVar12[1] < (byte)puVar11[1]) {
        iVar10 = -1;
      }
      else if ((byte)puVar11[1] < (byte)puVar12[1]) {
        iVar10 = 1;
      }
      else {
        iVar10 = FUN_1403b37e0(puVar12 + 2,puVar11 + 2);
      }
      if (iVar10 < 0) goto joined_r0x000140365fec;
      if (puVar13 != puVar12) {
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = *(undefined8 *)puVar13;
        uVar6 = *(undefined8 *)(puVar13 + 2);
        uVar1 = *(undefined8 *)(puVar13 + 4);
        *puVar13 = *puVar12;
        puVar13[1] = uVar2;
        puVar13[2] = uVar3;
        puVar13[3] = uVar4;
        *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar12 + 4);
        *(undefined8 *)puVar12 = uVar5;
        *(undefined8 *)(puVar12 + 2) = uVar6;
        *(undefined8 *)(puVar12 + 4) = uVar1;
      }
      puVar13 = puVar13 + 6;
    }
    puVar12 = puVar12 + 6;
  } while( true );
}

