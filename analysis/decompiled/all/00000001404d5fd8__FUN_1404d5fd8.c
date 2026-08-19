// Function: FUN_1404d5fd8
// Addr: 1404d5fd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5fd8(char param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_BL;
  char unaff_R12B;
  bool in_OF;
  undefined2 in_FPUControlWord;
  
  if (!in_OF) {
    *(undefined2 *)CONCAT71(in_register_00000001,in_AL) = in_FPUControlWord;
    bVar1 = in_AL + unaff_BL;
    *param_4 = *param_4 + unaff_R12B;
    *param_2 = *param_2 | bVar1;
    *(char *)CONCAT71(in_register_00000001,bVar1) =
         *(char *)CONCAT71(in_register_00000001,bVar1) + param_1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

