// Function: FUN_140013f70
// Addr: 140013f70
// Size: 52 bytes


bool FUN_140013f70(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_3,param_2);
  return iVar1 == 0;
}

