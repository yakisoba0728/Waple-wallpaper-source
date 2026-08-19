// Function: FUN_1404a207c
// Addr: 1404a207c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a20b7) overlaps instruction at (ram,0x0001404a20b5)
    */

void FUN_1404a207c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  char unaff_BH;
  char unaff_SPL;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar4 = (undefined1)param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  param_1[-0x49] = param_1[-0x49] + (char)((ulonglong)param_1 >> 8);
  if ((char)in_RAX < '\0') {
    pcVar3 = (char *)0x210049ec;
  }
  else {
    *param_1 = *param_1 + unaff_SPL;
    uVar2 = (int)in_RAX + 0x74050002;
    *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
    cVar1 = in(CONCAT11(4,uVar4));
    pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
    *param_4 = *param_4 + unaff_SPL;
    *(char *)CONCAT62(uVar5,CONCAT11(4,uVar4)) = *(char *)CONCAT62(uVar5,CONCAT11(4,uVar4)) + cVar1;
    *pcVar3 = *pcVar3 + cVar1;
    if (*pcVar3 == '\0') {
      pcVar3[0x210049ec] = pcVar3[0x210049ec] + unaff_BH;
    }
    else {
      pcVar3[0x790004b8] = pcVar3[0x790004b8] + (char)(uVar2 >> 8);
      *param_4 = *param_4 + unaff_SPL;
    }
  }
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar3[0x790004b8] = pcVar3[0x790004b8] + (char)((ulonglong)pcVar3 >> 8);
  *param_4 = *param_4 + (char)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

