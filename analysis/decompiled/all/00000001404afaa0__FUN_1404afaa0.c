// Function: FUN_1404afaa0
// Addr: 1404afaa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afaa0(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  byte in_AH;
  byte bVar1;
  undefined6 in_register_00000002;
  
  bVar1 = in_AH ^ (byte)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar1,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar1,in_AL)) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

