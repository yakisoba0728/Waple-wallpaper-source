// Function: FUN_14049fbf8
// Addr: 14049fbf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fbf8(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char in_AL;
  byte bVar2;
  char cVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *unaff_retaddr;
  
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = in_AL - 5;
  *param_4 = *param_4;
  *param_2 = *param_2 | bVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + (char)param_1;
  cVar3 = in(0x57);
  *param_1 = *param_1 + in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
  uVar1 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
  cVar3 = (cVar3 + '\x05') - CARRY4(uVar1,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *param_4 = *param_4 + '\b';
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  *unaff_retaddr = *unaff_retaddr + in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
  uVar1 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
  cVar3 = (cVar3 + '\x05') - CARRY4(uVar1,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *param_4 = *param_4 + '\x10';
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

