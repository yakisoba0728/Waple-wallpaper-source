// Function: FUN_1404c6540
// Addr: 1404c6540
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6540(char *param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = param_1[-0x6dd7ffd1];
  param_1[-0x6dd7ffd1] = bVar1 << 6 | bVar1 >> 3;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

