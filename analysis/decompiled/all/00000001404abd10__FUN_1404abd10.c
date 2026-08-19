// Function: FUN_1404abd10
// Addr: 1404abd10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abd10(char *param_1,char param_2)

{
  undefined2 uVar1;
  char *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  bool in_CF;
  
  if (in_CF) {
    uVar1 = TaskRegister();
    *(undefined2 *)(&stack0x00000000 + unaff_RDI * 4) = uVar1;
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    *(char *)(unaff_RBP + 0x73000f93) = *(char *)(unaff_RBP + 0x73000f93) + param_2;
    uVar1 = TaskRegister();
    *(undefined2 *)(((ulonglong)in_RAX & 0xffffffff) + unaff_RDI * 4) = uVar1;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX & 0xffffffff);
    *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff) =
         *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
    *(char *)(unaff_RBX + -0x6afff06d) = *(char *)(unaff_RBX + -0x6afff06d) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  *in_RAX = *in_RAX + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

