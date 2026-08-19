// Function: FUN_1404b85e0
// Addr: 1404b85e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b85e0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  longlong unaff_RBX;
  bool in_SF;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  if (!in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  cVar2 = in_AH + cVar3;
  *(char *)(unaff_RBX + param_2) = *(char *)(unaff_RBX + param_2) + cVar3;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) + param_2);
  *pcVar1 = *pcVar1 + cVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

