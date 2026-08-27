// Function: FUN_14031ce60
// Addr: 14031ce60
// Size: 302 bytes


int FUN_14031ce60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int local_res8 [2];
  
  iVar2 = 0;
  local_res8[0] = 0;
  if (*(char *)(param_1 + 0x400) != '\0') {
    return 6;
  }
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 0x10e8);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_1402f7fa0(*(undefined8 *)(param_1 + 0x98),0x38,local_res8);
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar4 = FUN_14031f780(lVar1,*(undefined4 *)(lVar1 + 0x5e0));
      *puVar3 = uVar4;
      uVar4 = FUN_14031f780(lVar1,*(undefined4 *)(lVar1 + 0x5e4));
      puVar3[1] = uVar4;
      uVar4 = FUN_14031f780(lVar1,*(undefined4 *)(lVar1 + 0x5ec));
      puVar3[2] = uVar4;
      uVar4 = FUN_14031f780(lVar1,*(undefined4 *)(lVar1 + 0x5f0));
      puVar3[3] = uVar4;
      uVar4 = FUN_14031f780(lVar1,*(undefined4 *)(lVar1 + 0x5f4));
      puVar3[4] = uVar4;
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(lVar1 + 0x5fc);
      *(undefined1 *)((longlong)puVar3 + 0x2c) = *(undefined1 *)(lVar1 + 0x5f8);
      *(undefined2 *)((longlong)puVar3 + 0x2e) = *(undefined2 *)(lVar1 + 0x600);
      *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(lVar1 + 0x602);
      *(undefined8 **)(lVar1 + 0x10e8) = puVar3;
      iVar2 = local_res8[0];
    }
    uVar4 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar4;
    uVar4 = puVar3[3];
    param_2[2] = puVar3[2];
    param_2[3] = uVar4;
    uVar4 = puVar3[5];
    param_2[4] = puVar3[4];
    param_2[5] = uVar4;
    param_2[6] = puVar3[6];
  }
  return iVar2;
}

