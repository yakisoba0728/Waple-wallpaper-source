// Function: FUN_1404a8f40
// Addr: 1404a8f40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8f40(void)

{
  char cVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar1 = in_AH * '\x02';
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar2))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar2))) -
       CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

