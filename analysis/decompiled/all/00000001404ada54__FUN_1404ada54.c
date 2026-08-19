// Function: FUN_1404ada54
// Addr: 1404ada54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ada54(undefined8 param_1,undefined8 param_2)

{
  bRam00000001758ada6c = bRam00000001758ada6c ^ (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

