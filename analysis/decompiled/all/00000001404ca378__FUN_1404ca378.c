// Function: FUN_1404ca378
// Addr: 1404ca378
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca378(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004ca2);
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar2 = in_AH + '2';
  *(char *)(unaff_RSI + -0x4f) = *(char *)(unaff_RSI + -0x4f) + cVar2;
  *(undefined1 *)(param_2 + 0x21004c) = 0;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x1effcd50);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(param_2 + 0x4c) = *(char *)(param_2 + 0x4c) + cVar3;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + cVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + '2';
  cVar2 = in(8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

