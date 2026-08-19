// Function: FUN_1404b033c
// Addr: 1404b033c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b033c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *in_RAX;
  char cVar2;
  undefined6 uVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  byte in_CF;
  bool in_PF;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)((ulonglong)param_2 >> 8);
  if (!in_PF) {
    *param_1 = *param_1 + (char)((int)in_RAX + 0x49ecb800 + (uint)in_CF >> 8);
    pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + cVar2;
  cRam0000000155754473 = (char)param_2 - cRam0000000155754473;
  in_RAX[0x21004afd] = in_RAX[0x21004afd] + (char)param_1;
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cRam0000000155754473)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cRam0000000155754473)) + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

