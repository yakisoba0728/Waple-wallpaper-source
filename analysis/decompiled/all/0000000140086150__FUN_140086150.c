// Function: FUN_140086150
// Addr: 140086150
// Size: 205 bytes


double FUN_140086150(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 local_f8 [248];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return (double)(longlong)*param_1;
    }
    if (cVar1 == '\x02') {
      dVar2 = *param_1;
      if (-1 < (longlong)dVar2) {
        return (double)(longlong)dVar2;
      }
      return (double)(ulonglong)dVar2;
    }
    if (cVar1 == '\x03') {
      return *param_1;
    }
    if (cVar1 != '\x05') {
      FUN_140089050(local_f8);
      FUN_14000c990(local_f8,"Value is not convertible to double.");
      FID_conflict__assert
                (L"false && oss.str().c_str()",
                 L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x33d);
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
    if (*(char *)param_1 != '\0') {
      return DAT_140492778;
    }
  }
  return 0.0;
}

