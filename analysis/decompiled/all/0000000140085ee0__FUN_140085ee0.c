// Function: FUN_140085ee0
// Addr: 140085ee0
// Size: 139 bytes


uint FUN_140085ee0(double *param_1)

{
  char cVar1;
  undefined1 local_f8 [248];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    return *(uint *)param_1;
  }
  if (cVar1 == '\x03') {
    return (int)*param_1;
  }
  if (cVar1 == '\x05') {
    return (uint)(*(char *)param_1 != '\0');
  }
  FUN_140089050(local_f8);
  FUN_14000c990(local_f8,"Value is not convertible to Int.");
  FID_conflict__assert
            (L"false && oss.str().c_str()",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
             0x2cf);
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

