// Function: FUN_1404a8a5c
// Addr: 1404a8a5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8a5c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int unaff_ESP;
  
  bVar1 = bRam38000bcfcc000bcf;
  *param_2 = (int)param_1;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) +
       unaff_ESP;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1));
  *param_1 = *param_1 & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

