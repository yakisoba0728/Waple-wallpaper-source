// Function: FUN_1404c7d2c
// Addr: 1404c7d2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7d2c(char *param_1,byte *param_2)

{
  byte bVar1;
  char cVar3;
  undefined8 in_RAX;
  char *pcVar2;
  byte *unaff_RSI;
  char in_SF;
  char in_OF;
  
  bVar1 = bRam44003070d0003070;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam44003070d0003070);
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  if (in_OF == in_SF) {
    *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar2 = *pcVar2 + cVar3;
  *unaff_RSI = *unaff_RSI >> 1;
  pcVar2[0x21000000] = pcVar2[0x21000000] + (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 | bVar1;
  *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

