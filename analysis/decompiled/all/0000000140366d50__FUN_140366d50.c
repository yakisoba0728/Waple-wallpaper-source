// Function: FUN_140366d50
// Addr: 140366d50
// Size: 805 bytes


void FUN_140366d50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  
  puVar18 = param_3 + 4;
  if (param_2 < param_3) {
    while( true ) {
      uVar2 = *(uint *)(param_3 + 2);
      uVar3 = *(uint *)(param_3 + -2);
      uVar4 = param_3[1];
      uVar5 = param_3[-3];
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = uVar3;
      }
      iVar15 = func_0x000140421dc0(uVar5,uVar4,uVar6);
      iVar19 = uVar3 - uVar2;
      if (iVar15 != 0) {
        iVar19 = iVar15;
      }
      if (iVar19 < 0) break;
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar15 = func_0x000140421dc0(uVar4,uVar5,uVar6);
      iVar19 = uVar2 - uVar3;
      if (iVar15 != 0) {
        iVar19 = iVar15;
      }
      if ((iVar19 < 0) || (param_3 = param_3 + -4, param_3 <= param_2)) break;
    }
  }
  puVar13 = puVar18;
  puVar16 = param_3;
  if (puVar18 < param_4) {
    uVar2 = *(uint *)(param_3 + 2);
    uVar4 = param_3[1];
    while( true ) {
      uVar3 = *(uint *)(puVar18 + 2);
      uVar5 = puVar18[1];
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = uVar3;
      }
      iVar15 = func_0x000140421dc0(uVar5,uVar4,uVar6);
      iVar19 = uVar3 - uVar2;
      if (iVar15 != 0) {
        iVar19 = iVar15;
      }
      puVar13 = puVar18;
      if (iVar19 < 0) break;
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar15 = func_0x000140421dc0(uVar4,uVar5,uVar6);
      iVar19 = uVar2 - uVar3;
      if (iVar15 != 0) {
        iVar19 = iVar15;
      }
      if ((iVar19 < 0) || (puVar18 = puVar18 + 4, puVar13 = puVar18, param_4 <= puVar18)) break;
    }
  }
