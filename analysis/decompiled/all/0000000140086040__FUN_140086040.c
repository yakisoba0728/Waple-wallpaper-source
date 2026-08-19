// Function: FUN_140086040
// Addr: 140086040
// Size: 123 bytes


ulonglong FUN_140086040(double *param_1)

{
  char cVar1;
  undefined1 local_f8 [248];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    return (ulonglong)*(uint *)param_1;
  }
  if (cVar1 == '\x03') {
    return (longlong)*param_1;
  }
  if (cVar1 == '\x05') {
    return (ulonglong)(*(char *)param_1 != '\0');
  }
  FUN_140089120(local_f8);
  FUN_14000ca60(local_f8,"Value is not convertible to UInt.");
  func_0x0001402cba34(L"false && oss.str().c_str()",
                      L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x2e5);
                    /* WARNING: Subroutine does not return */
  FUN_1402c98b4();
}

