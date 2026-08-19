// Function: FUN_1404d0ea8
// Addr: 1404d0ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0ea8(undefined8 param_1,undefined1 *param_2,char param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  char *unaff_RDI;
  char unaff_R12B;
  
  uVar1 = in_EAX | 0x5000678;
  *param_2 = *param_2;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *param_4 = *param_4 + param_3;
  *unaff_RDI = *unaff_RDI + '\a';
  bRam00000000c059003a = bRam00000000c059003a >> 7 | bRam00000000c059003a << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

