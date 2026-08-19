// Function: FUN_1404c7f98
// Addr: 1404c7f98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7f98(char *param_1,char *param_2)

{
  char *pcVar1;
  longlong in_RAX;
  undefined1 *puVar2;
  char unaff_BL;
  longlong unaff_RSI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  
  *param_2 = *param_2 + (char)param_1;
  puVar2 = (undefined1 *)
           (ulonglong)
           ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                          (byte)in_RAX | *(byte *)(in_FS_OFFSET + in_RAX)) + 0x20000b54);
  LOCK();
  *puVar2 = (char)((ulonglong)param_2 >> 8);
  UNLOCK();
  pcVar1 = (char *)(unaff_RSI + 0x7ebc0030 + (longlong)puVar2 * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

