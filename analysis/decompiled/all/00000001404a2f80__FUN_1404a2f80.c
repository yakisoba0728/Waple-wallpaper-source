// Function: FUN_1404a2f80
// Addr: 1404a2f80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2f80(char *param_1,undefined8 param_2)

{
  char in_AL;
  byte bVar1;
  undefined6 uVar2;
  char in_CF;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  *param_1 = *param_1 + in_AL + -0x74 + in_CF;
  bVar1 = (byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)param_1 * 2);
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

