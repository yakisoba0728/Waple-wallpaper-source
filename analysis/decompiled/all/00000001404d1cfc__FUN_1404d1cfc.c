// Function: FUN_1404d1cfc
// Addr: 1404d1cfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1cfc(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  ulonglong uVar3;
  char cVar4;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  char *pcVar2;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  cVar1 = (char)in_RAX;
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF,
                                     cVar1));
  pcVar2[0x210049ed] = pcVar2[0x210049ed] + cVar4;
  *param_2 = *param_2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  uVar3 = CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1) ^ 6;
  *(char *)(uVar3 - 0x60ffca4f) = *(char *)(uVar3 - 0x60ffca4f) + (char)uVar3;
  *(char *)(uVar3 + 0x210049ed) = *(char *)(uVar3 + 0x210049ed) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

