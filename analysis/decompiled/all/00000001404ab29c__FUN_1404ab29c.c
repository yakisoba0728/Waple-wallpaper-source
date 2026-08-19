// Function: FUN_1404ab29c
// Addr: 1404ab29c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab29c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  byte in_AH;
  byte bVar3;
  char cVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RDI;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = in_AL | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar3 = in_AH + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar2))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar2)))
       - bVar2) - CARRY1(in_AH,bVar5);
  cVar4 = bVar3 * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2)))
       - CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2))) - (uint)CARRY1(bVar3,bVar3);
  cVar4 = cVar4 + bVar2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2));
  pcVar1 = (char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar2)));
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(unaff_RDI + CONCAT71(unaff_00000019,unaff_BL));
  *pcVar1 = *pcVar1 + bVar5;
  pcVar1 = (char *)(unaff_RDI + CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

