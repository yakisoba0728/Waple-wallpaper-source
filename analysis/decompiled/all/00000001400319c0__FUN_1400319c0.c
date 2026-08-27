// Function: FUN_1400319c0
// Addr: 1400319c0
// Size: 91 bytes


undefined8 FUN_1400319c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong local_48 [7];
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (longlong *)(**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_140033a00(local_48,param_1);
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x20))
              (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
  }
  return param_1;
}

