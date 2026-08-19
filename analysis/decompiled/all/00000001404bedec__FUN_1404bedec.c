// Function: FUN_1404bedec
// Addr: 1404bedec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bedec(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint *in_RAX;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  ulonglong unaff_RSI;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  bVar3 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(unaff_RSI - 0x698bffda) = *(byte *)(unaff_RSI - 0x698bffda) & bVar3;
  pcVar1 = (char *)((longlong)in_RAX + unaff_RSI * 8 + 0x210049);
  *pcVar1 = *pcVar1 + bVar3;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  pcVar2[param_1] = pcVar2[param_1] + cVar4;
  *pcVar2 = *pcVar2 + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(((ulonglong)pcVar2 & 0xffffffff) + 0x26 + param_2 * 4);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)((unaff_RSI & 0xffffffff) + 0x210049 + ((ulonglong)pcVar2 & 0xffffffff) * 8);
  *pcVar1 = *pcVar1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

