// Function: FUN_1401d42e0
// Addr: 1401d42e0
// Size: 68 bytes


ulonglong FUN_1401d42e0(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    in_RAX = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x60))();
    if ((int)in_RAX == 1) {
      in_RAX = *(ulonglong *)(param_2 + 0x38);
      if ((*(longlong *)(in_RAX + 0x4b8) != 0) &&
         (*(longlong *)(*(longlong *)(in_RAX + 0x4b8) + 8) != 0)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

