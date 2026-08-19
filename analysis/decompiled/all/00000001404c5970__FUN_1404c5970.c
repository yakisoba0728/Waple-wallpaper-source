// Function: FUN_1404c5970
// Addr: 1404c5970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5970(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,0x2e) + 0x58);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

