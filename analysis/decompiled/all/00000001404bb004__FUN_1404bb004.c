// Function: FUN_1404bb004
// Addr: 1404bb004
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb004(uint *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_ESP;
  
  cVar2 = cRam0000210bd600210b;
  *param_4 = *param_4 + (char)unaff_ESP;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *param_1 = *param_1 | unaff_ESP;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x33ffdef5);
  *pcVar1 = *pcVar1 + in_AH;
  *param_4 = *param_4 + (char)unaff_ESP;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x3cffdef7);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 | unaff_ESP;
  *param_4 = *param_4 + cVar2 * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

