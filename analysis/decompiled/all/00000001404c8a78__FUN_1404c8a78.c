// Function: FUN_1404c8a78
// Addr: 1404c8a78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8a78(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_EBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(uint *)(param_1 + (longlong)unaff_RSI) = *(uint *)(param_1 + (longlong)unaff_RSI) | unaff_EBX;
  *unaff_RDI = *unaff_RSI;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar3 = in_AH + (char)((ulonglong)param_2 >> 8);
  bVar2 = bVar2 | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)));
  puVar1 = (uint *)(param_1 + (longlong)(unaff_RSI + 1));
  *puVar1 = *puVar1 | unaff_EBX;
  unaff_RDI[1] = unaff_RSI[1];
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       ^ CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       + bVar2;
  puVar1 = (uint *)(param_1 + (longlong)(unaff_RSI + 2));
  *puVar1 = *puVar1 | unaff_EBX;
  unaff_RDI[2] = unaff_RSI[2];
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       ^ CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

