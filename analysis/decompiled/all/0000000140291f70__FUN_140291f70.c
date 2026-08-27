// Function: FUN_140291f70
// Addr: 140291f70
// Size: 53 bytes


int FUN_140291f70(WCHAR param_1)

{
  BOOL BVar1;
  WCHAR local_res8 [8];
  WORD local_res18 [8];
  
  local_res8[0] = param_1;
  BVar1 = GetStringTypeW(1,local_res8,1,local_res18);
  if (BVar1 == 0) {
    return 0;
  }
  return (int)(short)local_res18[0];
}

