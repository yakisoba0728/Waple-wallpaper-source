// Function: FUN_1404b5a30
// Addr: 1404b5a30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5a30(longlong param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int *unaff_RDI;
  bool bVar3;
  
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (param_1 == 1 ||
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = (in_AL - *(char *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))) -
          CARRY1(bVar1,in_AL);
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = *(undefined1 *)((longlong)unaff_RDI + 0x4a);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1));
  bVar3 = CARRY1(*(byte *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))),bVar1);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       + bVar1;
  bVar1 = -*(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,0xc3))) - 0x3d;
  cVar2 = bVar1 - bVar3;
  cVar2 = (cVar2 - *(char *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))) -
          (0xc3 < *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,0xc3))) ||
          bVar1 < bVar3);
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = *(undefined1 *)((longlong)unaff_RDI + 0x4a);
  *unaff_RDI = *unaff_RDI + param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

