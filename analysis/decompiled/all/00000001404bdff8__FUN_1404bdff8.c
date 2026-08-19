// Function: FUN_1404bdff8
// Addr: 1404bdff8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdff8(undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong in_RAX;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  short *unaff_RBX;
  longlong unaff_RBP;
  float10 in_ST0;
  uint *puVar3;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  *(char *)(in_RAX + -0x5760ffdb) = (char)((ulonglong)param_1 >> 8);
  uVar2 = (uint)in_RAX & 0x4bdf0000;
  puVar3 = (uint *)(ulonglong)uVar2;
  *param_1 = *param_1;
  *(char *)puVar3 = (char)*puVar3;
  *(char *)(puVar3 + -0x183ff696) = (char)puVar3[-0x183ff696] + (char)param_1;
  *(char *)puVar3 = (char)*puVar3;
  *unaff_RBX = (short)in_ST0;
  *puVar3 = *puVar3 & uVar2;
  *(char *)puVar3 = (char)*puVar3;
  *(char *)((longlong)puVar3 + -0x5777ffdb) = *(char *)((longlong)puVar3 + -0x5777ffdb) + -0x25;
  pcVar1 = (char *)(unaff_RBP + 0x21004b + (longlong)puVar3);
  *pcVar1 = *pcVar1 + cVar5;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar5,(char)*puVar3));
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  uVar4 = (ulonglong)uVar2;
  param_1[param_2] = param_1[param_2] + cVar6;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)(uVar2 >> 8);
  param_1[uVar4] = param_1[uVar4] + cVar6;
  *(char *)(uVar4 - 0x77ffda58) = *(char *)(uVar4 - 0x77ffda58) + (char)uVar2;
  pcVar1 = (char *)(unaff_RBP + 0x1a21004b + uVar4);
  *pcVar1 = *pcVar1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

