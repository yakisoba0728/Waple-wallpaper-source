// Function: FUN_1402c83d4
// Addr: 1402c83d4
// Size: 113 bytes


longlong FUN_1402c83d4(longlong *param_1)

{
  longlong lVar1;
  _FILETIME local_res8 [4];
  
  local_res8[0].dwLowDateTime = 0;
  local_res8[0].dwHighDateTime = 0;
  GetSystemTimeAsFileTime(local_res8);
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) *
                 SEXT816((longlong)local_res8[0] + -0x19db1ded53e8000),8) +
          (longlong)local_res8[0] + -0x19db1ded53e8000;
  lVar1 = (lVar1 >> 0x17) - (lVar1 >> 0x3f);
  if (0x793582aff < lVar1) {
    lVar1 = -1;
  }
  if (param_1 != (longlong *)0x0) {
    *param_1 = lVar1;
  }
  return lVar1;
}

