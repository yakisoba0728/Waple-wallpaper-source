// Function: FUN_1404cdc34
// Addr: 1404cdc34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdc34(byte *param_1,byte param_2)

{
  char *pcVar1;
  byte bVar2;
  double dVar3;
  int in_EAX;
  char *pcVar4;
  longlong unaff_RBX;
  longlong unaff_GS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  
  dVar3 = *(double *)(unaff_GS_OFFSET + 0x18d27d03b);
  bVar2 = *param_1;
  *param_1 = *param_1 + param_2;
  *(uint *)param_1 = *(int *)param_1 + (int)param_1 + (uint)CARRY1(bVar2,param_2);
  *param_1 = *param_1 + param_2;
  uRamc007d009e00bf00d = (undefined1)in_EAX;
  pcVar4 = (char *)(ulonglong)(in_EAX + 0x3600470U);
  *pcVar4 = *pcVar4 + (char)(in_EAX + 0x3600470U);
  pcVar1 = (char *)(unaff_RBX * 9 + -0x6ad7ffb4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(int *)((longlong)pcVar4 * 2 + -100) = (int)(in_ST0 / (float10)dVar3);
  *(int *)((longlong)pcVar4 * 2 + 2) = (int)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

