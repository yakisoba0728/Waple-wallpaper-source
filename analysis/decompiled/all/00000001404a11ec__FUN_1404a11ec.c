// Function: FUN_1404a11ec
// Addr: 1404a11ec
// Size: 1 bytes


int FUN_1404a11ec(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(char *)((longlong)in_RAX + param_2) =
       *(char *)((longlong)in_RAX + param_2) + (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)in_RAX + -0x5d) = *(char *)((longlong)in_RAX + -0x5d) + (char)in_RAX;
  uRam0521004a10c80003 = (int)in_RAX + *in_RAX;
  out(*unaff_RSI,(short)param_2);
  uVar1 = CONCAT31((int3)(uRam0521004a10c80003 >> 8),
                   (char)uRam0521004a10c80003 + *(char *)(ulonglong)uRam0521004a10c80003) +
          0xa0000674;
  *unaff_RDI = unaff_RSI[1];
  return uVar1 + *(int *)(ulonglong)uVar1;
}

