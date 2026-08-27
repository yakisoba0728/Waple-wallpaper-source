// Function: FUN_1402e7350
// Addr: 1402e7350
// Size: 71 bytes


bool FUN_1402e7350(ulonglong param_1)

{
  BOOL BVar1;
  bool bVar2;
  int local_res8 [8];
  
  if (param_1 < 0x4001) {
    local_res8[0] = -1;
    BVar1 = HeapQueryInformation
                      (DAT_1404e4ed0,HeapCompatibilityInformation,local_res8,4,(PSIZE_T)0x0);
    bVar2 = false;
    if (BVar1 != 0) {
      bVar2 = local_res8[0] != 2;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

