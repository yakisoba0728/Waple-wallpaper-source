// Function: FUN_1404a4728
// Addr: 1404a4728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4728(longlong param_1,longlong param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar1;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH * '\x02',in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH * '\x02',in_AL)) | in_AL;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar1;
  *(char *)(param_1 + 0x78d1000) = *(char *)(param_1 + 0x78d1000) + cVar1;
  cRam00000000e44a4eca = cRam00000000e44a4eca + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

