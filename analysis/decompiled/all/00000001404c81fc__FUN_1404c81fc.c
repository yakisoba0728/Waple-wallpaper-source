// Function: FUN_1404c81fc
// Addr: 1404c81fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c81fc(undefined8 param_1,byte param_2)

{
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  param_2 = in_AL & param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))
                        ) + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2))
                        ) + param_2;
  uRam000000013451820c =
       uRam000000013451820c & CONCAT22(in_register_00000002,CONCAT11(in_AH,param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

