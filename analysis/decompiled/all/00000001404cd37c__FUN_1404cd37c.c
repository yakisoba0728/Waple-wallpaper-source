// Function: FUN_1404cd37c
// Addr: 1404cd37c
// Size: 1 bytes


void FUN_1404cd37c(byte param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  char unaff_BH;
  char *unaff_RDI;
  longlong unaff_R14;
  char *unaff_retaddr;
  undefined8 uStackX_8;
  
  *(char *)(unaff_R14 + -0x77ffbea8) = *(char *)(unaff_R14 + -0x77ffbea8) + (char)unaff_retaddr;
  pbVar1 = (byte *)((longlong)unaff_retaddr * 2 + 0x21);
  *pbVar1 = *pbVar1 >> (param_1 & 7) | *pbVar1 << 8 - (param_1 & 7);
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  cVar2 = (char)uStackX_8;
  *(char *)(unaff_R14 + -0x77ffbea8) = *(char *)(unaff_R14 + -0x77ffbea8) + cVar2;
  pbVar1 = (byte *)((longlong)uStackX_8 * 2 + 0x21);
  *pbVar1 = *pbVar1 >> (param_1 & 7) | *pbVar1 << 8 - (param_1 & 7);
  *param_2 = *param_2 + cVar2;
  *uStackX_8 = *uStackX_8 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

