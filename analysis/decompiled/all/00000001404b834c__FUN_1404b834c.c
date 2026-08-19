// Function: FUN_1404b834c
// Addr: 1404b834c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b834c(undefined1 param_1)

{
  uint *in_RAX;
  char unaff_BL;
  uint unaff_EDI;
  char *pcVar1;
  
  *(undefined1 *)((longlong)in_RAX * 2) = param_1;
  pcVar1 = (char *)(ulonglong)(unaff_EDI & *(uint *)((longlong)in_RAX + 0xd));
  *pcVar1 = *pcVar1 + unaff_BL;
  *in_RAX = *in_RAX & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

