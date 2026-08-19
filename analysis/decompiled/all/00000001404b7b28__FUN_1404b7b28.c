// Function: FUN_1404b7b28
// Addr: 1404b7b28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7b28(char *param_1,char *param_2)

{
  uint uVar1;
  char *in_RAX;
  longlong unaff_RBP;
  undefined2 in_DS;
  
  uRam00000001406c7b78 = in_DS;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(byte *)(unaff_RBP + -0x5aa4ffe3) =
       *(byte *)(unaff_RBP + -0x5aa4ffe3) & (byte)((ulonglong)in_RAX >> 8);
  uVar1 = (int)in_RAX + 0xb5e27400;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *param_2 = *param_2 + (char)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

