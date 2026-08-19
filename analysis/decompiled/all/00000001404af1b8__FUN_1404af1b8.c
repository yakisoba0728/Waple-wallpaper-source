// Function: FUN_1404af1b8
// Addr: 1404af1b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af1b8(char *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  char cVar5;
  undefined8 in_RAX;
  undefined6 uVar6;
  int *piVar3;
  char *pcVar4;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar5 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  cVar1 = (char)in_RAX - *(char *)CONCAT62(uVar6,CONCAT11(cVar5,(char)in_RAX));
  piVar3 = (int *)CONCAT62(uVar6,CONCAT11(cVar5 + cVar1,cVar1));
  uVar2 = (int)piVar3 - *piVar3;
  cVar1 = (char)(uVar2 >> 8);
  (&stack0x00000000)[unaff_RBP] = (&stack0x00000000)[unaff_RBP] + cVar1;
  *(undefined1 *)(param_2 + -0x5d0cffed) = 0;
  *(char *)((ulonglong)uVar2 + 0x1004af0) = *(char *)((ulonglong)uVar2 + 0x1004af0) + cVar1;
  uVar2 = uVar2 | 0x340d0005;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 - *(char *)(ulonglong)uVar2) | 0x6001801;
  pcVar4 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)uVar2;
  *unaff_RDI = *unaff_RDI - (char)param_1;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  if (*pcVar4 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4[unaff_RBP * 2] = pcVar4[unaff_RBP * 2] + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

