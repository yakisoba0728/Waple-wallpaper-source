// Function: FUN_1404a200c
// Addr: 1404a200c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a200c(longlong param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  cVar2 = in_AH + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) + param_1);
  *pcVar1 = *pcVar1 + param_2;
  (&stack0x04ac4200)
  [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))] =
       (&stack0x04ac4200)
       [CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))] +
       (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

