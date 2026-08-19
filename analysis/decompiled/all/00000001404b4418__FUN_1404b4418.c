// Function: FUN_1404b4418
// Addr: 1404b4418
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4418(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar1 = (char *)(param_2 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL) - (unaff_BH < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

