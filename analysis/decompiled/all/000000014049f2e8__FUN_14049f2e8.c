// Function: FUN_14049f2e8
// Addr: 14049f2e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f2e8(void)

{
  int *piVar1;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char *in_R9;
  
  cVar2 = in(0xf1);
  *in_R9 = *in_R9 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  piVar1 = (int *)(longlong)CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2 + in_AH));
  *piVar1 = *piVar1 + CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2 + in_AH));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

