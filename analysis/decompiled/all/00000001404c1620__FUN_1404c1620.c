// Function: FUN_1404c1620
// Addr: 1404c1620
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1620(char *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_R12B;
  
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = in_AL + -0x15;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + 0x28);
  *pcVar1 = *pcVar1 + in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
  *param_1 = *param_1 + param_3;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

