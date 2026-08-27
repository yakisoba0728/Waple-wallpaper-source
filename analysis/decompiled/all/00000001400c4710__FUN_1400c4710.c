// Function: FUN_1400c4710
// Addr: 1400c4710
// Size: 264 bytes


void FUN_1400c4710(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    FUN_1404217a0(param_2,0,0x200);
    *param_3 = 0;
    return;
  }
  iVar5 = FUN_140290d80(param_1 + 0x20);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x6c) != 0x7fffffff) {
      lVar7 = 4;
      puVar6 = *(undefined8 **)(param_1 + 8);
      do {
        uVar4 = puVar6[1];
        *param_2 = *puVar6;
        param_2[1] = uVar4;
        uVar4 = puVar6[3];
        param_2[2] = puVar6[2];
        param_2[3] = uVar4;
        uVar4 = puVar6[5];
        param_2[4] = puVar6[4];
        param_2[5] = uVar4;
        uVar4 = puVar6[7];
        param_2[6] = puVar6[6];
        param_2[7] = uVar4;
        uVar4 = puVar6[9];
        param_2[8] = puVar6[8];
        param_2[9] = uVar4;
        uVar4 = puVar6[0xb];
        param_2[10] = puVar6[10];
        param_2[0xb] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar6 + 100);
        uVar2 = *(undefined4 *)(puVar6 + 0xd);
        uVar3 = *(undefined4 *)((longlong)puVar6 + 0x6c);
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
        *(undefined4 *)((longlong)param_2 + 100) = uVar1;
        *(undefined4 *)(param_2 + 0xd) = uVar2;
        *(undefined4 *)((longlong)param_2 + 0x6c) = uVar3;
        uVar1 = *(undefined4 *)((longlong)puVar6 + 0x74);
        uVar2 = *(undefined4 *)(puVar6 + 0xf);
        uVar3 = *(undefined4 *)((longlong)puVar6 + 0x7c);
        *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar6 + 0xe);
        *(undefined4 *)((longlong)param_2 + 0x74) = uVar1;
        *(undefined4 *)(param_2 + 0xf) = uVar2;
        *(undefined4 *)((longlong)param_2 + 0x7c) = uVar3;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 0x10;
        param_2 = param_2 + 0x10;
      } while (lVar7 != 0);
      FUN_140290ea0(param_1 + 0x20);
      *param_3 = *(undefined4 *)(param_1 + 0x10);
      return;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(5);
}

