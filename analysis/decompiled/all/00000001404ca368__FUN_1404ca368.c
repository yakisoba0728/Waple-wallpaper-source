// Function: FUN_1404ca368
// Addr: 1404ca368
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca368(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char in_AL;
  byte bVar3;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  char *pcVar5;
  
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  cRam540800020821004c = in_AL;
  bVar3 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_CF;
  param_1 = param_1 + -1;
  if (param_1 == 0 || bVar3 != 0) {
    bVar3 = bVar3 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + 0x21004ca2);
    *pcVar1 = *pcVar1 + bVar3;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + bVar3;
    cVar4 = in_AH + '2';
    pcVar5 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar4);
    *(char *)(unaff_RSI + -0x4f) = *(char *)(unaff_RSI + -0x4f) + cVar4;
    *(undefined1 *)(param_2 + 0x21004c) = 0;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x1effcd50);
    *pcVar1 = *pcVar1 + unaff_BH;
    *(char *)(param_2 + 0x4c) = *(char *)(param_2 + 0x4c) + (char)((ulonglong)param_1 >> 8);
    *pcVar5 = *pcVar5 + in_AH;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + cVar4;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + '2';
    cVar4 = in(8);
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

