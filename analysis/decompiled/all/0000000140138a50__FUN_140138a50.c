// Function: FUN_140138a50
// Addr: 140138a50
// Size: 58 bytes


undefined8 FUN_140138a50(longlong param_1,longlong *param_2)

{
  int iVar1;
  int local_res10 [6];
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_res10);
    if ((-1 < iVar1) && (local_res10[0] == 1)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x11) = 1;
    }
  }
  return 0;
}

