// Function: FUN_1404a6708
// Addr: 1404a6708
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6708(char *param_1,char *param_2)

{
  char cVar1;
  char *in_RAX;
  uint *puVar2;
  longlong unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  
  *(int *)(unaff_RBX + -0x7c5bfff7) = *(int *)(unaff_RBX + -0x7c5bfff7) + 9;
  cVar1 = (char)in_RAX;
  *unaff_RSI = *unaff_RSI + cVar1;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + cVar1;
  *in_RAX = *in_RAX + cVar1;
  puVar2 = (uint *)((ulonglong)in_RAX ^ 0x32);
  *(char *)((longlong)puVar2 + -0x7d) = *(char *)((longlong)puVar2 + -0x7d) + (char)param_2;
  *puVar2 = *puVar2 | (uint)puVar2;
  *(int *)(unaff_RBX + 0x65f40009) = *(int *)(unaff_RBX + 0x65f40009) + 0x4a;
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)puVar2;
  *(char *)((longlong)puVar2 + -0x7d) = *(char *)((longlong)puVar2 + -0x7d) + (char)param_2;
  *puVar2 = *puVar2 | (uint)puVar2;
  *(int *)(unaff_RBX + 0x65f40009) = *(int *)(unaff_RBX + 0x65f40009) + 0x4a;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

