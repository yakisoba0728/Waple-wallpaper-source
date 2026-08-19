// Function: FUN_1404bf888
// Addr: 1404bf888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf888(longlong param_1,longlong param_2)

{
  char in_AL;
  char in_AH;
  char cVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  cVar1 = in_AH + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL));
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar2;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar1 + in_AL;
  *(char *)(param_1 + 0x276be000) = *(char *)(param_1 + 0x276be000) + cVar2;
  *(char *)(param_2 + 0x6c) = *(char *)(param_2 + 0x6c) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

