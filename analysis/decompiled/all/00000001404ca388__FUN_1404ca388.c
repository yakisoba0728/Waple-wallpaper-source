// Function: FUN_1404ca388
// Addr: 1404ca388
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca388(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  undefined6 uVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004ca2);
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x1effcd50);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(param_2 + 0x4c) = *(char *)(param_2 + 0x4c) + cVar2;
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,0x32)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,0x32)) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + '2';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + '2';
  cVar2 = in(8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

