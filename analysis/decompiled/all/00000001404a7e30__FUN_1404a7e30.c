// Function: FUN_1404a7e30
// Addr: 1404a7e30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7e30(char *param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte in_AL;
  byte in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  char cVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  cVar3 = in_AH + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)) + (uint)CARRY1(in_AH,in_AL);
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar5;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_2);
  *pcVar1 = *pcVar1 + cVar3;
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + (char)param_2;
  *(char *)(param_2 + 0xac69000) = *(char *)(param_2 + 0xac69000) + cVar5;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x13fff53a);
  cVar5 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar4;
  if (SCARRY1(cVar5,cVar4) == *pcVar1 < '\0') {
    *param_1 = *param_1 + cVar3;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))
                          ) + (char)param_1;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))
                          ) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(10);
  (*pcVar2)();
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x33);
  *pcVar1 = *pcVar1 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

