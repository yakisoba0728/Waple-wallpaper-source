// Function: FUN_1404cd988
// Addr: 1404cd988
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd988(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  char *in_RAX;
  char *pcVar3;
  char unaff_BPL;
  longlong unaff_R13;
  char in_CF;
  
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX + (in_CF == '\0')) +
          0x14640400;
  pcVar3 = (char *)(ulonglong)uVar1;
  cVar2 = (char)uVar1;
  pcVar3[0x76] = pcVar3[0x76] + cVar2;
  *(char *)(unaff_R13 + 0x76) = *(char *)(unaff_R13 + 0x76) + (char)param_2;
  *(char *)(param_3 + 0x21004cd8) = *(char *)(param_3 + 0x21004cd8) + unaff_BPL;
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3[0x76] = pcVar3[0x76] + cVar2;
  *(char *)(unaff_R13 + 0x76) = *(char *)(unaff_R13 + 0x76) + (char)param_2;
  *(char *)(param_3 + 0x1004cd8) = *(char *)(param_3 + 0x1004cd8) + unaff_BPL;
  pcVar3 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),0xf) + -0x53fff998);
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

