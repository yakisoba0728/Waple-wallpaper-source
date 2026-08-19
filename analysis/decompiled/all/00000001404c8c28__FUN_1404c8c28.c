// Function: FUN_1404c8c28
// Addr: 1404c8c28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8c28(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(unaff_RDI + -0x6027ffcf + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + cVar3;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = in_AL + 'u';
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *(char *)(unaff_RBP + -100) = *(char *)(unaff_RBP + -100) + cVar3;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,cVar2))) ^
       CONCAT22(in_register_00000002,CONCAT11(0x9f,cVar2));
  *(char *)(unaff_RBX + 0x21004c) = *(char *)(unaff_RBX + 0x21004c) - (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,cVar2))) +
       cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

