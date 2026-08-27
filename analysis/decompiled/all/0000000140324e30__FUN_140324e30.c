// Function: FUN_140324e30
// Addr: 140324e30
// Size: 156 bytes


undefined8
FUN_140324e30(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18c);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  if (lVar2 == 0) {
    uVar3 = 0x10000;
    uVar4 = 0x10000;
  }
  else {
    uVar3 = FUN_1402efa10((ulonglong)*(ushort *)(lVar2 + 0x18) << 6,*puVar1);
    uVar4 = FUN_1402efa10((ulonglong)*(ushort *)(lVar2 + 0x1a) << 6,*puVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar3;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar4;
  }
  return 0;
}

