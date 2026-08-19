// Function: FUN_1404bd360
// Addr: 1404bd360
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd360(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  undefined7 uVar3;
  uint unaff_EBP;
  char *unaff_RDI;
  
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  cVar2 = (char)param_1 -
          *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x78250007);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 9);
  *puVar1 = *puVar1 & unaff_EBP;
  *unaff_RDI = *unaff_RDI + (char)param_2;
  if (*unaff_RDI != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(uVar3,cVar2) = *(char *)CONCAT71(uVar3,cVar2) + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

