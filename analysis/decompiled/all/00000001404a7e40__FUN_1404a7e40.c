// Function: FUN_1404a7e40
// Addr: 1404a7e40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7e40(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(char *)(param_2 + 0xac69000) = *(char *)(param_2 + 0xac69000) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x13fff53a);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar4;
  if (SCARRY1(cVar2,cVar4) == *pcVar1 < '\0') {
    *param_1 = *param_1 + in_AH;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (code *)swi(10);
  (*pcVar3)();
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x33);
  *pcVar1 = *pcVar1 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

