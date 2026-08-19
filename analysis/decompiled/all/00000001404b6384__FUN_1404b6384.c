// Function: FUN_1404b6384
// Addr: 1404b6384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6384(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  byte in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  char *unaff_RDI;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = in_AH + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)) + (uint)CARRY1(in_AH,in_AL);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) + param_2);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)(param_2 + 0x1b) = *(char *)(param_2 + 0x1b) + (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RDI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