joined_r0x000140366e63:
  do {
    puVar14 = param_3;
    if (param_4 <= puVar13) {
joined_r0x000140366f02:
      for (; param_2 < puVar14; puVar14 = puVar14 + -4) {
        uVar2 = *(uint *)(puVar16 + 2);
        uVar3 = *(uint *)(puVar14 + -2);
        uVar4 = puVar16[1];
        uVar6 = uVar2;
        if (uVar3 <= uVar2) {
          uVar6 = uVar3;
        }
        iVar15 = func_0x000140421dc0(puVar14[-3],uVar4,uVar6);
        iVar19 = uVar3 - uVar2;
        if (iVar15 != 0) {
          iVar19 = iVar15;
        }
        puVar17 = puVar16;
        if (-1 < iVar19) {
          uVar6 = uVar3;
          if (uVar2 <= uVar3) {
            uVar6 = uVar2;
          }
          iVar15 = func_0x000140421dc0(uVar4,puVar14[-3],uVar6);
          iVar19 = uVar2 - uVar3;
          if (iVar15 != 0) {
            iVar19 = iVar15;
          }
          if (iVar19 < 0) break;
          puVar1 = puVar14 + -4;
          puVar17 = puVar16 + -4;
          if (puVar17 != puVar1) {
            uVar7 = *(undefined4 *)((longlong)puVar14 + -0x1c);
            uVar8 = *(undefined4 *)(puVar14 + -3);
            uVar9 = *(undefined4 *)((longlong)puVar14 + -0x14);
            uVar4 = *puVar17;
            uVar5 = puVar16[-3];
            uVar10 = puVar16[-2];
            uVar11 = puVar16[-1];
            *(undefined4 *)puVar17 = *(undefined4 *)puVar1;
            *(undefined4 *)((longlong)puVar16 + -0x1c) = uVar7;
            *(undefined4 *)(puVar16 + -3) = uVar8;
            *(undefined4 *)((longlong)puVar16 + -0x14) = uVar9;
            uVar12 = puVar14[-1];
            puVar16[-2] = puVar14[-2];
            puVar16[-1] = uVar12;
            *puVar1 = uVar4;
            puVar14[-3] = uVar5;
            puVar14[-2] = uVar10;
            puVar14[-1] = uVar11;
          }
        }
        puVar16 = puVar17;
      }
      if (puVar14 == param_2) {
        if (puVar13 == param_4) {
          *param_1 = puVar16;
          param_1[1] = puVar18;
          return;
        }
        if (puVar18 != puVar13) {
          uVar4 = puVar18[1];
          uVar5 = *puVar16;
          uVar10 = puVar16[1];
          uVar11 = puVar16[2];
          uVar12 = puVar16[3];
          *puVar16 = *puVar18;
          puVar16[1] = uVar4;
          uVar4 = puVar18[3];
          puVar16[2] = puVar18[2];
          puVar16[3] = uVar4;
          *puVar18 = uVar5;
          puVar18[1] = uVar10;
          puVar18[2] = uVar11;
          puVar18[3] = uVar12;
        }
        uVar7 = *(undefined4 *)((longlong)puVar13 + 4);
        uVar8 = *(undefined4 *)(puVar13 + 1);
        uVar9 = *(undefined4 *)((longlong)puVar13 + 0xc);
        uVar4 = *puVar16;
        uVar5 = puVar16[1];
        uVar10 = puVar16[2];
        uVar11 = puVar16[3];
        *(undefined4 *)puVar16 = *(undefined4 *)puVar13;
        *(undefined4 *)((longlong)puVar16 + 4) = uVar7;
        *(undefined4 *)(puVar16 + 1) = uVar8;
        *(undefined4 *)((longlong)puVar16 + 0xc) = uVar9;
        uVar12 = puVar13[3];
        puVar16[2] = puVar13[2];
        puVar16[3] = uVar12;
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        puVar13[2] = uVar10;
        puVar13[3] = uVar11;
        puVar18 = puVar18 + 4;
        puVar13 = puVar13 + 4;
        param_3 = puVar14;
        puVar16 = puVar16 + 4;
      }
      else {
        param_3 = puVar14 + -4;
        if (puVar13 == param_4) {
          puVar17 = puVar16 + -4;
          if (param_3 != puVar17) {
            uVar4 = puVar16[-3];
            uVar5 = *param_3;
            uVar10 = puVar14[-3];
            uVar11 = puVar14[-2];
            uVar12 = puVar14[-1];
            *param_3 = *puVar17;
            puVar14[-3] = uVar4;
            uVar4 = puVar16[-1];
            puVar14[-2] = puVar16[-2];
            puVar14[-1] = uVar4;
            *puVar17 = uVar5;
            puVar16[-3] = uVar10;
            puVar16[-2] = uVar11;
            puVar16[-1] = uVar12;
          }
          uVar7 = *(undefined4 *)((longlong)puVar18 - 0x1c);
          uVar8 = *(undefined4 *)(puVar18 + -3);
          uVar9 = *(undefined4 *)((longlong)puVar18 - 0x14);
          uVar4 = *puVar17;
          uVar5 = puVar16[-3];
          uVar10 = puVar16[-2];
          uVar11 = puVar16[-1];
          *(undefined4 *)puVar17 = *(undefined4 *)(puVar18 + -4);
          *(undefined4 *)((longlong)puVar16 + -0x1c) = uVar7;
          *(undefined4 *)(puVar16 + -3) = uVar8;
          *(undefined4 *)((longlong)puVar16 + -0x14) = uVar9;
          uVar12 = puVar18[-1];
          puVar16[-2] = puVar18[-2];
          puVar16[-1] = uVar12;
          puVar18[-4] = uVar4;
          puVar18[-3] = uVar5;
          puVar18[-2] = uVar10;
          puVar18[-1] = uVar11;
          puVar18 = puVar18 + -4;
          puVar16 = puVar17;
        }
        else {
          uVar4 = *puVar13;
          uVar5 = puVar13[1];
          uVar10 = puVar13[2];
          uVar11 = puVar13[3];
          uVar7 = *(undefined4 *)((longlong)puVar14 + -0x1c);
          uVar8 = *(undefined4 *)(puVar14 + -3);
          uVar9 = *(undefined4 *)((longlong)puVar14 + -0x14);
          *(undefined4 *)puVar13 = *(undefined4 *)param_3;
          *(undefined4 *)((longlong)puVar13 + 4) = uVar7;
          *(undefined4 *)(puVar13 + 1) = uVar8;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uVar9;
          uVar12 = puVar14[-1];
          puVar13[2] = puVar14[-2];
          puVar13[3] = uVar12;
          *param_3 = uVar4;
          puVar14[-3] = uVar5;
          puVar14[-2] = uVar10;
          puVar14[-1] = uVar11;
          puVar13 = puVar13 + 4;
        }
      }
      goto joined_r0x000140366e63;
    }
    uVar2 = *(uint *)(puVar13 + 2);
    uVar3 = *(uint *)(puVar16 + 2);
    uVar6 = uVar2;
    if (uVar3 <= uVar2) {
      uVar6 = uVar3;
    }
    iVar15 = func_0x000140421dc0(puVar16[1],puVar13[1],uVar6);
    iVar19 = uVar3 - uVar2;
    if (iVar15 != 0) {
      iVar19 = iVar15;
    }
    if (-1 < iVar19) {
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar15 = func_0x000140421dc0(puVar13[1],puVar16[1],uVar6);
      iVar19 = uVar2 - uVar3;
      if (iVar15 != 0) {
        iVar19 = iVar15;
      }
      if (iVar19 < 0) goto joined_r0x000140366f02;
      if (puVar18 != puVar13) {
        uVar7 = *(undefined4 *)((longlong)puVar13 + 4);
        uVar8 = *(undefined4 *)(puVar13 + 1);
        uVar9 = *(undefined4 *)((longlong)puVar13 + 0xc);
        uVar4 = *puVar18;
        uVar5 = puVar18[1];
        uVar10 = puVar18[2];
        uVar11 = puVar18[3];
        *(undefined4 *)puVar18 = *(undefined4 *)puVar13;
        *(undefined4 *)((longlong)puVar18 + 4) = uVar7;
        *(undefined4 *)(puVar18 + 1) = uVar8;
        *(undefined4 *)((longlong)puVar18 + 0xc) = uVar9;
        uVar12 = puVar13[3];
        puVar18[2] = puVar13[2];
        puVar18[3] = uVar12;
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        puVar13[2] = uVar10;
        puVar13[3] = uVar11;
      }
      puVar18 = puVar18 + 4;
    }
    puVar13 = puVar13 + 4;
  } while( true );
}

