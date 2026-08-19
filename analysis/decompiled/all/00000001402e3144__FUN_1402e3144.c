// Function: FUN_1402e3144
// Addr: 1402e3144
// Size: 389 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402e3144(undefined4 param_1,char param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong local_res18;
  undefined8 *local_res20;
  undefined1 auStack_268 [4];
  undefined4 uStack_264;
  undefined4 auStack_260 [2];
  longlong *plStack_258;
  undefined8 **ppuStack_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  func_0x0001402e33b4(param_3,param_4);
  iVar16 = FUN_1402e2e34(param_1);
  if (iVar16 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    iVar16 = 0;
  }
  else {
    puVar17 = (undefined8 *)FUN_1402da070(0x228);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_1402d9110(0);
      iVar16 = -1;
    }
    else {
      lVar20 = 4;
      lVar21 = 4;
      puVar14 = *(undefined8 **)(local_res18 + 0x88);
      puVar15 = local_248;
      do {
        puVar19 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar19 = *puVar18;
        puVar19[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar19[2] = uVar11;
        puVar19[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar19[4] = uVar2;
        puVar19[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar19[6] = uVar11;
        puVar19[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar19[8] = uVar2;
        puVar19[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar19[10] = uVar11;
        puVar19[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar19[0xc] = uVar2;
        puVar19[0xd] = uVar13;
        puVar19[0xe] = uVar11;
        puVar19[0xf] = uVar12;
        lVar21 = lVar21 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar19 + 0x10;
      } while (lVar21 != 0);
      uVar11 = puVar18[0x11];
      uVar12 = puVar18[0x12];
      uVar13 = puVar18[0x13];
      uVar2 = puVar18[0x14];
      puVar19[0x10] = puVar18[0x10];
      puVar19[0x11] = uVar11;
      puVar19[0x12] = uVar12;
      puVar19[0x13] = uVar13;
      puVar19[0x14] = uVar2;
      puVar14 = local_248;
      puVar15 = puVar17;
      do {
        puVar19 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar19 = *puVar18;
        puVar19[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar19[2] = uVar11;
        puVar19[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar19[4] = uVar2;
        puVar19[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar19[6] = uVar11;
        puVar19[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar19[8] = uVar2;
        puVar19[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar19[10] = uVar11;
        puVar19[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar19[0xc] = uVar2;
        puVar19[0xd] = uVar13;
        puVar19[0xe] = uVar11;
        puVar19[0xf] = uVar12;
        lVar20 = lVar20 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar19 + 0x10;
      } while (lVar20 != 0);
      uVar4 = *(undefined4 *)((longlong)puVar18 + 0x84);
      uVar5 = *(undefined4 *)(puVar18 + 0x11);
      uVar6 = *(undefined4 *)((longlong)puVar18 + 0x8c);
      uVar7 = *(undefined4 *)(puVar18 + 0x12);
      uVar8 = *(undefined4 *)((longlong)puVar18 + 0x94);
      uVar9 = *(undefined4 *)(puVar18 + 0x13);
      uVar10 = *(undefined4 *)((longlong)puVar18 + 0x9c);
      uVar2 = puVar18[0x14];
      *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
      *(undefined4 *)((longlong)puVar19 + 0x84) = uVar4;
      *(undefined4 *)(puVar19 + 0x11) = uVar5;
      *(undefined4 *)((longlong)puVar19 + 0x8c) = uVar6;
      *(undefined4 *)(puVar19 + 0x12) = uVar7;
      *(undefined4 *)((longlong)puVar19 + 0x94) = uVar8;
      *(undefined4 *)(puVar19 + 0x13) = uVar9;
      *(undefined4 *)((longlong)puVar19 + 0x9c) = uVar10;
      puVar19[0x14] = uVar2;
      *(undefined4 *)puVar17 = 0;
      iVar16 = FUN_1402e34e8(iVar16,puVar17);
      if (iVar16 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      if (param_2 == '\0') {
        FUN_1402d2604();
      }
      piVar3 = *(int **)(local_res18 + 0x88);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(longlong *)(local_res18 + 0x88) != 0x1404dcaf0)) {
        FUN_1402d9110();
      }
      *(undefined4 *)puVar17 = 1;
      *(undefined8 **)(local_res18 + 0x88) = puVar17;
      if ((_DAT_1404dd030 & *(uint *)(local_res18 + 0x3a8)) == 0) {
        plStack_258 = &local_res18;
        ppuStack_250 = &local_res20;
        uStack_264 = 5;
        auStack_260[0] = 5;
        FUN_1402e2c64(auStack_268,auStack_260,&plStack_258,&uStack_264);
        if (param_2 != '\0') {
          PTR_DAT_1404dc7c0 = (undefined *)*local_res20;
        }
      }
      FUN_1402d9110(0);
    }
  }
  return iVar16;
}

