// Function: FUN_1404c45f8
// Addr: 1404c45f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c45f8(char *param_1,longlong param_2)

{
  int in_EAX;
  uint uVar1;
  int unaff_EBX;
  byte *unaff_RSI;
  int *unaff_RDI;
  byte in_CF;
  char *pcVar2;
  
  *unaff_RDI = (*unaff_RDI - unaff_EBX) - (uint)in_CF;
  uVar1 = in_EAX + 0x6d340d00;
  pcVar2 = (char *)(ulonglong)uVar1;
  cRam00000001464cae06 = cRam00000001464cae06 + (char)param_1;
  *pcVar2 = *pcVar2 + (char)(uVar1 >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)uVar1 + (char)*(undefined4 *)pcVar2;
  unaff_RSI[param_2] = unaff_RSI[param_2] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

