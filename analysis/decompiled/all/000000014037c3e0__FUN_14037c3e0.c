// Function: FUN_14037c3e0
// Addr: 14037c3e0
// Size: 81 bytes


undefined1 FUN_14037c3e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [32];
  
  puVar4 = &DAT_14045dd10;
  puVar1 = (undefined8 *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x140);
  puVar5 = &DAT_14045dd10;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  if (3 < *(uint *)(puVar5 + 3)) {
    puVar4 = (undefined8 *)puVar5[2];
  }
  uVar2 = FUN_1403cbf00(puVar4);
  puVar3 = (undefined1 *)FUN_140378310(uVar2,local_res8,param_1);
  return *puVar3;
}

