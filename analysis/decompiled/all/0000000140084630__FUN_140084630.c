// Function: FUN_140084630
// Addr: 140084630
// Size: 133 bytes


void FUN_140084630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_48 [7];
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_2[7];
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (longlong *)(**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_140033a00(local_48,param_1 + 0x290);
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x20))
              (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
  }
  plVar2 = (longlong *)param_2[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
    param_2[7] = 0;
  }
  return;
}

