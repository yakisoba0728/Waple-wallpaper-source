// Function: FUN_14039ecf0
// Addr: 14039ecf0
// Size: 301 bytes


undefined8 * FUN_14039ecf0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint local_res10 [6];
  
  local_res10[0] = 0;
  if ((int)param_2 != 1) {
    iVar2 = FUN_1402f1ad0(param_3,param_2,0,0,local_res10);
    if (iVar2 == 0) {
      lVar3 = _malloc_base(local_res10[0]);
      if (lVar3 != 0) {
        iVar2 = FUN_1402f1ad0(param_3,param_2 & 0xffffffff,0,lVar3,local_res10);
        uVar1 = local_res10[0];
        if (iVar2 != 0) {
          thunk_FUN_1402d9040(lVar3);
          return (undefined8 *)0x0;
        }
        if ((local_res10[0] != 0) && (local_res10[0] < 0x80000000)) {
          puVar4 = (undefined8 *)_calloc_base(1,0x30);
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined2 *)((longlong)puVar4 + 5) = 0;
            *(undefined1 *)((longlong)puVar4 + 7) = 0;
            *(undefined4 *)puVar4 = 0;
            *(undefined1 *)((longlong)puVar4 + 4) = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            *(undefined4 *)puVar4 = 1;
            *(undefined1 *)((longlong)puVar4 + 4) = 1;
            puVar4[1] = 0;
            puVar4[2] = lVar3;
            puVar4[5] = &LAB_14035bf70;
            *(uint *)(puVar4 + 3) = uVar1;
            *(undefined4 *)((longlong)puVar4 + 0x1c) = 2;
            puVar4[4] = lVar3;
            return puVar4;
          }
        }
        thunk_FUN_1402d9040(lVar3);
        return &DAT_14045dd10;
      }
    }
  }
  return (undefined8 *)0x0;
}

