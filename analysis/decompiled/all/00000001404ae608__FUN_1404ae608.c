// Function: FUN_1404ae608
// Addr: 1404ae608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae608(char *param_1,char param_2)

{
  char cVar1;
  int *in_RAX;
  ulonglong unaff_RSI;
  char *pcVar3;
  longlong unaff_RDI;
  byte in_CF;
  bool in_OF;
  char *pcVar2;
  
  if (!in_OF) {
    pcVar2 = (char *)(unaff_RSI & 0xffffffff);
    pcVar3 = (char *)(ulonglong)((int)in_RAX + *in_RAX + (uint)in_CF);
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - (char)pcVar2;
    *param_1 = *param_1 + (char)((ulonglong)pcVar2 >> 8);
    *pcVar3 = *pcVar3 + (char)param_1;
    *pcVar2 = *pcVar2 + (char)pcVar2;
    cVar1 = in(7);
    pcVar2 = (char *)CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1);
    *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + 0x28001344) = *(char *)(unaff_RSI + 0x28001344) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

