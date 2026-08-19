// Function: FUN_1404bd0fc
// Addr: 1404bd0fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd0fc(undefined1 *param_1,char *param_2)

{
  char *pcVar1;
  uint in_EAX;
  char unaff_BL;
  longlong unaff_RDI;
  byte in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    pcVar1 = (char *)((ulonglong)(in_EAX + 0x16986a00 + (uint)in_CF) - 0x78);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RDI + 0x21004b + (longlong)param_1 * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(undefined1 *)(ulonglong)(in_EAX & 0x25066700) = *(undefined1 *)(ulonglong)(in_EAX & 0x25066700);
  *param_1 = *param_1;
  iRam00000001784ce1c7 = iRam00000001784ce1c7 + (in_EAX & 0x1060400);
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

