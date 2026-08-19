// Function: FUN_1404abe74
// Addr: 1404abe74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abe74(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  longlong in_RAX;
  char *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  char *pcVar2;
  longlong unaff_RDI;
  
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + -0x66) = *(char *)(in_RAX + -0x66) + (char)in_RAX;
  uVar1 = TaskRegister();
  *(undefined2 *)(unaff_RBP + 0x68000f9a) = uVar1;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  if (param_1 == 1 || *unaff_RBX == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(ulonglong)(unaff_ESI | *(uint *)(unaff_RDI + param_2));
  *pcVar2 = *pcVar2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

