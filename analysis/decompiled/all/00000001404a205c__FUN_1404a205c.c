// Function: FUN_1404a205c
// Addr: 1404a205c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a20b7) overlaps instruction at (ram,0x0001404a20b5)
    */

void FUN_1404a205c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char cVar5;
  byte *in_RAX;
  undefined6 uVar6;
  char unaff_SPL;
  char *pcVar4;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  uRam00000001744f2064 = uRam00000001744f2064 & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar1;
  param_1[-0x49] = param_1[-0x49] + (char)((ulonglong)param_1 >> 8);
  if (-1 < (char)bVar1) {
    *param_1 = *param_1 + unaff_SPL;
    *(byte *)CONCAT62(uVar6,CONCAT11(4,cVar5)) = *(char *)CONCAT62(uVar6,CONCAT11(4,cVar5)) + bVar1;
    *in_RAX = *in_RAX + bVar1;
    in_RAX = (byte *)((ulonglong)in_RAX ^ 8);
    in_RAX[0x690004b6] = in_RAX[0x690004b6] + cVar5;
    in_RAX[0x1f] = in_RAX[0x1f] + 4;
    *param_1 = *param_1 + unaff_SPL;
    *in_RAX = *in_RAX + (char)in_RAX;
    in_RAX[0x690004b6] = in_RAX[0x690004b6] + cVar5;
  }
  in_RAX[0x1f] = in_RAX[0x1f] + 4;
  *param_1 = *param_1 + unaff_SPL;
  uVar3 = (int)in_RAX + 0x74050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  cVar2 = in(CONCAT11(4,cVar5));
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(uVar6,CONCAT11(4,cVar5)) = *(char *)CONCAT62(uVar6,CONCAT11(4,cVar5)) + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  cVar5 = (char)(uVar3 >> 8);
  if (*pcVar4 == '\0') {
    pcVar4[0x210049ec] = pcVar4[0x210049ec] + '\x04';
  }
  else {
    pcVar4[0x790004b8] = pcVar4[0x790004b8] + cVar5;
    *param_4 = *param_4 + unaff_SPL;
  }
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[0x790004b8] = pcVar4[0x790004b8] + cVar5;
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

