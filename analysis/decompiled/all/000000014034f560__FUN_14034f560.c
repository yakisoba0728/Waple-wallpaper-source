// Function: FUN_14034f560
// Addr: 14034f560
// Size: 70 bytes


undefined8 FUN_14034f560(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x158) = 0xffffffeb;
  *(undefined8 *)(lVar1 + 0x15c) = 0;
  *(undefined4 *)(lVar1 + 0x164) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0x15;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}

