// Function: FUN_1404a92a0
// Addr: 1404a92a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a92a0(longlong param_1,undefined2 param_2)

{
  char cVar1;
  char *in_RAX;
  undefined4 *unaff_RSI;
  
  cVar1 = (char)in_RAX;
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x21004a) = *(byte *)(param_1 + 0x21004a) ^ (byte)param_2;
    *in_RAX = *in_RAX + cVar1;
    *(char *)(param_1 + -0x7e1cfff4) = *(char *)(param_1 + -0x7e1cfff4) + '\f';
    *in_RAX = *in_RAX + (char)((ushort)param_2 >> 8);
    *(char *)((ulonglong)in_RAX & 0xffffffff) =
         *(char *)((ulonglong)in_RAX & 0xffffffff) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + cVar1;
  in_RAX[-0x1cfff391] = in_RAX[-0x1cfff391] + cVar1;
  out(*unaff_RSI,param_2);
  bRam000000001601004a = bRam000000001601004a ^ (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

