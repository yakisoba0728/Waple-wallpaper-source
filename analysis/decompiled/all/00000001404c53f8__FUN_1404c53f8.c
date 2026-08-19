// Function: FUN_1404c53f8
// Addr: 1404c53f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c53f8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL * '\x02' + in_CF) + 1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) +
            (CARRY1(in_AL,in_AL) || CARRY1(in_AL * '\x02',in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

