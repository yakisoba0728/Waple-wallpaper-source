// Function: FUN_1404c67ac
// Addr: 1404c67ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c67ac(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  byte in_AH;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  longlong unaff_RBX;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = in_AH + bVar4;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,in_AL)))
       + in_AL + CARRY1(in_AH,bVar4);
  cVar2 = bVar3 * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)) + (uint)CARRY1(bVar3,bVar3);
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar2;
  *(char *)(param_1 + unaff_RBX) = *(char *)(param_1 + unaff_RBX) + bVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) + -0x9ffd0d9);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

