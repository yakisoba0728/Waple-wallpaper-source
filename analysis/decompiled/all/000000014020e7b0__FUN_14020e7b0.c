// Function: FUN_14020e7b0
// Addr: 14020e7b0
// Size: 338 bytes


void FUN_14020e7b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *in_stack_00000028;
  
  if ((((*(longlong *)(param_1 + 0x4c0) == 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0xd0), lVar1 != 0)) &&
      ((*(uint *)(lVar1 + 0x1c) >> 5 & 1) != 0)) && (*(longlong *)(lVar1 + 0xd8) != 0)) {
    puVar3 = (undefined8 *)FUN_14028af20(0x110);
    lVar2 = *(longlong *)(param_1 + 200);
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[2] = lVar2 + 0x1c88;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_140491128;
    FUN_140153760(puVar3 + 0xc);
    *(undefined4 *)(puVar3 + 0x1d) = 0x3f800000;
    puVar3[0x1c] = lVar2 + 0x1708;
    *(undefined1 *)((longlong)puVar3 + 0xec) = 1;
    *(undefined4 *)(puVar3 + 0x1e) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xf4) = 1;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    FUN_1401a38f0(puVar3 + 1,0);
    *(undefined8 **)(param_1 + 0x4c0) = puVar3;
    puVar3[0xb] = param_1;
    *(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x50) = lVar1;
  }
  *in_stack_00000028 = *(undefined8 *)(param_1 + 0x4c0);
  return;
}

