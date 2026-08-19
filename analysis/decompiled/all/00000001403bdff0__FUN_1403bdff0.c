// Function: FUN_1403bdff0
// Addr: 1403bdff0
// Size: 299 bytes


void FUN_1403bdff0(longlong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *local_res8;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = *(uint *)(param_1 + 0x54);
    while (1 < uVar2) {
      puVar5 = DAT_14045dde0;
      puVar1 = DAT_14045dde0;
      if (uVar2 - 1 < uVar2) {
        puVar5 = *(ulonglong **)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uVar2 - 1) * 8);
        puVar1 = DAT_1404e4ff0;
      }
      DAT_1404e4ff0 = puVar1;
      if (*(ulonglong *)(param_1 + 0x10) <= *puVar5) {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x54) - 1;
      puVar5 = DAT_14045dde0;
      puVar1 = DAT_14045dde0;
      if (uVar2 < *(uint *)(param_1 + 0x54)) {
        puVar5 = *(ulonglong **)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar2 * 8);
        puVar1 = DAT_1404e4ff0;
      }
      DAT_1404e4ff0 = puVar1;
      local_res8 = puVar5;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar6 = puVar5[1] - *puVar5;
        if (0x7f < (longlong)uVar6) {
          uVar6 = 0x80;
        }
        uVar2 = func_0x0001403bf6a0(puVar5[3],*(int *)((longlong)puVar5 + 0x14) * 0xc,0xf437ffe6);
        uVar3 = func_0x0001403bf6a0(*puVar5,uVar6 & 0xffffffff,0xf437ffe6);
        lVar4 = FUN_1403bf880(param_1 + 0x60,&local_res8,uVar3 ^ uVar2);
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xfffffffe;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
      }
      if (1 < (int)puVar5[2] + 1U) {
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
        func_0x0001402bf8e0(puVar5[3]);
        return;
      }
      *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      if (1 < (int)puVar5[4] + 1U) {
        *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
        func_0x0001402bf8e0(puVar5[5]);
        return;
      }
      *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      *puVar5 = *(ulonglong *)(param_1 + 0x30);
      *(ulonglong **)(param_1 + 0x30) = puVar5;
      if (*(int *)(param_1 + 0x54) == 0) {
        return;
      }
      uVar2 = *(int *)(param_1 + 0x54) - 1;
      *(uint *)(param_1 + 0x54) = uVar2;
    }
  }
  return;
}

