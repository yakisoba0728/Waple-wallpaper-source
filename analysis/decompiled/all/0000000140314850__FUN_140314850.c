// Function: FUN_140314850
// Addr: 140314850
// Size: 282 bytes


void FUN_140314850(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[0x22];
  uVar2 = *(undefined8 *)(*param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1402f7f90(uVar2,puVar1[6]);
    puVar1[6] = 0;
    FUN_1402f7f90(uVar2,puVar1[0x46]);
    uVar3 = puVar1[2];
    puVar1[0x46] = 0;
    *(undefined4 *)(puVar1 + 0x4c) = 0;
    FUN_1402f7f90(uVar3,puVar1[0x42]);
    puVar1[0x42] = 0;
    *(undefined4 *)(puVar1 + 0x41) = 0;
    FUN_1402f7f90(uVar3,puVar1[0x56]);
    puVar1[0x56] = 0;
    *(undefined2 *)(puVar1 + 0x55) = 0;
    FUN_1402f7f90(uVar3,puVar1[0x4b]);
    puVar1[0x4b] = 0;
    puVar1[0x4a] = 0;
    FUN_1402f7f90(uVar3,puVar1[0x44]);
    puVar1[0x44] = 0;
    *(undefined4 *)(puVar1 + 0x43) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    FUN_1402f7f90(uVar3,puVar1);
    param_1[0x22] = 0;
  }
  FUN_1402f7f90(uVar2,param_1[0x1c]);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return;
}

