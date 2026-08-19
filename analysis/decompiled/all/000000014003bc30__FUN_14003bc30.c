// Function: FUN_14003bc30
// Addr: 14003bc30
// Size: 56 bytes


bool FUN_14003bc30(undefined8 param_1)

{
  int iVar1;
  int local_res10 [6];
  
  iVar1 = (*DAT_140426b58)(param_1,0xe,local_res10,4);
  if (iVar1 < 0) {
    return false;
  }
  return local_res10[0] != 0;
}

