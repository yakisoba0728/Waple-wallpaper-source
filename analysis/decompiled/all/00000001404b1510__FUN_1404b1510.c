// Function: FUN_1404b1510
// Addr: 1404b1510
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1510(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar1 = *piVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

