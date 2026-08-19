// Function: FUN_14049f044
// Addr: 14049f044
// Size: 1 bytes


void FUN_14049f044(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),0x4c);
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) + iVar1;
  return;
}

