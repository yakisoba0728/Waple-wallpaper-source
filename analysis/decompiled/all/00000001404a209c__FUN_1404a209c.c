// Function: FUN_1404a209c
// Addr: 1404a209c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a20b7) overlaps instruction at (ram,0x0001404a20b5)
    */

void FUN_1404a209c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined8 in_RAX;
  char unaff_BH;
  char unaff_SPL;
  
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  cVar3 = in((short)param_2);
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + cVar3;
  *pcVar1 = *pcVar1 + cVar3;
  if (*pcVar1 == '\0') {
    pcVar1[0x210049ec] = pcVar1[0x210049ec] + unaff_BH;
  }
  else {
    pcVar1[0x790004b8] = pcVar1[0x790004b8] + cVar2;
    *param_4 = *param_4 + unaff_SPL;
  }
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1[0x790004b8] = pcVar1[0x790004b8] + cVar2;
  *param_4 = *param_4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

