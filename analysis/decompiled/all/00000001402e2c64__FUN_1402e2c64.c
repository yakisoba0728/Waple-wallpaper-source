// Function: FUN_1402e2c64
// Addr: 1402e2c64
// Size: 251 bytes


void FUN_1402e2c64(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  FUN_1402d6370(*param_2);
  puVar10 = DAT_1404e4f50;
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_1404e4f50 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (puVar7 != (undefined8 *)0x0) {
    lVar11 = 2;
    lVar12 = 2;
    puVar8 = DAT_1404e4f50;
    do {
      uVar6 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar6;
      uVar6 = puVar7[3];
      puVar8[2] = puVar7[2];
      puVar8[3] = uVar6;
      uVar6 = puVar7[5];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar6;
      uVar6 = puVar7[7];
      puVar8[6] = puVar7[6];
      puVar8[7] = uVar6;
      uVar6 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
      uVar4 = *(undefined4 *)(puVar7 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 100) = uVar3;
      *(undefined4 *)(puVar8 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar5;
      puVar9 = puVar8 + 0x10;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0x74);
      uVar4 = *(undefined4 *)(puVar7 + 0xf);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x7c);
      *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar7 + 0xe);
      *(undefined4 *)((longlong)puVar8 + 0x74) = uVar3;
      *(undefined4 *)(puVar8 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar5;
      puVar7 = puVar7 + 0x10;
      lVar12 = lVar12 + -1;
      puVar8 = puVar9;
    } while (lVar12 != 0);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
    if (DAT_1404e4f58 != (undefined8 *)0x0) {
      puVar10 = DAT_1404e4f58;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          uVar6 = puVar7[1];
          *puVar10 = *puVar7;
          puVar10[1] = uVar6;
          uVar6 = puVar7[3];
          puVar10[2] = puVar7[2];
          puVar10[3] = uVar6;
          uVar6 = puVar7[5];
          puVar10[4] = puVar7[4];
          puVar10[5] = uVar6;
          uVar6 = puVar7[7];
          puVar10[6] = puVar7[6];
          puVar10[7] = uVar6;
          uVar6 = puVar7[9];
          puVar10[8] = puVar7[8];
          puVar10[9] = uVar6;
          uVar6 = puVar7[0xb];
          puVar10[10] = puVar7[10];
          puVar10[0xb] = uVar6;
          uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
          uVar4 = *(undefined4 *)(puVar7 + 0xd);
          uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
          *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
          *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
          *(undefined4 *)(puVar10 + 0xd) = uVar4;
          *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
          uVar3 = *(undefined4 *)((longlong)puVar7 + 0x74);
          uVar4 = *(undefined4 *)(puVar7 + 0xf);
          uVar5 = *(undefined4 *)((longlong)puVar7 + 0x7c);
          *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar7 + 0xe);
          *(undefined4 *)((longlong)puVar10 + 0x74) = uVar3;
          *(undefined4 *)(puVar10 + 0xf) = uVar4;
          *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar5;
          puVar7 = puVar7 + 0x10;
          lVar11 = lVar11 + -1;
          puVar10 = puVar10 + 0x10;
        } while (lVar11 != 0);
        piVar2 = (int *)**(undefined8 **)param_3[1];
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (**(longlong **)param_3[1] != 0x1404dcaf0)) {
          FUN_1402d9110(**(longlong **)param_3[1]);
        }
        **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
        LOCK();
        **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
        UNLOCK();
        __acrt_unlock(*param_4);
        return;
      }
      func_0x000140421870(DAT_1404e4f58,0,0x100);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004(0,0x80,2,0,puVar10,puVar7,0);
  }
  func_0x000140421870(DAT_1404e4f50,0,0x101);
  return;
}

