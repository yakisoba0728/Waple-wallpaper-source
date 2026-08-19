// Function: FUN_1400862f0
// Addr: 1400862f0
// Size: 1 bytes


float FUN_1400862f0(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 auStack_f8 [248];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return (float)(longlong)*param_1;
    }
    if (cVar1 == '\x02') {
      dVar2 = *param_1;
      if (-1 < (longlong)dVar2) {
        return (float)(longlong)dVar2;
      }
      return (float)(ulonglong)dVar2;
    }
    if (cVar1 == '\x03') {
      return (float)*param_1;
    }
    if (cVar1 != '\x05') {
      FUN_140089120(auStack_f8);
      FUN_14000ca60(auStack_f8,"Value is not convertible to float.");
      func_0x0001402cba34(L"false && oss.str().c_str()",
                          L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x354);
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
    if (*(char *)param_1 != '\0') {
      return DAT_1404927d4;
    }
  }
  return 0.0;
}

