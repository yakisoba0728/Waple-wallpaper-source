// Function: FUN_1404d5828
// Addr: 1404d5828
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5828(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  char in_AH;
  undefined6 in_register_00000002;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  cVar3 = cRam2c003f6dba003f6d;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + -0x45ffc093);
  *pcVar1 = *pcVar1 + in_AH;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

