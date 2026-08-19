// Function: FUN_1404be854
// Addr: 1404be854
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be854(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_SPL;
  char in_CF;
  
  uVar2 = (uint)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                         (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8) + in_CF) &
          0x25f44f;
  pcVar1 = (char *)((ulonglong)(uVar2 << 8) + 0xd);
  *pcVar1 = *pcVar1 + (char)uVar2;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

