// Function: FUN_1404ced6c
// Addr: 1404ced6c
// Size: 1 bytes


uint FUN_1404ced6c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(ulonglong *)
   ((ulonglong)(uint)((int)&stack0x00000000 + *(int *)(CONCAT44(in_register_00000004,in_EAX) + 2)) -
   8) = CONCAT44(in_register_00000004,in_EAX);
  uRam00000001a451ed78 = uRam00000001a451ed78 & in_EAX;
  return in_EAX;
}

