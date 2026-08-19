// Function: FUN_1404c8bfc
// Addr: 1404c8bfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8bfc(uint param_1,undefined8 param_2)

{
  char in_AL;
  byte bVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & param_1;
  bVar1 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(char *)(unaff_RBP + -100) = *(char *)(unaff_RBP + -100) + (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar1))) ^
       CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar1));
  *(char *)(unaff_RBX + 0x2721004c) = *(char *)(unaff_RBX + 0x2721004c) - (char)param_1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar1))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x9f,bVar1))) |
       bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

