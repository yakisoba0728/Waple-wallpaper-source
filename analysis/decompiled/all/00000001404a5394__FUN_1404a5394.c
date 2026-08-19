// Function: FUN_1404a5394
// Addr: 1404a5394
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5394(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_EBX;
  int *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & unaff_EBX;
  cVar2 = in_AH - (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  bVar3 = in_AL - 0x3cU |
          *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL - 0x3cU)));
  bRamb00007ffca0007ff = bVar3;
  *param_1 = *param_1 + -8;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3)))
       + bVar3;
  *(char *)(param_2 + -0x35fff801) = *(char *)(param_2 + -0x35fff801) + cVar2;
  *unaff_RDI = *unaff_RDI + 1;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) + 0x21004a52);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3)))
       + bVar3;
  pcVar1 = (char *)((longlong)unaff_RDI * 9 + 7);
  *pcVar1 = *pcVar1 + (char)(unaff_EBX >> 8);
  *(char *)(param_2 + -0x6ffff801) = *(char *)(param_2 + -0x6ffff801) + cVar2;
  *param_1 = *param_1 + -0x10;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3)))
       + bVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) + -1);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

