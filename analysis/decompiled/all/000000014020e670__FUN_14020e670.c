// Function: FUN_14020e670
// Addr: 14020e670
// Size: 319 bytes


void FUN_14020e670(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *in_stack_00000028;
  
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    *in_stack_00000028 = *(undefined8 *)(param_1 + 0x4c0);
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0xd0);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x1c) >> 2 & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_14028af20(0xf0);
    puVar2[2] = *(longlong *)(param_1 + 200) + 0x1c88;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &PTR_FUN_140491168;
    FUN_140153760(puVar2 + 0xc);
    *(undefined1 *)(puVar2 + 0x1c) = 1;
    *(undefined8 *)((longlong)puVar2 + 0xe4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0xec) = 0;
    FUN_1401a38f0(puVar2 + 1,0);
    *(undefined8 **)(param_1 + 0x4c0) = puVar2;
    puVar2[0xb] = param_1;
    *(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x50) = lVar1;
    *in_stack_00000028 = *(undefined8 *)(param_1 + 0x4c0);
    return;
  }
  *in_stack_00000028 = *(undefined8 *)(param_1 + 0x4c0);
  return;
}

