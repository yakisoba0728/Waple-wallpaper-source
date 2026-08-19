// Function: FUN_1404b17d8
// Addr: 1404b17d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b17d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  byte bVar4;
  undefined6 uVar5;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + bVar4;
  cVar3 = (char)param_2 + *unaff_RSI + CARRY1(bVar2,bVar4);
  pcVar1 = (char *)(CONCAT62(uVar5,CONCAT11(bVar4,cVar3)) + 0x16 +
                   CONCAT62(uVar5,CONCAT11(bVar4,cVar3)));
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

