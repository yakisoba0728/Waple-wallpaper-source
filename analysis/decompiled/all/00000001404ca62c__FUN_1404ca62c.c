// Function: FUN_1404ca62c
// Addr: 1404ca62c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca62c(char *param_1,undefined8 param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar1;
  char cVar2;
  undefined7 uVar3;
  longlong unaff_RBP;
  char *unaff_RDI;
  char unaff_R12B;
  
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  cVar1 = (char)param_1;
  *(char *)(unaff_RBP + 0x21004c) = *(char *)(unaff_RBP + 0x21004c) - in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar2 = (char)param_2 + cVar1;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RDI = *unaff_RDI + cVar1;
  in(8);
  *(char *)CONCAT71(uVar3,cVar2) = *(char *)CONCAT71(uVar3,cVar2) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

