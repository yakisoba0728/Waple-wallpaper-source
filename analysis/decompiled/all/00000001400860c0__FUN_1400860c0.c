// Function: FUN_1400860c0
// Addr: 1400860c0
// Size: 141 bytes


double FUN_1400860c0(double *param_1)

{
  char cVar1;
  undefined1 local_f8 [248];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return 0.0;
  }
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    return *param_1;
  }
  if (cVar1 == '\x03') {
    return (double)(longlong)*param_1;
  }
  if (cVar1 == '\x05') {
    return (double)(ulonglong)(*(char *)param_1 != '\0');
  }
  FUN_140089050(local_f8);
  FUN_14000c990(local_f8,"Value is not convertible to Int64.");
  FID_conflict__assert
            (L"false && oss.str().c_str()",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
             0x301);
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

