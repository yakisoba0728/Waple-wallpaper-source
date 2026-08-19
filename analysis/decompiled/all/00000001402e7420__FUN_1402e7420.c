// Function: FUN_1402e7420
// Addr: 1402e7420
// Size: 71 bytes


bool FUN_1402e7420(ulonglong param_1)

{
  int iVar1;
  bool bVar2;
  int local_res8 [8];
  
  if (param_1 < 0x4001) {
    local_res8[0] = -1;
    iVar1 = (*DAT_1404263c8)(DAT_1404e4fa0,0,local_res8,4,0);
    bVar2 = false;
    if (iVar1 != 0) {
      bVar2 = local_res8[0] != 2;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

