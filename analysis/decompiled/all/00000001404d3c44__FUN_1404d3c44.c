// Function: FUN_1404d3c44
// Addr: 1404d3c44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3c44(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  int unaff_EBP;
  char unaff_R12B;
  char in_CF;
  
  cVar2 = (in_AL + -0x3b) - in_CF;
  *param_4 = *param_4 + unaff_R12B;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))));
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)(param_1 + (longlong)unaff_RBX) =
       *(char *)(param_1 + (longlong)unaff_RBX) + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + (longlong)unaff_RBX) = *(char *)(param_2 + (longlong)unaff_RBX) + in_AH;
  cVar2 = cRam10003f9bbe003f9b;
  *(uint *)CONCAT44(in_register_00000004,
                    CONCAT22(in_register_00000002,CONCAT11(in_AH,cRam10003f9bbe003f9b))) =
       *(uint *)CONCAT44(in_register_00000004,
                         CONCAT22(in_register_00000002,CONCAT11(in_AH,cRam10003f9bbe003f9b))) &
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cRam10003f9bbe003f9b));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *unaff_RBX = *unaff_RBX + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

