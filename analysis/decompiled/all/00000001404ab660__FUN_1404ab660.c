// Function: FUN_1404ab660
// Addr: 1404ab660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab660(char *param_1,undefined8 param_2)

{
  char in_AL;
  byte bVar1;
  undefined6 uVar2;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  verr();
  *param_1 = *param_1 + in_AL;
  bVar1 = (byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)param_1 * 2);
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,0x19)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,0x19)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

