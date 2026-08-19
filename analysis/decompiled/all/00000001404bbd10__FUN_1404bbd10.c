// Function: FUN_1404bbd10
// Addr: 1404bbd10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbd10(undefined4 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  longlong unaff_RBX;
  
  LOCK();
  uVar2 = *param_1;
  *param_1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8)
                                    ,(char)in_RAX));
  UNLOCK();
  pcVar1 = (char *)(unaff_RBX + 1 + (longlong)param_1 * 4);
  *pcVar1 = *pcVar1 + (char)((uint)uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

