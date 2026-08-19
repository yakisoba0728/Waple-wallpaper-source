// Function: FUN_1404a88c4
// Addr: 1404a88c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a88c4(undefined8 param_1,undefined4 *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)param_1 >> 0x20);
  LOCK();
  uVar3 = *param_2;
  *param_2 = (int)param_1;
  UNLOCK();
  puVar1 = (uint *)(CONCAT44(uVar4,uVar3) + 10);
  *puVar1 = *puVar1 & (uint)param_2;
  pcVar2 = (char *)(CONCAT44(uVar4,uVar3) + 100);
  *pcVar2 = *pcVar2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

