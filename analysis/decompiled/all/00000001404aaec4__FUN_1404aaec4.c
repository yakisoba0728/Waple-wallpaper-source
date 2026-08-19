// Function: FUN_1404aaec4
// Addr: 1404aaec4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaec4(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  longlong unaff_RBX;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = in_AL | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar3 = in_AH + (char)param_2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       | bVar2;
  cVar3 = cVar3 + bVar2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2));
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar4;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) + param_2);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) + -0x7a);
  *pcVar1 = *pcVar1 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

