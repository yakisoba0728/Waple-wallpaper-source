// Function: FUN_1402f2440
// Addr: 1402f2440
// Size: 157 bytes


undefined8 FUN_1402f2440(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(param_1 + 8))(param_1,0x178);
    if (plVar1 != (longlong *)0x0) {
      FUN_1404217a0((longlong)plVar1 + 0x14,0,0x15c);
      plVar1[0x2e] = 1;
      *plVar1 = param_1;
      *(undefined4 *)(plVar1 + 1) = 2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0xe;
      *(undefined4 *)(plVar1 + 2) = 3;
      *param_2 = (longlong)plVar1;
      return 0;
    }
    return 0x40;
  }
  return 6;
}

