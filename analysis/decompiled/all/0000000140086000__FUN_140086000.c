// Function: FUN_140086000
// Addr: 140086000
// Size: 187 bytes


double FUN_140086000(double *param_1)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  undefined1 local_f8 [248];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return 0.0;
  }
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    return *param_1;
  }
  if (cVar1 == '\x03') {
    dVar3 = *param_1;
    lVar2 = 0;
    if ((DAT_140492920 <= dVar3) && (dVar3 = dVar3 - DAT_140492920, dVar3 < DAT_140492920)) {
      lVar2 = -0x8000000000000000;
    }
    return (double)((longlong)dVar3 + lVar2);
  }
  if (cVar1 == '\x05') {
    return (double)(ulonglong)(*(char *)param_1 != '\0');
  }
  FUN_140089050(local_f8);
  FUN_14000c990(local_f8,"Value is not convertible to UInt64.");
  FID_conflict__assert
            (L"false && oss.str().c_str()",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
             0x316);
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

