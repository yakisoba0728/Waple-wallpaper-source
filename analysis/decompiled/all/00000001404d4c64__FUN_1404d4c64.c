// Function: FUN_1404d4c64
// Addr: 1404d4c64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4c64(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  char unaff_R12B;
  uint *puVar2;
  
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar1 = in_EAX + 0xe4050002;
  puVar2 = (uint *)(ulonglong)uVar1;
  *puVar2 = *puVar2 | uVar1;
  *(char *)((longlong)puVar2 + 0x4b) = *(char *)((longlong)puVar2 + 0x4b) + cRam000000017dda137b;
  *param_4 = *param_4 + unaff_R12B;
  *param_2 = *param_2 + (char)uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

