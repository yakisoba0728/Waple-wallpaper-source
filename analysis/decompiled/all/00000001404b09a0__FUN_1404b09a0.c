// Function: FUN_1404b09a0
// Addr: 1404b09a0
// Size: 1 bytes


uint FUN_1404b09a0(uint *param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  char *unaff_RBX;
  
  *(char *)param_1 = (char)*param_1 + (char)in_RAX;
  uVar1 = *param_1;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  return (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(10,(char)in_RAX)) | uVar1;
}

