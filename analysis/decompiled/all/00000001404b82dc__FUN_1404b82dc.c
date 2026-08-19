// Function: FUN_1404b82dc
// Addr: 1404b82dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b82dc(undefined1 param_1,char param_2)

{
  uint *in_RAX;
  ulonglong uVar1;
  int unaff_EDI;
  char *pcVar2;
  
  uVar1 = (ulonglong)((uint)in_RAX | *in_RAX);
  *(undefined1 *)(uVar1 * 2) = param_1;
  pcVar2 = (char *)(ulonglong)(uint)(unaff_EDI - *(int *)(uVar1 + 0xd));
  *pcVar2 = *pcVar2 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

