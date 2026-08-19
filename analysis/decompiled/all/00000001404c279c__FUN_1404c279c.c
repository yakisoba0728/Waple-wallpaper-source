// Function: FUN_1404c279c
// Addr: 1404c279c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c279c(undefined8 param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 +
                   CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) - (char)param_2,(char)param_1))
                   );
  *pcVar1 = *pcVar1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

