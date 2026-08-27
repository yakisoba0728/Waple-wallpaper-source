// Function: FUN_14039bf70
// Addr: 14039bf70
// Size: 430 bytes


undefined8 * FUN_14039bf70(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ushort uVar6;
  uint local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  longlong local_28 [2];
  
  if ((int)param_2 == 0) {
    puVar3 = (undefined8 *)FUN_14039bd30();
    return puVar3;
  }
  uVar6 = (ushort)(param_2 & 0xffffffff);
  uVar1 = (ushort)((param_2 & 0xffffffff) >> 0x10);
  iVar2 = (**(code **)(*param_3 + 0x60))
                    (param_3,CONCAT22(uVar6 >> 8 | uVar6 << 8,uVar1 >> 8 | uVar1 << 8),local_28,
                     local_res10,&local_res20,local_res18);
  if (-1 < iVar2) {
    if (((local_28[0] != 0) && (local_res18[0] != 0)) && (local_res10[0] != 0)) {
      puVar3 = (undefined8 *)_malloc_base(0x10);
      if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*param_3 + 0x68))(param_3,local_res20);
        return (undefined8 *)0x0;
      }
      *puVar3 = param_3;
      puVar3[1] = local_res20;
      if (local_res10[0] == 0) {
        lVar5 = *param_3;
      }
      else {
        if (local_res10[0] < 0x80000000) {
          puVar4 = (undefined8 *)_calloc_base(1);
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
            *(uint *)(puVar4 + 3) = local_res10[0];
            puVar4[5] = FUN_14039c120;
            puVar4[4] = puVar3;
            puVar4[2] = local_28[0];
            *(undefined4 *)((longlong)puVar4 + 0x1c) = 1;
            return puVar4;
          }
        }
        param_3 = (longlong *)*puVar3;
        local_res20 = puVar3[1];
        lVar5 = *param_3;
      }
      (**(code **)(lVar5 + 0x68))(param_3,local_res20);
      thunk_FUN_1402d9040(puVar3);
      return &DAT_14045dd10;
    }
    (**(code **)(*param_3 + 0x68))(param_3,local_res20);
  }
  return (undefined8 *)0x0;
}

