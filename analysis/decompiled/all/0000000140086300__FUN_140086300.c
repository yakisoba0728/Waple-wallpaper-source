// Function: FUN_140086300
// Addr: 140086300
// Size: 157 bytes


undefined1 FUN_140086300(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 local_f8 [248];
  
  cVar1 = (char)param_1[1];
  if (cVar1 == '\0') {
    return false;
  }
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    return *param_1 != 0;
  }
  if (cVar1 == '\x03') {
    uVar2 = thunk_FUN_1402e7cc0(*param_1);
    return (uVar2 & 0xfffd) != 0;
  }
  if (cVar1 == '\x05') {
    return (char)*param_1;
  }
  FUN_140089050(local_f8);
  FUN_14000c990(local_f8,"Value is not convertible to bool.");
  FID_conflict__assert
            (L"false && oss.str().c_str()",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
             0x369);
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

