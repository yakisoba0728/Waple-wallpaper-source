// Function: FUN_1404c9e80
// Addr: 1404c9e80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9e80(char *param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  char cVar3;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 unaff_BL;
  char unaff_R12B;
  
  bVar2 = in_AL + 99;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + 0x58);
  *pcVar1 = *pcVar1 + in_AH;
  bVar2 = bVar2 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2));
  LOCK();
  *(undefined1 *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + 0x32) = unaff_BL;
  UNLOCK();
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + in_AH;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  cVar3 = in(8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

