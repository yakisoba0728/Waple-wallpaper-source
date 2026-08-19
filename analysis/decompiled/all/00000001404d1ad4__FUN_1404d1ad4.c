// Function: FUN_1404d1ad4
// Addr: 1404d1ad4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1ad4(undefined8 param_1)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  byte *pbVar3;
  char unaff_BL;
  uint unaff_ESP;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar4;
  
  cVar1 = *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x11);
  *unaff_RSI = *unaff_RSI + unaff_BL;
  bVar4 = CARRY4(uRam00000001563d31df,unaff_ESP);
  uRam00000001563d31df = uRam00000001563d31df + unaff_ESP;
  pbVar3 = (byte *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((char)((ulonglong)param_1 >> 8) - cVar1,(char)param_1)) + -1);
  if (pbVar3 == (byte *)0x0 || uRam00000001563d31df == 0) {
    *pbVar3 = *pbVar3 << 1 | bVar4;
    *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = in_AL + 0x60;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ bVar2;
  *pbVar3 = *pbVar3 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

