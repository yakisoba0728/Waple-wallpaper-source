// Function: FUN_1404c0808
// Addr: 1404c0808
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0808(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar3;
  char *in_RAX;
  char *pcVar2;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[0x5e] = in_RAX[0x5e] + cVar3;
  *in_RAX = *in_RAX - (char)in_RAX;
  cVar1 = cRam21004b17d800285e;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam21004b17d800285e);
  *(char *)((longlong)pcVar2 * 2) = *(char *)((longlong)pcVar2 * 2) + cRam21004b17d800285e;
  pcVar2[unaff_RDI] = pcVar2[unaff_RDI] + (char)param_2;
  pcVar2[unaff_RSI] = pcVar2[unaff_RSI] + (char)((ulonglong)param_2 >> 8);
  pcVar2[0x5e] = pcVar2[0x5e] + cVar3;
  *pcVar2 = *pcVar2 - cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

