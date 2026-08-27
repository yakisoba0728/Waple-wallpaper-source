// Function: FUN_140086220
// Addr: 140086220
// Size: 209 bytes


float FUN_140086220(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 local_f8 [248];
  
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
      FUN_140089050(local_f8);
      FUN_14000c990(local_f8,"Value is not convertible to float.");
      FID_conflict__assert
                (L"false && oss.str().c_str()",
                 L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x354);
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
    if (*(char *)param_1 != '\0') {
      return DAT_140492704;
    }
  }
  return 0.0;
}

