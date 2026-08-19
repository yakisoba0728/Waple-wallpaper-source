// Function: FUN_1404ae920
// Addr: 1404ae920
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae920(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  uVar1 = (in_EAX ^ 0xe6) + 0x64050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  *(undefined1 *)(param_2 + 0x13) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

