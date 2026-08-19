// Function: FUN_1404d4328
// Addr: 1404d4328
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4328(char *param_1,undefined2 param_2)

{
  uint *in_RAX;
  byte bVar1;
  undefined4 *unaff_RSI;
  bool in_OF;
  
  out(*unaff_RSI,param_2);
  bVar1 = (byte)((ushort)param_2 >> 8);
  if (!in_OF) {
    *(byte *)in_RAX = (char)*in_RAX + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & (uint)param_1;
  *(char *)((longlong)unaff_RSI + 0x41) = *(char *)((longlong)unaff_RSI + 0x41) + (char)param_2;
  *param_1 = *param_1 + ((byte)((ulonglong)in_RAX >> 8) | bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

