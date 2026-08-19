// Function: FUN_1404a0a4c
// Addr: 1404a0a4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0ad2) overlaps instruction at (ram,0x0001404a0acf)
    */

void FUN_1404a0a4c(char *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  int *in_RAX;
  ulonglong uVar4;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint *puVar3;
  
  uVar2 = (int)in_RAX + *in_RAX;
  puVar3 = (uint *)(ulonglong)uVar2;
  *param_2 = *param_2 | (uint)param_1;
  *puVar3 = *puVar3 & uVar2;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((char)(uVar2 >> 8) * '\x02' + (char)param_2,(byte)uVar2 | (byte)*puVar3)
                  ) + 0xdc40000;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(0x6f,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(0x6f,unaff_BL))] + (char)param_2;
  uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uRam1000036f5e00036e);
  *(char *)(unaff_RDI + uVar4) = *(char *)(unaff_RDI + uVar4) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + uVar4) = *(char *)(unaff_RSI + uVar4) + (char)(uVar2 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x6f,unaff_BL)) + uVar4);
  *pcVar1 = '\0';
  if (*pcVar1 == '\0') {
    *param_1 = *param_1 + unaff_SPL;
  }
  *(char *)(uVar4 + 0x21004a09) = *(char *)(uVar4 + 0x21004a09) + 'o';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

