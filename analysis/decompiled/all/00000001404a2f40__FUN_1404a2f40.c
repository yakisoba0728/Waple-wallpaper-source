// Function: FUN_1404a2f40
// Addr: 1404a2f40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2f40(int param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *in_RAX;
  uint uVar2;
  char unaff_SPL;
  byte in_CF;
  
  uVar2 = (param_1 - in_RAX[0x1e04800c]) - (uint)in_CF;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  *(byte *)((longlong)in_RAX + 0x32) = *(byte *)((longlong)in_RAX + 0x32) | (byte)(uVar2 >> 8);
  *(char *)((longlong)in_RAX + -0x79) =
       *(char *)((longlong)in_RAX + -0x79) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((ulonglong)((uint)in_RAX + 0x588b100) + 0x2e);
  *pcVar1 = *pcVar1 + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

