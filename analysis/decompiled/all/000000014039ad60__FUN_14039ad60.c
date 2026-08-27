// Function: FUN_14039ad60
// Addr: 14039ad60
// Size: 63 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14039ad60(undefined8 param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  
  if ((param_2 == 0x68617363) || (param_2 == 0x76617363)) {
    param_1 = CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_140492fc4,
                       (uint)(float)param_1 & _DAT_140492fc0);
  }
  else if ((param_2 == 0x68647363) || (param_2 == 0x76647363)) {
    dVar1 = (double)(float)param_1;
    uVar2 = (uint)((ulonglong)dVar1 >> 0x20) & _UNK_140492fd4 ^ DAT_140492fe0._4_4_;
    return CONCAT44(uVar2,(float)(double)CONCAT44(uVar2,SUB84(dVar1,0) & _DAT_140492fd0 ^
                                                        (uint)DAT_140492fe0));
  }
  return param_1;
}

