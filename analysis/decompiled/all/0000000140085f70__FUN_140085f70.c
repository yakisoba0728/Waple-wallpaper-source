// Function: FUN_140085f70
// Addr: 140085f70
// Size: 140 bytes


ulonglong FUN_140085f70(double *param_1)

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
  FUN_140089050(local_f8);
  FUN_14000c990(local_f8,"Value is not convertible to UInt.");
  FID_conflict__assert
            (L"false && oss.str().c_str()",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
             0x2e5);
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

