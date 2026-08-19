// Function: FUN_1404beef8
// Addr: 1404beef8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beef8(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar6;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar5;
  
  *(char *)(unaff_RDI + -0x27ffd964) = *(char *)(unaff_RDI + -0x27ffd964) + unaff_BL;
  cVar2 = (char)in_RAX;
  if (param_1 + -1 != 0) {
    out((short)param_2,(int)in_RAX);
    *param_4 = *param_4 + -0x10;
    *in_RAX = *in_RAX + (char)(param_1 + -1);
    *in_RAX = *in_RAX + cVar2;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI + cVar2;
  *in_RAX = *in_RAX + cVar2;
  cVar2 = in(0xc);
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *pcVar6 = *pcVar6 + cVar2;
  uVar4 = (uint)pcVar6 | *(uint *)(pcVar6 + in_FS_OFFSET);
  pbVar5 = (byte *)(ulonglong)uVar4;
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
  pbVar5[-100] = pbVar5[-100] + (char)param_2;
  *(char *)(unaff_RDI + -0x27ffd964) = *(char *)(unaff_RDI + -0x27ffd964) + unaff_BL;
  pcVar6 = (char *)(param_1 + -2);
  bVar3 = (byte)uVar4;
  if (pcVar6 == (char *)0x0) {
    *pbVar5 = *pbVar5 | bVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar1 = (char *)(unaff_RDI + 0x49 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)pcVar6;
  *pcVar6 = *pcVar6 + bVar3;
  unaff_RSI[(longlong)param_2] = unaff_RSI[(longlong)param_2] + (char)pcVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

