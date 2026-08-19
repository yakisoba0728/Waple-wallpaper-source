// Function: FUN_1404b4c0c
// Addr: 1404b4c0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4c0c(longlong param_1,char *param_2)

{
  byte bVar1;
  byte in_AL;
  char cVar2;
  byte in_AH;
  byte bVar3;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RDI;
  
  bVar3 = in_AH | in_AL;
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + in_AL;
  param_1 = param_1 + -1;
  if (param_1 == 0 || *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) == '\0') {
    cVar2 = (in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL))) -
            CARRY1(bVar1,in_AL);
    *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,cVar2)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,cVar2)) +
         (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)param_1;
  cVar2 = (unaff_BL - *param_2) - CARRY1(bVar1,(byte)param_1);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) + unaff_BH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,in_AL)) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

