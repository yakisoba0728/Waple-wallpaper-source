// Function: FUN_140091a60
// Addr: 140091a60
// Size: 67 bytes


longlong FUN_140091a60(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x10);
  }
  return param_1;
}

