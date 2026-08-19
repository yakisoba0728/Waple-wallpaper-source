// Function: FUN_1404a51cc
// Addr: 1404a51cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a51cc(longlong param_1,longlong param_2)

{
  byte in_AL;
  char in_AH;
  char cVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar2;
  char cVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = (char)param_2;
  cVar1 = in_AH + cVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       | in_AL;
  cVar1 = cVar1 + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL));
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar3;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar1;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar2;
  *(char *)(param_1 + 0x7f27000) = *(char *)(param_1 + 0x7f27000) + cVar3;
  *(char *)(unaff_RSI + 0x280007f2) = *(char *)(unaff_RSI + 0x280007f2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

