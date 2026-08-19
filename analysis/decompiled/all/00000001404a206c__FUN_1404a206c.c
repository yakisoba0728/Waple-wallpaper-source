// Function: FUN_1404a206c
// Addr: 1404a206c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a20b7) overlaps instruction at (ram,0x0001404a20b5)
    */

void FUN_1404a206c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  char *in_RAX;
  char unaff_SPL;
  bool in_SF;
  char *pcVar3;
  
  if (!in_SF) {
    *param_1 = *param_1 + unaff_SPL;
    *param_2 = *param_2 + (char)in_RAX;
    *in_RAX = *in_RAX + (char)in_RAX;
    in_RAX = (char *)((ulonglong)in_RAX ^ 8);
    in_RAX[0x690004b6] = in_RAX[0x690004b6] + (char)param_2;
    in_RAX[0x1f] = in_RAX[0x1f] + '\x04';
    *param_1 = *param_1 + unaff_SPL;
    *in_RAX = *in_RAX + (char)in_RAX;
    in_RAX[0x690004b6] = in_RAX[0x690004b6] + (char)param_2;
  }
  in_RAX[0x1f] = in_RAX[0x1f] + '\x04';
  *param_1 = *param_1 + unaff_SPL;
  uVar2 = (int)in_RAX + 0x74050002;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  cVar1 = in((short)param_2);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  cVar4 = (char)(uVar2 >> 8);
  if (*pcVar3 == '\0') {
    pcVar3[0x210049ec] = pcVar3[0x210049ec] + '\x04';
  }
  else {
    pcVar3[0x790004b8] = pcVar3[0x790004b8] + cVar4;
    *param_4 = *param_4 + unaff_SPL;
  }
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[0x790004b8] = pcVar3[0x790004b8] + cVar4;
  *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

