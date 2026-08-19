// Function: FUN_1404cd84c
// Addr: 1404cd84c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd84c(undefined8 param_1,undefined4 param_2)

{
  int in_EAX;
  
  uRam00000001a461d85e =
       uRam00000001a461d85e &
       CONCAT22((short)((uint)param_2 >> 0x10),
                CONCAT11((char)((uint)param_2 >> 8) + *(char *)(ulonglong)(in_EAX + 0x3600470),
                         (char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

