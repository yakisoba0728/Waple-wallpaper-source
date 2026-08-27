// Function: FUN_1400e8b00
// Addr: 1400e8b00
// Size: 113 bytes


void FUN_1400e8b00(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  param_2 = param_2 & 0xff;
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    bVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 8) + 0x20))();
    param_2 = (ulonglong)bVar2;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  puVar3 = *(undefined8 **)(lVar1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14028af20(0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 **)(lVar1 + 0x28) = puVar3;
  }
  *(byte *)((param_2 >> 3) + (longlong)puVar3) =
       *(byte *)((param_2 >> 3) + (longlong)puVar3) | (byte)(1 << ((uint)param_2 & 7));
  return;
}

